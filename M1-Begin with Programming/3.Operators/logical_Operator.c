#include<stdio.h>
int main(){
    int a = 18, b = 12, c =8;
    int d = a>b && b>c;
    printf("%d\n", d);

    int e = -5 &&5;
    // the answer will be one because anything else than 0 is 1;
    printf("%d\n", e);

    return 0;
}