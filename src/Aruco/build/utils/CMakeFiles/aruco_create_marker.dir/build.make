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
include utils/CMakeFiles/aruco_create_marker.dir/depend.make

# Include the progress variables for this target.
include utils/CMakeFiles/aruco_create_marker.dir/progress.make

# Include the compile flags for this target's objects.
include utils/CMakeFiles/aruco_create_marker.dir/flags.make

utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj: utils/CMakeFiles/aruco_create_marker.dir/flags.make
utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj: utils/CMakeFiles/aruco_create_marker.dir/includes_CXX.rsp
utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj: ../utils/aruco_create_marker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report C:\Aruco\build\CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj"
	cd /d C:\Aruco\build\utils && C:\Qt\Tools\mingw482_32\bin\g++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\aruco_create_marker.dir\aruco_create_marker.cpp.obj -c C:\Aruco\utils\aruco_create_marker.cpp

utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.i"
	cd /d C:\Aruco\build\utils && C:\Qt\Tools\mingw482_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E C:\Aruco\utils\aruco_create_marker.cpp > CMakeFiles\aruco_create_marker.dir\aruco_create_marker.cpp.i

utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.s"
	cd /d C:\Aruco\build\utils && C:\Qt\Tools\mingw482_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S C:\Aruco\utils\aruco_create_marker.cpp -o CMakeFiles\aruco_create_marker.dir\aruco_create_marker.cpp.s

utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.requires:
.PHONY : utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.requires

utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.provides: utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.requires
	$(MAKE) -f utils\CMakeFiles\aruco_create_marker.dir\build.make utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.provides.build
.PHONY : utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.provides

utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.provides.build: utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj

# Object files for target aruco_create_marker
aruco_create_marker_OBJECTS = \
"CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj"

# External object files for target aruco_create_marker
aruco_create_marker_EXTERNAL_OBJECTS =

bin/aruco_create_marker.exe: utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj
bin/aruco_create_marker.exe: utils/CMakeFiles/aruco_create_marker.dir/build.make
bin/aruco_create_marker.exe: bin/libaruco125.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_videostab249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_video249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_ts249.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_superres249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_stitching249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_photo249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_ocl249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_objdetect249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_nonfree249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_ml249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_legacy249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_imgproc249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_highgui249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_gpu249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_flann249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_features2d249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_core249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_contrib249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_calib3d249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_nonfree249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_ocl249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_gpu249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_photo249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_objdetect249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_legacy249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_video249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_ml249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_calib3d249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_features2d249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_highgui249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_imgproc249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_flann249.dll.a
bin/aruco_create_marker.exe: C:/OpenCV/build/lib/libopencv_core249.dll.a
bin/aruco_create_marker.exe: utils/CMakeFiles/aruco_create_marker.dir/objects1.rsp
bin/aruco_create_marker.exe: utils/CMakeFiles/aruco_create_marker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ..\bin\aruco_create_marker.exe"
	cd /d C:\Aruco\build\utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\aruco_create_marker.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/CMakeFiles/aruco_create_marker.dir/build: bin/aruco_create_marker.exe
.PHONY : utils/CMakeFiles/aruco_create_marker.dir/build

utils/CMakeFiles/aruco_create_marker.dir/requires: utils/CMakeFiles/aruco_create_marker.dir/aruco_create_marker.cpp.obj.requires
.PHONY : utils/CMakeFiles/aruco_create_marker.dir/requires

utils/CMakeFiles/aruco_create_marker.dir/clean:
	cd /d C:\Aruco\build\utils && $(CMAKE_COMMAND) -P CMakeFiles\aruco_create_marker.dir\cmake_clean.cmake
.PHONY : utils/CMakeFiles/aruco_create_marker.dir/clean

utils/CMakeFiles/aruco_create_marker.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Aruco C:\Aruco\utils C:\Aruco\build C:\Aruco\build\utils C:\Aruco\build\utils\CMakeFiles\aruco_create_marker.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : utils/CMakeFiles/aruco_create_marker.dir/depend
