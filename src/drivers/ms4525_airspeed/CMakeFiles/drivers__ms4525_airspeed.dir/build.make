# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/intrepid/src1210_PixHawk2/Firmware

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default

# Include any dependencies generated for this target.
include src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/depend.make

# Include the progress variables for this target.
include src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/progress.make

# Include the compile flags for this target's objects.
include src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/flags.make

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj: src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/flags.make
src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj: ../src/drivers/ms4525_airspeed/ms4525_airspeed.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj -c /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/ms4525_airspeed/ms4525_airspeed.cpp

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.i"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/ms4525_airspeed/ms4525_airspeed.cpp > CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.i

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.s"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/ms4525_airspeed/ms4525_airspeed.cpp -o CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.s

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.requires:

.PHONY : src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.requires

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.provides: src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.requires
	$(MAKE) -f src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/build.make src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.provides.build
.PHONY : src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.provides

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.provides.build: src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj


# Object files for target drivers__ms4525_airspeed
drivers__ms4525_airspeed_OBJECTS = \
"CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj"

# External object files for target drivers__ms4525_airspeed
drivers__ms4525_airspeed_EXTERNAL_OBJECTS =

src/drivers/ms4525_airspeed/libdrivers__ms4525_airspeed.a: src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj
src/drivers/ms4525_airspeed/libdrivers__ms4525_airspeed.a: src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/build.make
src/drivers/ms4525_airspeed/libdrivers__ms4525_airspeed.a: src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdrivers__ms4525_airspeed.a"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed && $(CMAKE_COMMAND) -P CMakeFiles/drivers__ms4525_airspeed.dir/cmake_clean_target.cmake
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drivers__ms4525_airspeed.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/build: src/drivers/ms4525_airspeed/libdrivers__ms4525_airspeed.a

.PHONY : src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/build

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/requires: src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/ms4525_airspeed.cpp.obj.requires

.PHONY : src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/requires

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/clean:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed && $(CMAKE_COMMAND) -P CMakeFiles/drivers__ms4525_airspeed.dir/cmake_clean.cmake
.PHONY : src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/clean

src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/depend:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1210_PixHawk2/Firmware /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/ms4525_airspeed /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/drivers/ms4525_airspeed/CMakeFiles/drivers__ms4525_airspeed.dir/depend

