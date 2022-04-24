#include "ros/ros.h"
#include "weather2/WeatherCheck.h"

bool determineWeather(weather2::WeatherCheck::Request &req,
                      weather2::WeatherCheck::Response &res)
{
  int remainder = req.number;

  if(remainder == 1)
  {
    res.answer = "sunny";
  }
  else if (remainder == 2)
  {
    res.answer = "cloudly";
  }
  else if (remainder == 3)
  {
    res.answer = "partly cloudly";
  }
  else if (remainder == 4)
  {
    res.answer = "rainy";
  }
  else if (remainder == 5)
  {
    res.answer = "snowy";
  }
  else if (remainder == 6)
  {
    res.answer = "sleeting";
  }
  else if (remainder == 7)
  {
    res.answer = "stormy";
  }
  else if (remainder == 8)
  {
    res.answer = "lightning";
  }
  else if (remainder == 9)
  {
    res.answer = "thunder";
  }
  else if (remainder == 10)
  {
    res.answer = "windy";
  }
  else if (remainder == 11)
  {
    res.answer = "foggy";
  }
  else if (remainder == 12)
  {
    res.answer = "icy";
  }
  else if (remainder == 13)
  {
    res.answer = "clear sky";
  }
  else if (remainder == 14)
  {
    res.answer = "hot";
  }
  else if (remainder == 15)
  {
    res.answer = "warm";
  }
  else if (remainder == 16)
  {
    res.answer = "cold";
  }
  else if (remainder == 17)
  {
    res.answer = "freezing";
  }
  else if (remainder == 18)
  {
    res.answer = "tornado";
  }
  else if (remainder == 19)
  {
    res.answer = "rainbow";
  }
  else if (remainder == 20)
  {
    res.answer = "super hot";
  }
  else
  {
    return false;
  }

  return true;
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "weather_service_server_node");

  ros::NodeHandle node_handle;

  ros::ServiceServer service = node_handle.advertiseService("weather_check", determineWeather);

  ROS_INFO("Weather Check Server Running...");

  ros::spin();

  return 0;
}
