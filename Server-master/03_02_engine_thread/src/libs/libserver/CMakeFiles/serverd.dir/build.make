# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver

# Include any dependencies generated for this target.
include CMakeFiles/serverd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/serverd.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/serverd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/serverd.dir/flags.make

CMakeFiles/serverd.dir/base_buffer.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/base_buffer.cpp.o: base_buffer.cpp
CMakeFiles/serverd.dir/base_buffer.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/serverd.dir/base_buffer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/base_buffer.cpp.o -MF CMakeFiles/serverd.dir/base_buffer.cpp.o.d -o CMakeFiles/serverd.dir/base_buffer.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/base_buffer.cpp

CMakeFiles/serverd.dir/base_buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/base_buffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/base_buffer.cpp > CMakeFiles/serverd.dir/base_buffer.cpp.i

CMakeFiles/serverd.dir/base_buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/base_buffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/base_buffer.cpp -o CMakeFiles/serverd.dir/base_buffer.cpp.s

CMakeFiles/serverd.dir/connect_obj.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/connect_obj.cpp.o: connect_obj.cpp
CMakeFiles/serverd.dir/connect_obj.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/serverd.dir/connect_obj.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/connect_obj.cpp.o -MF CMakeFiles/serverd.dir/connect_obj.cpp.o.d -o CMakeFiles/serverd.dir/connect_obj.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/connect_obj.cpp

CMakeFiles/serverd.dir/connect_obj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/connect_obj.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/connect_obj.cpp > CMakeFiles/serverd.dir/connect_obj.cpp.i

CMakeFiles/serverd.dir/connect_obj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/connect_obj.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/connect_obj.cpp -o CMakeFiles/serverd.dir/connect_obj.cpp.s

CMakeFiles/serverd.dir/global.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/global.cpp.o: global.cpp
CMakeFiles/serverd.dir/global.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/serverd.dir/global.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/global.cpp.o -MF CMakeFiles/serverd.dir/global.cpp.o.d -o CMakeFiles/serverd.dir/global.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/global.cpp

CMakeFiles/serverd.dir/global.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/global.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/global.cpp > CMakeFiles/serverd.dir/global.cpp.i

CMakeFiles/serverd.dir/global.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/global.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/global.cpp -o CMakeFiles/serverd.dir/global.cpp.s

CMakeFiles/serverd.dir/network.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/network.cpp.o: network.cpp
CMakeFiles/serverd.dir/network.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/serverd.dir/network.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/network.cpp.o -MF CMakeFiles/serverd.dir/network.cpp.o.d -o CMakeFiles/serverd.dir/network.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network.cpp

CMakeFiles/serverd.dir/network.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/network.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network.cpp > CMakeFiles/serverd.dir/network.cpp.i

CMakeFiles/serverd.dir/network.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/network.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network.cpp -o CMakeFiles/serverd.dir/network.cpp.s

CMakeFiles/serverd.dir/network_buffer.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/network_buffer.cpp.o: network_buffer.cpp
CMakeFiles/serverd.dir/network_buffer.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/serverd.dir/network_buffer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/network_buffer.cpp.o -MF CMakeFiles/serverd.dir/network_buffer.cpp.o.d -o CMakeFiles/serverd.dir/network_buffer.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_buffer.cpp

CMakeFiles/serverd.dir/network_buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/network_buffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_buffer.cpp > CMakeFiles/serverd.dir/network_buffer.cpp.i

CMakeFiles/serverd.dir/network_buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/network_buffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_buffer.cpp -o CMakeFiles/serverd.dir/network_buffer.cpp.s

CMakeFiles/serverd.dir/network_connector.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/network_connector.cpp.o: network_connector.cpp
CMakeFiles/serverd.dir/network_connector.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/serverd.dir/network_connector.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/network_connector.cpp.o -MF CMakeFiles/serverd.dir/network_connector.cpp.o.d -o CMakeFiles/serverd.dir/network_connector.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_connector.cpp

CMakeFiles/serverd.dir/network_connector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/network_connector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_connector.cpp > CMakeFiles/serverd.dir/network_connector.cpp.i

CMakeFiles/serverd.dir/network_connector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/network_connector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_connector.cpp -o CMakeFiles/serverd.dir/network_connector.cpp.s

CMakeFiles/serverd.dir/network_listen.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/network_listen.cpp.o: network_listen.cpp
CMakeFiles/serverd.dir/network_listen.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/serverd.dir/network_listen.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/network_listen.cpp.o -MF CMakeFiles/serverd.dir/network_listen.cpp.o.d -o CMakeFiles/serverd.dir/network_listen.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_listen.cpp

CMakeFiles/serverd.dir/network_listen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/network_listen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_listen.cpp > CMakeFiles/serverd.dir/network_listen.cpp.i

CMakeFiles/serverd.dir/network_listen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/network_listen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/network_listen.cpp -o CMakeFiles/serverd.dir/network_listen.cpp.s

CMakeFiles/serverd.dir/packet.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/packet.cpp.o: packet.cpp
CMakeFiles/serverd.dir/packet.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/serverd.dir/packet.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/packet.cpp.o -MF CMakeFiles/serverd.dir/packet.cpp.o.d -o CMakeFiles/serverd.dir/packet.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/packet.cpp

CMakeFiles/serverd.dir/packet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/packet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/packet.cpp > CMakeFiles/serverd.dir/packet.cpp.i

CMakeFiles/serverd.dir/packet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/packet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/packet.cpp -o CMakeFiles/serverd.dir/packet.cpp.s

CMakeFiles/serverd.dir/server_app.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/server_app.cpp.o: server_app.cpp
CMakeFiles/serverd.dir/server_app.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/serverd.dir/server_app.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/server_app.cpp.o -MF CMakeFiles/serverd.dir/server_app.cpp.o.d -o CMakeFiles/serverd.dir/server_app.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/server_app.cpp

CMakeFiles/serverd.dir/server_app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/server_app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/server_app.cpp > CMakeFiles/serverd.dir/server_app.cpp.i

CMakeFiles/serverd.dir/server_app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/server_app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/server_app.cpp -o CMakeFiles/serverd.dir/server_app.cpp.s

CMakeFiles/serverd.dir/thread.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/thread.cpp.o: thread.cpp
CMakeFiles/serverd.dir/thread.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/serverd.dir/thread.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/thread.cpp.o -MF CMakeFiles/serverd.dir/thread.cpp.o.d -o CMakeFiles/serverd.dir/thread.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread.cpp

CMakeFiles/serverd.dir/thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/thread.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread.cpp > CMakeFiles/serverd.dir/thread.cpp.i

CMakeFiles/serverd.dir/thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/thread.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread.cpp -o CMakeFiles/serverd.dir/thread.cpp.s

CMakeFiles/serverd.dir/thread_mgr.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/thread_mgr.cpp.o: thread_mgr.cpp
CMakeFiles/serverd.dir/thread_mgr.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/serverd.dir/thread_mgr.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/thread_mgr.cpp.o -MF CMakeFiles/serverd.dir/thread_mgr.cpp.o.d -o CMakeFiles/serverd.dir/thread_mgr.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread_mgr.cpp

CMakeFiles/serverd.dir/thread_mgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/thread_mgr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread_mgr.cpp > CMakeFiles/serverd.dir/thread_mgr.cpp.i

CMakeFiles/serverd.dir/thread_mgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/thread_mgr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread_mgr.cpp -o CMakeFiles/serverd.dir/thread_mgr.cpp.s

CMakeFiles/serverd.dir/thread_obj.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/thread_obj.cpp.o: thread_obj.cpp
CMakeFiles/serverd.dir/thread_obj.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/serverd.dir/thread_obj.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/thread_obj.cpp.o -MF CMakeFiles/serverd.dir/thread_obj.cpp.o.d -o CMakeFiles/serverd.dir/thread_obj.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread_obj.cpp

CMakeFiles/serverd.dir/thread_obj.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/thread_obj.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread_obj.cpp > CMakeFiles/serverd.dir/thread_obj.cpp.i

CMakeFiles/serverd.dir/thread_obj.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/thread_obj.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/thread_obj.cpp -o CMakeFiles/serverd.dir/thread_obj.cpp.s

# Object files for target serverd
serverd_OBJECTS = \
"CMakeFiles/serverd.dir/base_buffer.cpp.o" \
"CMakeFiles/serverd.dir/connect_obj.cpp.o" \
"CMakeFiles/serverd.dir/global.cpp.o" \
"CMakeFiles/serverd.dir/network.cpp.o" \
"CMakeFiles/serverd.dir/network_buffer.cpp.o" \
"CMakeFiles/serverd.dir/network_connector.cpp.o" \
"CMakeFiles/serverd.dir/network_listen.cpp.o" \
"CMakeFiles/serverd.dir/packet.cpp.o" \
"CMakeFiles/serverd.dir/server_app.cpp.o" \
"CMakeFiles/serverd.dir/thread.cpp.o" \
"CMakeFiles/serverd.dir/thread_mgr.cpp.o" \
"CMakeFiles/serverd.dir/thread_obj.cpp.o"

# External object files for target serverd
serverd_EXTERNAL_OBJECTS =

/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/base_buffer.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/connect_obj.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/global.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/network.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/network_buffer.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/network_connector.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/network_listen.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/packet.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/server_app.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/thread.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/thread_mgr.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/thread_obj.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/build.make
/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a: CMakeFiles/serverd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX static library /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a"
	$(CMAKE_COMMAND) -P CMakeFiles/serverd.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/serverd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/serverd.dir/build: /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/libs/libserverd.a
.PHONY : CMakeFiles/serverd.dir/build

CMakeFiles/serverd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/serverd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/serverd.dir/clean

CMakeFiles/serverd.dir/depend:
	cd /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver /home/liuaoqi/GameBook/GameBookServer-master/03_02_engine_thread/src/libs/libserver/CMakeFiles/serverd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/serverd.dir/depend

