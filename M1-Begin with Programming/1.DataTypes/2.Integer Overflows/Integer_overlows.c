#include<stdio.h>
#include<limits.h>
int main(){
    // int a = 4294967296;
    int a = -2147483649;
    printf("%d", a);
    printf("\n");
    int x = INT_MIN;
    int y = INT_MAX;
    printf("%d %d \n", x, y);
    long long m = 10000000000034;
    printf("%lld \n", m);
    printf("%d %d %d %d %d %d \n", sizeof(int), sizeof(long), sizeof(long long), sizeof(char), sizeof(float), sizeof(double));
    return 0;
} 


// long : 8/4 bytes 
// long long : 8 bytes ==> 64 bits ==> 2^64
// These values are system dependent
// long int and long both are same 
// same applies for long long as well

// 1Byte = 8 bits ===> 256 characters





