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

# Utility rule file for debug_tui.

# Include the progress variables for this target.
include src/firmware/nuttx/CMakeFiles/debug_tui.dir/progress.make

src/firmware/nuttx/CMakeFiles/debug_tui: src/firmware/nuttx/firmware_nuttx
src/firmware/nuttx/CMakeFiles/debug_tui: src/firmware/nuttx/.gdbinit
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/firmware/nuttx && GDBTUI-NOTFOUND /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/firmware/nuttx/firmware_nuttx

debug_tui: src/firmware/nuttx/CMakeFiles/debug_tui
debug_tui: src/firmware/nuttx/CMakeFiles/debug_tui.dir/build.make

.PHONY : debug_tui

# Rule to build all files generated by this target.
src/firmware/nuttx/CMakeFiles/debug_tui.dir/build: debug_tui

.PHONY : src/firmware/nuttx/CMakeFiles/debug_tui.dir/build

src/firmware/nuttx/CMakeFiles/debug_tui.dir/clean:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/firmware/nuttx && $(CMAKE_COMMAND) -P CMakeFiles/debug_tui.dir/cmake_clean.cmake
.PHONY : src/firmware/nuttx/CMakeFiles/debug_tui.dir/clean

src/firmware/nuttx/CMakeFiles/debug_tui.dir/depend:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1210_PixHawk2/Firmware /home/intrepid/src1210_PixHawk2/Firmware/src/firmware/nuttx /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/firmware/nuttx /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/src/firmware/nuttx/CMakeFiles/debug_tui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/firmware/nuttx/CMakeFiles/debug_tui.dir/depend

