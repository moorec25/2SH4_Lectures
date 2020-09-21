#include<stdio.h>

int main(void) {

    // Read 15 floating point numbers and print in reverse order
    // One way of doing this is with an array
    // When an array of ints is declared, n ints are created in memory
    // They are contiguous (seperate but touching borders) in memory in a sequential manner
    // There must be enough contiguous space for all elements of array

   
    int nums[5]; // Arrays are assigned to 0 by default
    // double vs float - double: 64 bit float: 32 bit

    for (int i=0;i<5;i++) {
        printf("Enter a number: \n");
        scanf("%d", &nums[i]); // Arrays are passed by reference by default
    }

   // for (int i=4;i>=0;i--) {
   //     printf("%lf ", nums[i]); 
   // }
    
    int flag=1; // Keep track if array is increasing or decreasing 0 if not sorted 1 if sorted
    for (int i=0; i<4; i++) {
        if(nums[i]>nums[i+1]) {
            flag=0;
            break;
        } 
    }

    if(flag==1) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;

} 

