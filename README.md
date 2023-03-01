# AV Technical

### **Submission Date**: 04/03/2023 11:59PM
### **Submission Link**: https://forms.gle/93MFpwC7V1GWcXPJ9

An important engineering skill is to be able to fix and resolve issues that pop up through research (i.e googling and experimenting). The AV task will test your ability to read and debug C++ compile time errors as well resolve runtime errors as well. Attached to this project is a broken code base. It's your task to fix each of the bugs in it. 

You do not need prior or extensive knowledge of C++ to complete this task. This task will test how well you can figure out issues even if you've never seen them or never worked with them before. 

# Problems

There are 3 questions attached each. Each one is more increasingly difficult than the other. Question 3 is the extended task for those particularly keen on pushing and demonstrating their ability. 

Please use CMake to compile (do not use g++ or any other compilers). Attached are some useful resources which should help you start (but you can figure a lot of this out by just googling). 

Each question has a description of the task in its C++ file. Please reach out to the AV team with any questions.

# How to Compile

To compile with CMake create a build folder using 

`mkdir build`

and then run CMake

`cmake ../CMakeLists.txt -B build/`

This will generate a bunch of files in the build folder. Just change directory into the build folder using 

`cd build`

and then compile using make

`make`

This should generate a bunch of executables `Question-1-out`, `Question-2-out`, and `Question-3-out` upon success. For question 1 specifically it will generate a bunch of compilation errors which you need to fix.


# How to Submit
Zip the file, and upload using the google form above. Please avoid including build files

# Some useful resources

https://www.learncpp.com/ (Use this as a resource for this unfamiliar with C++)

https://en.cppreference.com/w/cpp/language

Intro to git: https://opensource.com/article/18/1/step-step-guide-git

Introduction to CMake: https://cliutils.gitlab.io/modern-cmake/ (there is a section on Googletests as well)

Install google test: https://github.com/google/googletest/tree/main/googletest

Basic Cmake tutorial (This is all you should really need for cmake): https://matgomes.com/cmake-add-executable/
