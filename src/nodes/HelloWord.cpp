#include <ros/ros.h>
#include "std_msgs/String.h"
#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
  ros::init(argc, argv, "HelloWord");
  ros::NodeHandle nh;

  int count = 0;

  std_msgs::String msg;
  std::stringstream ss;
  ss << "hello world " << count;
  msg.data = ss.str();
  ROS_INFO("%s", msg.data.c_str());

  cout<<"Hello SLAM!"<<endl;

   /**
  *  ROS_INFO("Hello world!");
  */
  return 0;

}
