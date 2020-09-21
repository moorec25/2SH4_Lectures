#include <stdio.h>

int main(void) {

    int ID;
    printf("Welcome to 2SH4, enter ID\n");
    scanf("%d", &ID); // %d is a placeholder for decimal value, &ID stores input into ID
    // scanf(specifier, return value)
    printf("entered ID is:%d\n", ID); // Order of placeholders must be same as order of input parameters
    return 0; // Good programming practice to have a return type so that errors can be caught based on what is returned

    // In C, every variable must first be declared before being used
    // Must be declared with a type
    // Conversion specifiers: int: %d char:%c float:%f double:%f(printf), %lf(scanf)

    /*
    C Development Process
    Editor: File is saved from editor onto disk
    Preprocessor: Header files are copied into main file so that program can be run, removes comments
    Compilation: Translation into assembly
    Assembler turns assembly into machine/object code, creates object file
    Linker combines multiple object files into an executable
    When executable is run, machine code is put into memory and run line by line
    */
    

}
