#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    int a;
    float x,y,z;
    scanf("%d %f %f %f", &a, &x, &y, &z);
    printf("Value of a is %d\nValue of x is %.3f\nvalue of y is %.2f\nvalue of z is %.2f", a, x, y, z);
    return 0;
}