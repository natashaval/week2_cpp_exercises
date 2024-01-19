# Week 2 Exercises

## Description

This folder contains the exercise templates for [week 2 of Research Computing with C++](https://hackmd.io/@comp0210-cpp-redesign/BJUDGPbQa).

[UCL Reading Week 2](https://moodle.ucl.ac.uk/mod/url/view.php?id=5928437)
You should open this folder in VSCode; this is particularly important if you are using Docker as the top level folder contains the .devcontainer.

You can then move into each sub-folder in the terminal to compile and run the different exercises, as described in the HackMD document. 

How to run Section 1:
1. Go to the folder `cd Section_1_Vector_Functionality/`
2. run `g++ -o build/vector_exercises src/* -Iinclude`
3. run `./build/vector_exercises`

TODO:
- Section_2 : random numbers
- Section_4 : Department - Students university types
- Read Exercise for discussion for binary tree pointers

How to run Section 3:
1. Go to the folder `cd Section_3_Fractions/`
2. FractionAnalyser: run `g++ -o build/FractionAnalyser src/Fraction.cpp src/FractionAnalyser.cpp -Iinclude`
3. FractionChecker: run `g++ -o build/FractionChecker src/Fraction.cpp src/FractionChecker.cpp -Iinclude`
4. FractionChecker `./build/FractionChecker`

How to run Section 4:
1. Go to the folder `cd Section_4_Smart_Pointers/`
2. Smart Pointers: run `g++ -o build/smartPointer src/smart_pointers.cpp`
3. `./build/smartPointer`

What is the benefit of using pointers?
- used in OOP for polymorphism, ...
search examples

