# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\ООП\task_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\ООП\task_7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/number.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/number.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/number.dir/flags.make

CMakeFiles/number.dir/main.cpp.obj: CMakeFiles/number.dir/flags.make
CMakeFiles/number.dir/main.cpp.obj: ../main.cpp
CMakeFiles/number.dir/main.cpp.obj: CMakeFiles/number.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\ООП\task_7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/number.dir/main.cpp.obj"
	"C:\PROGRA~1\JetBrains\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/number.dir/main.cpp.obj -MF CMakeFiles\number.dir\main.cpp.obj.d -o CMakeFiles\number.dir\main.cpp.obj -c C:\ООП\task_7\main.cpp

CMakeFiles/number.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/number.dir/main.cpp.i"
	"C:\PROGRA~1\JetBrains\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\ООП\task_7\main.cpp > CMakeFiles\number.dir\main.cpp.i

CMakeFiles/number.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/number.dir/main.cpp.s"
	"C:\PROGRA~1\JetBrains\CLion 2021.3.3\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\ООП\task_7\main.cpp -o CMakeFiles\number.dir\main.cpp.s

# Object files for target number
number_OBJECTS = \
"CMakeFiles/number.dir/main.cpp.obj"

# External object files for target number
number_EXTERNAL_OBJECTS =

number.exe: CMakeFiles/number.dir/main.cpp.obj
number.exe: CMakeFiles/number.dir/build.make
number.exe: CMakeFiles/number.dir/linklibs.rsp
number.exe: CMakeFiles/number.dir/objects1.rsp
number.exe: CMakeFiles/number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\ООП\task_7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable number.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\number.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/number.dir/build: number.exe
.PHONY : CMakeFiles/number.dir/build

CMakeFiles/number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\number.dir\cmake_clean.cmake
.PHONY : CMakeFiles/number.dir/clean

CMakeFiles/number.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\ООП\task_7 C:\ООП\task_7 C:\ООП\task_7\cmake-build-debug C:\ООП\task_7\cmake-build-debug C:\ООП\task_7\cmake-build-debug\CMakeFiles\number.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/number.dir/depend

