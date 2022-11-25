#include<stdio.h>
int main(){
    int x = 15;
    int y = 4;

    printf("Quotient is %d \nRemainder is %d \n", x/y,  x%y);

    

    // Another approach 
     int quotient = x/y;
     int remainder = x - (y*quotient);
     printf("Remainder is %d", remainder);
        return 0;
}