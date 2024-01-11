import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy,QoSDurabilityPolicy

class MinimalDepthSubscriber(Node):

    def __init__(self):
        super().__init__('zed_depth_tutorial')

        depth_qos=rclpy.qos.QoSProfile(
            depth=10,
            reliability=rclpy.qos.QoSReliabilityPolicy.BEST_EFFORT,
            durability=rclpy.qos.QoSDurabilityPolicy.VOLATILE,
            history=rclpy.qos.QoSHistoryPolicy.KEEP_LAST
            )
        

        # depth_qos = 10
        # depth_qos.keep_last = 10
        # depth_qos.best_effort = True
        # depth_qos.durability_volatile = True

        # Create depth map subscriber
        # self.depth_sub = self.create_subscription(
        #     Image, 'depth', self.depth_callback, depth_qos)
        self.depth_sub = self.create_subscription(
            Image, '/zed2i/zed_node/depth/depth_registered', self.depth_callback, depth_qos)

    def depth_callback(self, msg):
        # Get a pointer to the depth values casting the data
        # pointer to floating point
        # depths = list(msg.data)
        depths = memoryview(msg.data).cast('f')
        # Image coordinates of the center pixel
        u = msg.width // 2
        v = msg.height // 2

        # Linear index of the center pixel
        center_idx = u + msg.width * v

        # Output the measure
        self.get_logger().info("Center distance : %g m" % depths[center_idx])


def main(args=None):
    rclpy.init(args=args)

    depth_node = MinimalDepthSubscriber()

    rclpy.spin(depth_node)

    depth_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()