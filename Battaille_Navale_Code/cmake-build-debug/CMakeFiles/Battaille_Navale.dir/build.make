# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CLion\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CLion\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Battaille_Navale.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Battaille_Navale.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Battaille_Navale.dir/flags.make

CMakeFiles/Battaille_Navale.dir/main.c.obj: CMakeFiles/Battaille_Navale.dir/flags.make
CMakeFiles/Battaille_Navale.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Battaille_Navale.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Battaille_Navale.dir\main.c.obj   -c C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\main.c

CMakeFiles/Battaille_Navale.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Battaille_Navale.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\main.c > CMakeFiles\Battaille_Navale.dir\main.c.i

CMakeFiles/Battaille_Navale.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Battaille_Navale.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\main.c -o CMakeFiles\Battaille_Navale.dir\main.c.s

# Object files for target Battaille_Navale
Battaille_Navale_OBJECTS = \
"CMakeFiles/Battaille_Navale.dir/main.c.obj"

# External object files for target Battaille_Navale
Battaille_Navale_EXTERNAL_OBJECTS =

Battaille_Navale.exe: CMakeFiles/Battaille_Navale.dir/main.c.obj
Battaille_Navale.exe: CMakeFiles/Battaille_Navale.dir/build.make
Battaille_Navale.exe: CMakeFiles/Battaille_Navale.dir/linklibs.rsp
Battaille_Navale.exe: CMakeFiles/Battaille_Navale.dir/objects1.rsp
Battaille_Navale.exe: CMakeFiles/Battaille_Navale.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Battaille_Navale.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Battaille_Navale.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Battaille_Navale.dir/build: Battaille_Navale.exe

.PHONY : CMakeFiles/Battaille_Navale.dir/build

CMakeFiles/Battaille_Navale.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Battaille_Navale.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Battaille_Navale.dir/clean

CMakeFiles/Battaille_Navale.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\cmake-build-debug C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\cmake-build-debug C:\Users\Gatien.JAYME\Documents\GitHub\Bataille-Navale\Battaille_Navale_Code\cmake-build-debug\CMakeFiles\Battaille_Navale.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Battaille_Navale.dir/depend

