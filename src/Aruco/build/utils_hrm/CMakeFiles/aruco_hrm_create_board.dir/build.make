# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.0

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Aruco

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Aruco\build

# Include any dependencies generated for this target.
include utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/depend.make

# Include the progress variables for this target.
include utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/progress.make

# Include the compile flags for this target's objects.
include utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/flags.make

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/flags.make
utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/includes_CXX.rsp
utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj: ../utils_hrm/aruco_hrm_create_board.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report C:\Aruco\build\CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj"
	cd /d C:\Aruco\build\utils_hrm && C:\Qt\Tools\mingw482_32\bin\g++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\aruco_hrm_create_board.dir\aruco_hrm_create_board.cpp.obj -c C:\Aruco\utils_hrm\aruco_hrm_create_board.cpp

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.i"
	cd /d C:\Aruco\build\utils_hrm && C:\Qt\Tools\mingw482_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E C:\Aruco\utils_hrm\aruco_hrm_create_board.cpp > CMakeFiles\aruco_hrm_create_board.dir\aruco_hrm_create_board.cpp.i

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.s"
	cd /d C:\Aruco\build\utils_hrm && C:\Qt\Tools\mingw482_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S C:\Aruco\utils_hrm\aruco_hrm_create_board.cpp -o CMakeFiles\aruco_hrm_create_board.dir\aruco_hrm_create_board.cpp.s

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.requires:
.PHONY : utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.requires

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.provides: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.requires
	$(MAKE) -f utils_hrm\CMakeFiles\aruco_hrm_create_board.dir\build.make utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.provides.build
.PHONY : utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.provides

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.provides.build: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj

# Object files for target aruco_hrm_create_board
aruco_hrm_create_board_OBJECTS = \
"CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj"

# External object files for target aruco_hrm_create_board
aruco_hrm_create_board_EXTERNAL_OBJECTS =

bin/aruco_hrm_create_board.exe: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj
bin/aruco_hrm_create_board.exe: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/build.make
bin/aruco_hrm_create_board.exe: bin/libaruco125.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_videostab249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_video249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_ts249.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_superres249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_stitching249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_photo249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_ocl249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_objdetect249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_nonfree249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_ml249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_legacy249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_imgproc249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_highgui249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_gpu249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_flann249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_features2d249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_core249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_contrib249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_calib3d249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_nonfree249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_ocl249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_gpu249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_photo249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_objdetect249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_legacy249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_video249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_ml249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_calib3d249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_features2d249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_highgui249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_imgproc249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_flann249.dll.a
bin/aruco_hrm_create_board.exe: C:/OpenCV/build/lib/libopencv_core249.dll.a
bin/aruco_hrm_create_board.exe: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/objects1.rsp
bin/aruco_hrm_create_board.exe: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ..\bin\aruco_hrm_create_board.exe"
	cd /d C:\Aruco\build\utils_hrm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\aruco_hrm_create_board.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/build: bin/aruco_hrm_create_board.exe
.PHONY : utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/build

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/requires: utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/aruco_hrm_create_board.cpp.obj.requires
.PHONY : utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/requires

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/clean:
	cd /d C:\Aruco\build\utils_hrm && $(CMAKE_COMMAND) -P CMakeFiles\aruco_hrm_create_board.dir\cmake_clean.cmake
.PHONY : utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/clean

utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Aruco C:\Aruco\utils_hrm C:\Aruco\build C:\Aruco\build\utils_hrm C:\Aruco\build\utils_hrm\CMakeFiles\aruco_hrm_create_board.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : utils_hrm/CMakeFiles/aruco_hrm_create_board.dir/depend
