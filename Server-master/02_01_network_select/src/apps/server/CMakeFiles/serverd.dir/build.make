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
CMAKE_SOURCE_DIR = /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server

# Include any dependencies generated for this target.
include CMakeFiles/serverd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/serverd.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/serverd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/serverd.dir/flags.make

CMakeFiles/serverd.dir/main.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/main.cpp.o: main.cpp
CMakeFiles/serverd.dir/main.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/serverd.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/main.cpp.o -MF CMakeFiles/serverd.dir/main.cpp.o.d -o CMakeFiles/serverd.dir/main.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/main.cpp

CMakeFiles/serverd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/main.cpp > CMakeFiles/serverd.dir/main.cpp.i

CMakeFiles/serverd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/main.cpp -o CMakeFiles/serverd.dir/main.cpp.s

CMakeFiles/serverd.dir/server.cpp.o: CMakeFiles/serverd.dir/flags.make
CMakeFiles/serverd.dir/server.cpp.o: server.cpp
CMakeFiles/serverd.dir/server.cpp.o: CMakeFiles/serverd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/serverd.dir/server.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/serverd.dir/server.cpp.o -MF CMakeFiles/serverd.dir/server.cpp.o.d -o CMakeFiles/serverd.dir/server.cpp.o -c /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/server.cpp

CMakeFiles/serverd.dir/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/serverd.dir/server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/server.cpp > CMakeFiles/serverd.dir/server.cpp.i

CMakeFiles/serverd.dir/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/serverd.dir/server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/server.cpp -o CMakeFiles/serverd.dir/server.cpp.s

# Object files for target serverd
serverd_OBJECTS = \
"CMakeFiles/serverd.dir/main.cpp.o" \
"CMakeFiles/serverd.dir/server.cpp.o"

# External object files for target serverd
serverd_EXTERNAL_OBJECTS =

/home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/bin/serverd: CMakeFiles/serverd.dir/main.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/bin/serverd: CMakeFiles/serverd.dir/server.cpp.o
/home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/bin/serverd: CMakeFiles/serverd.dir/build.make
/home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/bin/serverd: CMakeFiles/serverd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/bin/serverd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/serverd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/serverd.dir/build: /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/bin/serverd
.PHONY : CMakeFiles/serverd.dir/build

CMakeFiles/serverd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/serverd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/serverd.dir/clean

CMakeFiles/serverd.dir/depend:
	cd /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server /home/liuaoqi/GameBook/GameBookServer-master/02_01_network_select/src/apps/server/CMakeFiles/serverd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/serverd.dir/depend
