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

# Utility rule file for px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.

# Include the progress variables for this target.
include CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/progress.make

CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch: px4fmu-v3/NuttX/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.stamp


px4fmu-v3/NuttX/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.stamp: ../nuttx-patches/00007-REJECTED-silence-jobserver-warnings.patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "px4fmu-v3: nuttx-patches/00007-REJECTED-silence-jobserver-warnings.patch applied"
	/usr/bin/patch --verbose -d /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/px4fmu-v3/NuttX -s -p1 -N < /home/intrepid/src1210_PixHawk2/Firmware/nuttx-patches/00007-REJECTED-silence-jobserver-warnings.patch
	cmake -E touch /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/px4fmu-v3/NuttX/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.stamp

px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch: CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch
px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch: px4fmu-v3/NuttX/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.stamp
px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch: CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/build.make

.PHONY : px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch

# Rule to build all files generated by this target.
CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/build: px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch

.PHONY : CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/build

CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/clean

CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/depend:
	cd /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1210_PixHawk2/Firmware /home/intrepid/src1210_PixHawk2/Firmware /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default /home/intrepid/src1210_PixHawk2/Firmware/build_px4fmu-v3_default/CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/px4fmu-v3-nuttx_patch_00007-REJECTED-silence-jobserver-warnings.patch.dir/depend

