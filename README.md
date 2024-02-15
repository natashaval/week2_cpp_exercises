# Week 2 Exercises

## Description

This folder contains the exercise templates for [week 2 of Research Computing with C++](https://hackmd.io/@comp0210-cpp-redesign/BJUDGPbQa).

[UCL Reading Week 2](https://moodle.ucl.ac.uk/mod/url/view.php?id=5928437)
You should open this folder in VSCode; this is particularly important if you are using Docker as the top level folder contains the .devcontainer.

[Week 2 Solutions](https://hackmd.io/@comp0210-cpp-redesign/Hk9Ymc4F6)

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
4. University: run `g++ -o build/University_example src/* -Iinclude`
5. `./build/University_example`

What is the benefit of using pointers?
- used in OOP for polymorphism, ...
search examples

Section 4 solutions, why weak pointers:
We have the following considerations:

1. We should avoid memory leaks due to circular references. This means we can't use shared pointers for both classes.
2. It doesn't make much sense for instances of either class to own the other. They only need to refer to one another, but their lifetimes are essentially independent.
3. Pointers may be invalidated if one a Student or Department instance is destroyed and other objects are pointing to it.

The best solution is this case is probably weak pointers.