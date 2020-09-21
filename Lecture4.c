// Lecture 4: Functions
#include <stdio.h>

/*
    Multiple source files:
    Functions defined in different files may call eachother
    Header files must be imported

    Local vs Global Variable
    Variable declared outside of a function are global variables and can be used everywhere
    A variable declared in a function are local to that function

    Global variables take up more memory since they are in use for the whole function
    Better to keep variable scope as restricted as possible
    Use of global variables is generally not reccomended

    Scope Rules:
    Scope of an identifier: the portion of the program where an identifier can be referenced
    File scope: global variables, function names - can be referenced anywhere in the file after their definition or declaration
    Block scope: variables defined inside a block can be referenced only inside that block or in inner blocks
    Function scope: visible within function

    Automatic Storage Duration
    Storage duration of an indentifier: the period in which it exists in memory
   

*/
double my_mean_square(double x, double y);

// Function prototype, declares function beforehand and gives reader all needed information
// Only needed if function is declared after main method
// Function prototypes can be placed in header file, which is then included into source file
// Body is implemented in source file
// Function prototype must match function definition

int main(void) {
    double a = 10.0, b = 20.0;
    double c;
    c = my_mean_square(a,b);
    printf("c=%f\n", c);

    return 0;
}

// Function definition
// Function can return at most one vaule

double my_mean_square(double x, double y) {
    double c = (x*x + y*y) / 2;
    return c;
}
