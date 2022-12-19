#include<stdio.h>
int main(){
    int a = 6;
    int b = a==9;

    // == has more precedence over = hence == evaluates first
    printf("%d\n", b);
    return 0;
}