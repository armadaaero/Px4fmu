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
include src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/depend.make

# Include the progress variables for this target.
include src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/progress.make

# Include the compile flags for this target's objects.
include src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/flags.make

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj: src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/flags.make
src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj: ../src/systemcmds/hardfault_log/hardfault_log.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj   -c /home/intrepid/src1210_PixHawk2/Firmware/src/systemcmds/hardfault_log/hardfault_log.c

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.i"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/intrepid/src1210_PixHawk2/Firmware/src/systemcmds/hardfault_log/hardfault_log.c > CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.i

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.s"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/intrepid/src1210_PixHawk2/Firmware/src/systemcmds/hardfault_log/hardfault_log.c -o CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.s

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.requires:

.PHONY : src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.requires

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.provides: src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.requires
	$(MAKE) -f src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/build.make src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.provides.build
.PHONY : src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.provides

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.provides.build: src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj


# Object files for target systemcmds__hardfault_log
systemcmds__hardfault_log_OBJECTS = \
"CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj"

# External object files for target systemcmds__hardfault_log
systemcmds__hardfault_log_EXTERNAL_OBJECTS =

src/systemcmds/hardfault_log/libsystemcmds__hardfault_log.a: src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj
src/systemcmds/hardfault_log/libsystemcmds__hardfault_log.a: src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/build.make
src/systemcmds/hardfault_log/libsystemcmds__hardfault_log.a: src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libsystemcmds__hardfault_log.a"
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log && $(CMAKE_COMMAND) -P CMakeFiles/systemcmds__hardfault_log.dir/cmake_clean_target.cmake
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/systemcmds__hardfault_log.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/build: src/systemcmds/hardfault_log/libsystemcmds__hardfault_log.a

.PHONY : src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/build

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/requires: src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/hardfault_log.c.obj.requires

.PHONY : src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/requires

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/clean:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log && $(CMAKE_COMMAND) -P CMakeFiles/systemcmds__hardfault_log.dir/cmake_clean.cmake
.PHONY : src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/clean

src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/depend:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1210_PixHawk2/Firmware /home/intrepid/src1210_PixHawk2/Firmware/src/systemcmds/hardfault_log /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/systemcmds/hardfault_log/CMakeFiles/systemcmds__hardfault_log.dir/depend

