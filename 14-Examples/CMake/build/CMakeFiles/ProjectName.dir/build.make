# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = E:\cpp\cpp\14-Examples\CMake\cmake-3.30.2-windows-x86_64\bin\cmake.exe

# The command to remove a file.
RM = E:\cpp\cpp\14-Examples\CMake\cmake-3.30.2-windows-x86_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\cpp\cpp\14-Examples\CMake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\cpp\cpp\14-Examples\CMake\build

# Include any dependencies generated for this target.
include CMakeFiles/ProjectName.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProjectName.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProjectName.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjectName.dir/flags.make

CMakeFiles/ProjectName.dir/main.cpp.obj: CMakeFiles/ProjectName.dir/flags.make
CMakeFiles/ProjectName.dir/main.cpp.obj: CMakeFiles/ProjectName.dir/includes_CXX.rsp
CMakeFiles/ProjectName.dir/main.cpp.obj: E:/cpp/cpp/14-Examples/CMake/main.cpp
CMakeFiles/ProjectName.dir/main.cpp.obj: CMakeFiles/ProjectName.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\cpp\cpp\14-Examples\CMake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProjectName.dir/main.cpp.obj"
	E:\cpp\cpp\14-Examples\compiler\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProjectName.dir/main.cpp.obj -MF CMakeFiles\ProjectName.dir\main.cpp.obj.d -o CMakeFiles\ProjectName.dir\main.cpp.obj -c E:\cpp\cpp\14-Examples\CMake\main.cpp

CMakeFiles/ProjectName.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProjectName.dir/main.cpp.i"
	E:\cpp\cpp\14-Examples\compiler\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\cpp\cpp\14-Examples\CMake\main.cpp > CMakeFiles\ProjectName.dir\main.cpp.i

CMakeFiles/ProjectName.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProjectName.dir/main.cpp.s"
	E:\cpp\cpp\14-Examples\compiler\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\cpp\cpp\14-Examples\CMake\main.cpp -o CMakeFiles\ProjectName.dir\main.cpp.s

# Object files for target ProjectName
ProjectName_OBJECTS = \
"CMakeFiles/ProjectName.dir/main.cpp.obj"

# External object files for target ProjectName
ProjectName_EXTERNAL_OBJECTS =

libProjectName.dll: CMakeFiles/ProjectName.dir/main.cpp.obj
libProjectName.dll: CMakeFiles/ProjectName.dir/build.make
libProjectName.dll: E:/cpp/cpp/14-Examples/CMake/lib
libProjectName.dll: CMakeFiles/ProjectName.dir/linkLibs.rsp
libProjectName.dll: CMakeFiles/ProjectName.dir/objects1.rsp
libProjectName.dll: CMakeFiles/ProjectName.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\cpp\cpp\14-Examples\CMake\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libProjectName.dll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ProjectName.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjectName.dir/build: libProjectName.dll
.PHONY : CMakeFiles/ProjectName.dir/build

CMakeFiles/ProjectName.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ProjectName.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ProjectName.dir/clean

CMakeFiles/ProjectName.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\cpp\cpp\14-Examples\CMake E:\cpp\cpp\14-Examples\CMake E:\cpp\cpp\14-Examples\CMake\build E:\cpp\cpp\14-Examples\CMake\build E:\cpp\cpp\14-Examples\CMake\build\CMakeFiles\ProjectName.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ProjectName.dir/depend

