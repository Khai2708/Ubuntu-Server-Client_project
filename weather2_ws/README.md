# Ubuntu weather (Client-Server) project

- Creating the weather2 project
```
asadbek@ubuntu:~/catkin_ws$ mkdir weather2_ws
asadbek@ubuntu:~/catkin_ws$ cd weather2_ws/
asadbek@ubuntu:~/catkin_ws/weather2_ws$ mkdir src
asadbek@ubuntu:~/catkin_ws/weather2_ws$ cd .s
bash: cd: .s: No such file or directory
asadbek@ubuntu:~/catkin_ws/weather2_ws$ cd src/
asadbek@ubuntu:~/catkin_ws/weather2_ws/src$ catkin_create_pkg weather2 roscpp
Created file weather2/package.xml
Created file weather2/CMakeLists.txt
Created folder weather2/include/weather2
Created folder weather2/src
Successfully created files in /home/asadbek/catkin_ws/weather2_ws/src/weather2. Please adjust the values in package.xml.
asadbek@ubuntu:~/catkin_ws/weather2_ws/src$ ls
weather2
asadbek@ubuntu:~/catkin_ws/weather2_ws/src$ cd weather2/
asadbek@ubuntu:~/catkin_ws/weather2_ws/src/weather2$ ls
CMakeLists.txt  include  package.xml  src
asadbek@ubuntu:~/catkin_ws/weather2_ws/src/weather2$ mkdir launch
asadbek@ubuntu:~/catkin_ws/weather2_ws/src/weather2$ mkdir srv
asadbek@ubuntu:~/catkin_ws/weather2_ws/src/weather2$ ls
CMakeLists.txt  include  launch  package.xml  src  srv
---------------------------------------------------------------------
We updated src folder cpp codes (launch files in launch folder & speed_calc.cpp & rpm_pub.cpp) AND C_MAKE FILE (add target information for building speed_calc & rpm_pub objects )
---------------------------------------------------------------------
asadbek@ubuntu:~/catkin_ws/weather2_ws$ catkin_make
Base path: /home/asadbek/catkin_ws/weather2_ws
Source space: /home/asadbek/catkin_ws/weather2_ws/src
Build space: /home/asadbek/catkin_ws/weather2_ws/build
Devel space: /home/asadbek/catkin_ws/weather2_ws/devel
Install space: /home/asadbek/catkin_ws/weather2_ws/install
Creating symlink "/home/asadbek/catkin_ws/weather2_ws/src/CMakeLists.txt" pointing to "/opt/ros/noetic/share/catkin/cmake/toplevel.cmake"
####
#### Running command: "cmake /home/asadbek/catkin_ws/weather2_ws/src -DCATKIN_DEVEL_PREFIX=/home/asadbek/catkin_ws/weather2_ws/devel -DCMAKE_INSTALL_PREFIX=/home/asadbek/catkin_ws/weather2_ws/install -G Unix Makefiles" in "/home/asadbek/catkin_ws/weather2_ws/build"
####
-- The C compiler identification is GNU 9.4.0
-- The CXX compiler identification is GNU 9.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Using CATKIN_DEVEL_PREFIX: /home/asadbek/catkin_ws/weather2_ws/devel
-- Using CMAKE_PREFIX_PATH: /opt/ros/noetic
-- This workspace overlays: /opt/ros/noetic
-- Found PythonInterp: /usr/bin/python3 (found suitable version "3.8.10", minimum required is "3") 
-- Using PYTHON_EXECUTABLE: /usr/bin/python3
-- Using Debian Python package layout
-- Found PY_em: /usr/lib/python3/dist-packages/em.py  
-- Using empy: /usr/lib/python3/dist-packages/em.py
-- Using CATKIN_ENABLE_TESTING: ON
-- Call enable_testing()
-- Using CATKIN_TEST_RESULTS_DIR: /home/asadbek/catkin_ws/weather2_ws/build/test_results
-- Forcing gtest/gmock from source, though one was otherwise available.
-- Found gtest sources under '/usr/src/googletest': gtests will be built
-- Found gmock sources under '/usr/src/googletest': gmock will be built
-- Found PythonInterp: /usr/bin/python3 (found version "3.8.10") 
-- Found Threads: TRUE  
-- Using Python nosetests: /usr/bin/nosetests3
-- catkin 0.8.10
-- BUILD_SHARED_LIBS is on
-- BUILD_SHARED_LIBS is on
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- ~~  traversing 1 packages in topological order:
-- ~~  - weather2
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- +++ processing catkin package: 'weather2'
-- ==> add_subdirectory(weather2)
-- Using these message generators: gencpp;geneus;genlisp;gennodejs;genpy
-- weather2: 0 messages, 1 services
-- Configuring done
-- Generating done
-- Build files have been written to: /home/asadbek/catkin_ws/weather2_ws/build
####
#### Running command: "make -j2 -l2" in "/home/asadbek/catkin_ws/weather2_ws/build"
####
Scanning dependencies of target _weather2_generate_messages_check_deps_WeatherCheck
Scanning dependencies of target std_msgs_generate_messages_cpp
[  0%] Built target std_msgs_generate_messages_cpp
Scanning dependencies of target sensor_msgs_generate_messages_cpp
[  0%] Built target sensor_msgs_generate_messages_cpp
Scanning dependencies of target speed_calc
[  0%] Built target _weather2_generate_messages_check_deps_WeatherCheck
Scanning dependencies of target rpm_pub
[  6%] Building CXX object weather2/CMakeFiles/speed_calc.dir/src/speed_calc.cpp.o
[ 13%] Building CXX object weather2/CMakeFiles/rpm_pub.dir/src/rpm_pub.cpp.o
[ 20%] Linking CXX executable /home/asadbek/catkin_ws/weather2_ws/devel/lib/weather2/rpm_pub
[ 20%] Built target rpm_pub
Scanning dependencies of target std_msgs_generate_messages_lisp
[ 20%] Built target std_msgs_generate_messages_lisp
Scanning dependencies of target sensor_msgs_generate_messages_lisp
[ 20%] Built target sensor_msgs_generate_messages_lisp
Scanning dependencies of target std_msgs_generate_messages_eus
[ 20%] Built target std_msgs_generate_messages_eus
Scanning dependencies of target sensor_msgs_generate_messages_eus
[ 20%] Built target sensor_msgs_generate_messages_eus
Scanning dependencies of target std_msgs_generate_messages_nodejs
[ 20%] Built target std_msgs_generate_messages_nodejs
Scanning dependencies of target sensor_msgs_generate_messages_nodejs
[ 20%] Built target sensor_msgs_generate_messages_nodejs
Scanning dependencies of target sensor_msgs_generate_messages_py
[ 20%] Built target sensor_msgs_generate_messages_py
Scanning dependencies of target std_msgs_generate_messages_py
[ 20%] Built target std_msgs_generate_messages_py
Scanning dependencies of target weather2_generate_messages_cpp
[ 26%] Generating C++ code from weather2/WeatherCheck.srv
[ 33%] Linking CXX executable /home/asadbek/catkin_ws/weather2_ws/devel/lib/weather2/speed_calc
[ 33%] Built target weather2_generate_messages_cpp
Scanning dependencies of target weather2_generate_messages_lisp
[ 40%] Generating Lisp code from weather2/WeatherCheck.srv
[ 40%] Built target speed_calc
Scanning dependencies of target weather2_generate_messages_eus
[ 46%] Generating EusLisp code from weather2/WeatherCheck.srv
[ 46%] Built target weather2_generate_messages_lisp
Scanning dependencies of target weather2_generate_messages_nodejs
[ 53%] Generating Javascript code from weather2/WeatherCheck.srv
[ 53%] Built target weather2_generate_messages_nodejs
[ 60%] Generating EusLisp manifest code for weather2
Scanning dependencies of target weather2_generate_messages_py
[ 66%] Generating Python code from SRV weather2/WeatherCheck
[ 73%] Generating Python srv __init__.py for weather2
[ 73%] Built target weather2_generate_messages_py
Scanning dependencies of target service_client
[ 80%] Building CXX object weather2/CMakeFiles/service_client.dir/src/service_client.cpp.o
[ 80%] Built target weather2_generate_messages_eus
Scanning dependencies of target service_server
[ 86%] Building CXX object weather2/CMakeFiles/service_server.dir/src/service_server.cpp.o
[ 93%] Built target service_server
Scanning dependencies of target weather2_generate_messages
[ 93%] Built target weather2_generate_messages
[100%] Linking CXX executable /home/asadbek/catkin_ws/weather2_ws/devel/lib/weather2/service_client
[100%] Built target service_client
-----------------------------------------------------------------------
```
- Checking the weather2 services in the new tab
```
asadbek@ubuntu:~/catkin_ws/weather2_ws$ source devel/setup.bash
asadbek@ubuntu:~/catkin_ws/weather2_ws$ rossrv list 
control_msgs/QueryCalibrationState
control_msgs/QueryTrajectoryState
control_toolbox/SetPidGains
controller_manager_msgs/ListControllerTypes
controller_manager_msgs/ListControllers
controller_manager_msgs/LoadController
controller_manager_msgs/ReloadControllerLibraries
controller_manager_msgs/SwitchController
controller_manager_msgs/UnloadController
diagnostic_msgs/AddDiagnostics
diagnostic_msgs/SelfTest
dynamic_reconfigure/Reconfigure
gazebo_msgs/ApplyBodyWrench
gazebo_msgs/ApplyJointEffort
gazebo_msgs/BodyRequest
gazebo_msgs/DeleteLight
gazebo_msgs/DeleteModel
gazebo_msgs/GetJointProperties
gazebo_msgs/GetLightProperties
gazebo_msgs/GetLinkProperties
gazebo_msgs/GetLinkState
gazebo_msgs/GetModelProperties
gazebo_msgs/GetModelState
gazebo_msgs/GetPhysicsProperties
gazebo_msgs/GetWorldProperties
gazebo_msgs/JointRequest
gazebo_msgs/SetJointProperties
gazebo_msgs/SetJointTrajectory
gazebo_msgs/SetLightProperties
gazebo_msgs/SetLinkProperties
gazebo_msgs/SetLinkState
gazebo_msgs/SetModelConfiguration
gazebo_msgs/SetModelState
gazebo_msgs/SetPhysicsProperties
gazebo_msgs/SpawnModel
laser_assembler/AssembleScans
laser_assembler/AssembleScans2
map_msgs/GetMapROI
map_msgs/GetPointMap
map_msgs/GetPointMapROI
map_msgs/ProjectedMapsInfo
map_msgs/SaveMap
map_msgs/SetMapProjections
nav_msgs/GetMap
nav_msgs/GetPlan
nav_msgs/LoadMap
nav_msgs/SetMap
nodelet/NodeletList
nodelet/NodeletLoad
nodelet/NodeletUnload
pcl_msgs/UpdateFilename
polled_camera/GetPolledImage
roscpp/Empty
roscpp/GetLoggers
roscpp/SetLoggerLevel
roscpp_tutorials/TwoInts
rospy_tutorials/AddTwoInts
rospy_tutorials/BadTwoInts
rviz/SendFilePath
sensor_msgs/SetCameraInfo
std_srvs/Empty
std_srvs/SetBool
std_srvs/Trigger
tf/FrameGraph
tf2_msgs/FrameGraph
topic_tools/DemuxAdd
topic_tools/DemuxDelete
topic_tools/DemuxList
topic_tools/DemuxSelect
topic_tools/MuxAdd
topic_tools/MuxDelete
topic_tools/MuxList
topic_tools/MuxSelect
turtlesim/Kill
turtlesim/SetPen
turtlesim/Spawn
turtlesim/TeleportAbsolute
turtlesim/TeleportRelative
weather2/WeatherCheck
asadbek@ubuntu:~/catkin_ws/weather2_ws$ rosrun weather2 service_server
[ INFO] [1650780194.233203222]: Connected to master at [localhost:11311]
[ INFO] [1650780194.239545186]: Weather Check Server Running...
------------------------------------------------------------------
```
- Test the service in the new tab
```
asadbek@ubuntu:~/catkin_ws/weather2_ws$ source devel/setup.bash
asadbek@ubuntu:~/catkin_ws/weather2_ws$ rosservice list 
/rosout/get_loggers
/rosout/set_logger_level
/weather_check
/weather_service_server_node/get_loggers
/weather_service_server_node/set_logger_level
asadbek@ubuntu:~/catkin_ws/weather2_ws$ rosservice call /weather_check 6
answer: "sleeting"
asadbek@ubuntu:~/catkin_ws/weather2_ws$ rosrun we
weather2           webkit_dependency 
asadbek@ubuntu:~/catkin_ws/weather2_ws$ rosrun weather2 service_client 
1. Incheon 
2. Seoul 
3. Daegu 
4. Busan 
5. Gwangju 
6. Jeju-si
7. Daejon 
8. Ulsan 
9. Jeonju-si 
10. Suwon-si 
11. Sejong city 
12. Andong 
13. Yeosu-si 
14. Ansan-si 
15. Chuncheon-si 
16. Naju-si 
17. Pohang-si 
18. Mokpo-si 
19. Suncheon-si 
20. Gimpo 
Type '0' to quit
PLease select your area: 9
 At the moment the wheather is thunder
PLease select your area: 8
 At the moment the wheather is lightning
PLease select your area: 7
 At the moment the wheather is stormy
PLease select your area: 4
 At the moment the wheather is rainy
PLease select your area: 5
 At the moment the wheather is snowy
PLease select your area: 6
 At the moment the wheather is sleeting
PLease select your area: 3
 At the moment the wheather is partly cloudly
PLease select your area: 1
 At the moment the wheather is sunny
PLease select your area: 2
 At the moment the wheather is cloudly
PLease select your area: 10
 At the moment the wheather is windy
PLease select your area: 11
 At the moment the wheather is foggy
PLease select your area: 12
 At the moment the wheather is icy
PLease select your area: 13
 At the moment the wheather is clear sky
PLease select your area: 14
 At the moment the wheather is hot
PLease select your area: 18
 At the moment the wheather is tornado
PLease select your area: 19
At the moment the wheather is rainbow
PLease select your area: 17
 At the moment the wheather is freezing
PLease select your area: 15
 At the moment the wheather is warm
PLease select your area: 0
[ INFO] [1650781347.201985254]: Exiting Application...
asadbek@ubuntu:~/catkin_ws/weather2_ws$ 
```

