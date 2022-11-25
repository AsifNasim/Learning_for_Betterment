#include<stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    double result = (double)x/ (double)y;
    // need to type casting here otherwise it will not give the desired result
    printf("Result is %.1lf\n", result);

    // float z = ((float)x)/y;
    // if we not put the extra bracket then y will be automatically typecasted to float

    // another nice way of doing it
    float z = (x*1.0) / y; // since product of float and integer in float 


    printf("%.1f", z);
    return 0;
}
