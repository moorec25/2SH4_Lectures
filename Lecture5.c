#include <stdio.h>

/*
    Data types: 
        char - 1 byte
        int - 16 or 32 bits
        short int (short), long int long)
        float - 32 bit
        double - 64 bit
        long double
        signed/unsigned -- apply to char,int,short,long

    Arithmetic Operators
        Unary operator: +, -
        Binary operators: +, -, *, /, %

*/
int main(void) {
    
    // Pre-increment vs post-increment
    int i=1, a=0, b=0;
    a = ++i; // First incremented, then assigned
    i=1;
    b=i++; // First assigned, then incremented

    printf("%d %d", a, b);
   
}
