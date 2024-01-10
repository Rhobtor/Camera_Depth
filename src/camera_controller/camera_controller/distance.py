import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image


class MinimalDepthSubscriber(Node):

    def __init__(self):
        super().__init__('zed_depth_tutorial')

        # Note: it is very important to use a QOS profile for the subscriber that is compatible
        # with the QOS profile of the publisher.
        # The ZED component node uses a default QoS profile with reliability set as "RELIABLE"
        # and durability set as "VOLATILE".
        # To be able to receive the subscribed topic, the subscriber must use compatible
        # parameters.

        # https://github.com/ros2/ros2/wiki/About-Quality-of-Service-Settings

        depth_qos = 10
        depth_qos.keep_last = 10
        depth_qos.best_effort = True
        depth_qos.durability_volatile = True

        # Create depth map subscriber
        self.depth_sub = self.create_subscription(
            Image, 'depth', self.depth_callback, depth_qos)

    def depth_callback(self, msg):
        # Get a pointer to the depth values casting the data
        # pointer to floating point
        depths = list(msg.data)

        # Image coordinates of the center pixel
        u = msg.width // 2
        v = msg.height // 2

        # Linear index of the center pixel
        center_idx = u + msg.width * v

        # Output the measure
        self.get_logger().info("Center distance : %g m", depths[center_idx])


def main(args=None):
    rclpy.init(args=args)

    depth_node = MinimalDepthSubscriber()

    rclpy.spin(depth_node)

    depth_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()