#include "voxblox_rrt_planner/voxblox_rrt_planner.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "voxblox_rrt_planner"); // 'voxblox_rrt_planner' node generate
  google::InitGoogleLogging(argv[0]); 
  google::InstallFailureSignalHandler(); 

  ros::NodeHandle nh(""); 
  ros::NodeHandle nh_private("~"); 

  FLAGS_alsologtostderr = true; 

  mav_planning::VoxbloxRrtPlanner node(nh, nh_private); // 'mav_planning' namespace-> 'VoxbloxRrtPlanner' Class -> 'node' Object generate -> calling Generator(param, param)
  ROS_INFO("Initialized RRT Planner Voxblox node."); 

  ros::spin();
  return 0;
}
