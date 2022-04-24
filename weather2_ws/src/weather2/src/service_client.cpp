#include "ros/ros.h"
#include "weather2/WeatherCheck.h"

#include <iostream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "weather_service_client_node");

  ros::NodeHandle node_handle;

  ros::ServiceClient client = node_handle.serviceClient<weather2::WeatherCheck>("weather_check");

  weather2::WeatherCheck weather_check_srv;

  int input_num;

  std::cout << "1. Incheon " << std::endl;
  std::cout << "2. Seoul " << std::endl;
  std::cout << "3. Daegu " << std::endl;
  std::cout << "4. Busan " << std::endl;
  std::cout << "5. Gwangju " << std::endl;
  std::cout << "6. Jeju-si  " << std::endl;
  std::cout << "7. Daejon " << std::endl;
  std::cout << "8. Ulsan " << std::endl;
  std::cout << "9. Jeonju-si " << std::endl;
  std::cout << "10. Suwon-si " << std::endl;
  std::cout << "11. Sejong city " << std::endl;
  std::cout << "12. Andong " << std::endl;
  std::cout << "13. Yeosu-si " << std::endl;
  std::cout << "14. Ansan-si " << std::endl;
  std::cout << "15. Chuncheon-si " << std::endl;
  std::cout << "16. Naju-si " << std::endl;
  std::cout << "17. Pohang-si " << std::endl;
  std::cout << "18. Mokpo-si " << std::endl;
  std::cout << "19. Suncheon-si " << std::endl;
  std::cout << "20. Gimpo " << std::endl;
  std::cout << "Type '0' to quit" << std::endl;

  while (ros::ok())
  {
    std::cout << "PLease select your area: ";
    std::cin >> input_num;

    weather_check_srv.request.number = input_num;

    if (input_num == 0)
    {
      ROS_INFO("Exiting Application...");
      return 0;
    }

    if (client.call(weather_check_srv))
    {
      std::string resp;
      resp = weather_check_srv.response.answer;

      std::cout << " At the moment the wheather is " << resp << std::endl;
    }
    else
    {
      ROS_ERROR(" Sorry! It is not available yet ");
      return 1;
    }

    std::cin.clear();


  }
}
