#include <stdio.h>

int main(void) {
    
    int sum=0;
    int i;
    int input=0;
    
    // Take 10 inputs and sum odd numbers
    /*
    for (i=0;i<10;i++) {
        printf("Input an int: \n");
        scanf("%d", &input);
        if (input%2 != 0) {
            sum += input;
        }
    }
    
    printf("The sum is %d", sum);
    */

    // Take inputs until a 1 is entered

    do {
        
        printf("Input an int: \n");
        scanf("%d", &input);
        if (input != 1) {
            sum += input;
         } else {
             printf("Terminating...\n");
         }
 
    } while (input!=1);
    printf("The sum is %d", sum);

    return 0;
}
