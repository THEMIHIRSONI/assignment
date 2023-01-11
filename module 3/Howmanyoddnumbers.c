#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Odd numbers between 1 to 100\n");  
   
    /* 
     * Initialize counter with 1, and increment it in every iteration.
     * For every value of counter check whether it is odd number or
     * not and print it accordingly 
     */ 
    for(counter = 1; counter <= 100; counter++) {  
        /* Odd numbers are not divisible by 2. When an Odd 
         number is divided by 2, it leaves 1 as remainder */ 
        if(counter%2 == 1) { 
            /* counter is odd, print it */
            printf("%d ", counter);  
        }  
    }  
   
    return 0;  
} 