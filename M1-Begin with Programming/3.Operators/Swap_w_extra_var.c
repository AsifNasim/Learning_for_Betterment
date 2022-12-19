#include<stdio.h>
int main(){
    int a = 5, b = 10;
    printf("%d %d\n", a, b);
    int temp = a ;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
}