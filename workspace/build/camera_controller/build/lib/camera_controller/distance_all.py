import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
from sensor_msgs.msg import Image
import numpy as np
import quaternion

class CameraTransformNode(Node):

    def __init__(self):
        super().__init__('camera_transform_node')

        # Initialize extrinsic parameters with identity matrix and zero translation
        self.rotation_matrix = np.identity(3)
        self.translation_vector = np.zeros(3)

        # Create subscriptions to odometry and depth topics
        self.odometry_sub = self.create_subscription(Pose, 'odometry', self.odometry_callback, 10)
        self.depth_sub = self.create_subscription(Image, 'depth', self.depth_callback, 10)

    def odometry_callback(self, msg):
        # Extract position and orientation from odometry message
        odometry_position = [msg.position.x, msg.position.y, msg.position.z]
        odometry_orientation = [msg.orientation.x, msg.orientation.y, msg.orientation.z, msg.orientation.w]

        # Update extrinsic parameters based on odometry
        self.rotation_matrix, self.translation_vector = self.update_extrinsic_parameters(odometry_position, odometry_orientation)

    def update_extrinsic_parameters(self, odometry_position, odometry_orientation):
        # Assuming odometry_position is a 3-element array [x, y, z]
        translation_vector = np.array(odometry_position)

        # Assuming odometry_orientation is a 4-element array [x, y, z, w]
        rotation_quaternion = quaternion.as_quat_array(odometry_orientation)
        rotation_matrix = quaternion.as_rotation_matrix(rotation_quaternion)

        return rotation_matrix, translation_vector

    def depth_callback(self, msg):
        # Get a pointer to the depth values casting the data pointer to floating point
        depths = list(msg.data)

        # Image size
        width = msg.width
        height = msg.height

        # Loop through all pixels in the depth image
        for v in range(height):
            for u in range(width):
                # Linear index of the current pixel
                pixel_idx = u + width * v

                # Convert pixel coordinates to 3D point in camera frame
                Z = depths[pixel_idx]
                X = (u - width // 2) * Z / width
                Y = (v - height // 2) * Z / height
                point_camera_frame = np.array([X, Y, Z])

                # Transform 3D point to robot's base frame
                point_robot_base_frame = np.dot(self.rotation_matrix, point_camera_frame) + self.translation_vector

                # Print the transformed point (replace with your desired processing)
                print(f"Transformed Point (Robot's Base Frame) at Pixel ({u}, {v}): {point_robot_base_frame}")

def main(args=None):
    rclpy.init(args=args)

    camera_transform_node = CameraTransformNode()

    rclpy.spin(camera_transform_node)

    camera_transform_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
