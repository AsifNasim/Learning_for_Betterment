#include<stdio.h>
#include<limits.h>

int main(){
    int num = 2;
    int ch = 'x';
    for(int i = 1; i<= 10; i++ ){
        int result = num*i;
        printf("%d %c %d = %d \n", num, ch,  i, result);
    }
}