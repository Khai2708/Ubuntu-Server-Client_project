#project midtrem 2

asadbek@ubuntu:~/catkin_ws$ mkdir midterm2
asadbek@ubuntu:~/catkin_ws$ cd midterm2/
asadbek@ubuntu:~/catkin_ws/midterm2$ mkdir src
asadbek@ubuntu:~/catkin_ws/midterm2$ cd src/
asadbek@ubuntu:~/catkin_ws/midterm2/src$ catkin_create_pkg midterm2 roscpp
Created file midterm2/package.xml
Created file midterm2/CMakeLists.txt
Created folder midterm2/include/midterm2
Created folder midterm2/src
Successfully created files in /home/asadbek/catkin_ws/midterm2/src/midterm2. Please adjust the values in package.xml.
asadbek@ubuntu:~/catkin_ws/midterm2/src$ mkdir launch
asadbek@ubuntu:~/catkin_ws/midterm2/src$ ls
launch  midterm2
asadbek@ubuntu:~/catkin_ws/midterm2/src$ cd ..
asadbek@ubuntu:~/catkin_ws/midterm2$ catkin_make
Base path: /home/asadbek/catkin_ws/midterm2
Source space: /home/asadbek/catkin_ws/midterm2/src
Build space: /home/asadbek/catkin_ws/midterm2/build
Devel space: /home/asadbek/catkin_ws/midterm2/devel
Install space: /home/asadbek/catkin_ws/midterm2/install
Creating symlink "/home/asadbek/catkin_ws/midterm2/src/CMakeLists.txt" pointing to "/opt/ros/noetic/share/catkin/cmake/toplevel.cmake"
####
#### Running command: "cmake /home/asadbek/catkin_ws/midterm2/src -DCATKIN_DEVEL_PREFIX=/home/asadbek/catkin_ws/midterm2/devel -DCMAKE_INSTALL_PREFIX=/home/asadbek/catkin_ws/midterm2/install -G Unix Makefiles" in "/home/asadbek/catkin_ws/midterm2/build"
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
-- Using CATKIN_DEVEL_PREFIX: /home/asadbek/catkin_ws/midterm2/devel
-- Using CMAKE_PREFIX_PATH: /home/asadbek/catkin_ws/sms-project4/devel;/opt/ros/noetic
-- This workspace overlays: /home/asadbek/catkin_ws/sms-project4/devel;/opt/ros/noetic
-- Found PythonInterp: /usr/bin/python3 (found suitable version "3.8.10", minimum required is "3") 
-- Using PYTHON_EXECUTABLE: /usr/bin/python3
-- Using Debian Python package layout
-- Found PY_em: /usr/lib/python3/dist-packages/em.py  
-- Using empy: /usr/lib/python3/dist-packages/em.py
-- Using CATKIN_ENABLE_TESTING: ON
-- Call enable_testing()
-- Using CATKIN_TEST_RESULTS_DIR: /home/asadbek/catkin_ws/midterm2/build/test_results
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
-- ~~  - midterm2
-- ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
-- +++ processing catkin package: 'midterm2'
-- ==> add_subdirectory(midterm2)
-- Configuring done
-- Generating done
-- Build files have been written to: /home/asadbek/catkin_ws/midterm2/build
####
#### Running command: "make -j2 -l2" in "/home/asadbek/catkin_ws/midterm2/build"
####
Scanning dependencies of target rpm_pub
Scanning dependencies of target speed_calc
[ 25%] Building CXX object midterm2/CMakeFiles/rpm_pub.dir/src/rpm_pub.cpp.o
[ 50%] Building CXX object midterm2/CMakeFiles/speed_calc.dir/src/speed_calc.cpp.o
[ 75%] Building CXX object midterm2/CMakeFiles/speed_calc.dir/src/speed_calc.cpp.o
[100%] Linking CXX executable /home/asadbek/catkin_ws/midterm2/devel/lib/midterm2/speed_calc
[100%] Built target speed_calc
asadbek@ubuntu:~/catkin_ws/midterm2$ source devel/s
setup.bash  setup.sh    setup.zsh   share/      
asadbek@ubuntu:~/catkin_ws/midterm2$ source devel/setup.bash
asadbek@ubuntu:~/catkin_ws/midterm2$ roslaunch midterm2 speed_simulator.launch
... logging to /home/asadbek/.ros/log/beeec192-c3d8-11ec-8c46-4511cec44fde/roslaunch-ubuntu-105249.log
Checking log directory for disk usage. This may take a while.
Press Ctrl-C to interrupt
Done checking log file disk usage. Usage is <1GB.

started roslaunch server http://ubuntu:43045/

SUMMARY
========

PARAMETERS
 * /rosdistro: noetic
 * /rosversion: 1.15.14
 * /wheel_radius: 0.125

NODES
  /
    rpm_publisher_node1 (midterm2/rpm_pub)
    speed_calculator_node1 (midterm2/speed_calc)

ROS_MASTER_URI=http://localhost:11311

process[rpm_publisher_node1-1]: started with pid [105270]
process[speed_calculator_node1-2]: started with pid [105271]
[ WARN] [1650810779.276023611]:  No Value set for speed_limit server parameter.
[ WARN] [1650810779.374835461]:  No Value set for speed_limit server parameter.
[ WARN] [1650810779.475088969]:  No Value set for speed_limit server parameter.
[ WARN] [1650810779.574573164]:  No Value set for speed_limit server parameter.
[ WARN] [1650810779.674946604]:  No Value set for speed_limit server parameter.
[ WARN] [1650810779.774696028]:  No Value set for speed_limit server parameter.
[ WARN] [1650810779.875128671]:  No Value set for speed_limit server parameter.
[ WARN] [1650810779.975093034]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.074732920]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.174774883]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.274723554]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.375707203]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.475233240]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.574539133]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.675121302]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.775069134]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.875087303]:  No Value set for speed_limit server parameter.
[ WARN] [1650810780.974858162]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.074961963]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.174768359]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.274754919]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.375014864]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.474530359]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.574859010]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.674746990]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.774409061]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.874668541]:  No Value set for speed_limit server parameter.
[ WARN] [1650810781.974685090]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.074319913]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.174541298]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.274642594]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.374603643]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.474755690]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.575147362]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.675169384]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.774356287]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.874695435]:  No Value set for speed_limit server parameter.
[ WARN] [1650810782.974776658]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.074994871]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.174522545]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.274453921]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.374290368]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.475000683]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.574870452]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.674773623]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.775835134]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.874392999]:  No Value set for speed_limit server parameter.
[ WARN] [1650810783.974558857]:  No Value set for speed_limit server parameter.
[ WARN] [1650810784.074118826]:  No Value set for speed_limit server parameter.
[ WARN] [1650810784.174421856]:  No Value set for speed_limit server parameter.
[ WARN] [1650810784.274403602]:  No Value set for speed_limit server parameter.
[ WARN] [1650810784.374150273]:  No Value set for speed_limit server parameter.
[ WARN] [1650810784.474539844]:  No Value set for speed_limit server parameter.
[ WARN] [1650810784.574464245]:  No Value set for speed_limit server parameter.
[ WARN] [1650810784.674019862]:  No Value set for speed_limit server parameter.
----------------------------------------------------------------------

Casadbek@ubuntu:~/catkin_ws/sms-project4$ source devel/setup.bash
asadbek@ubuntu:~/catkin_ws/sms-project4$ rosparam set speed_limit 70
asadbek@ubuntu:~/catkin_ws/sms-project4$ rosparam get speed_limit
70
asadbek@ubuntu:~/catkin_ws/sms-project4$ rosparam list
/rosdistro
/roslaunch/uris/host_ubuntu__35073
/roslaunch/uris/host_ubuntu__40151
/roslaunch/uris/host_ubuntu__43045
/roslaunch/uris/host_ubuntu__44291
/rosversion
/run_id
/speed_limit



