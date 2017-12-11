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
include src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/depend.make

# Include the progress variables for this target.
include src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/progress.make

# Include the compile flags for this target's objects.
include src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/flags.make

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj: src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/flags.make
src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj: ../src/drivers/test_ppm/test_ppm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj -c /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/test_ppm/test_ppm.cpp

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.i"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/test_ppm/test_ppm.cpp > CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.i

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.s"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/test_ppm/test_ppm.cpp -o CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.s

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.requires:

.PHONY : src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.requires

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.provides: src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.requires
	$(MAKE) -f src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/build.make src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.provides.build
.PHONY : src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.provides

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.provides.build: src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj


# Object files for target drivers__test_ppm
drivers__test_ppm_OBJECTS = \
"CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj"

# External object files for target drivers__test_ppm
drivers__test_ppm_EXTERNAL_OBJECTS =

src/drivers/test_ppm/libdrivers__test_ppm.a: src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj
src/drivers/test_ppm/libdrivers__test_ppm.a: src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/build.make
src/drivers/test_ppm/libdrivers__test_ppm.a: src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdrivers__test_ppm.a"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm && $(CMAKE_COMMAND) -P CMakeFiles/drivers__test_ppm.dir/cmake_clean_target.cmake
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/drivers__test_ppm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/build: src/drivers/test_ppm/libdrivers__test_ppm.a

.PHONY : src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/build

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/requires: src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/test_ppm.cpp.obj.requires

.PHONY : src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/requires

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/clean:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm && $(CMAKE_COMMAND) -P CMakeFiles/drivers__test_ppm.dir/cmake_clean.cmake
.PHONY : src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/clean

src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/depend:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1210_PixHawk2/Firmware /home/intrepid/src1210_PixHawk2/Firmware/src/drivers/test_ppm /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/drivers/test_ppm/CMakeFiles/drivers__test_ppm.dir/depend
