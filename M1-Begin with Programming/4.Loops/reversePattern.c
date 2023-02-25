
#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int xPower = 1;
    while(num/xPower > 9){
        xPower *= 10;
    }
    
    while(xPower > 0){
        printf("%d\n", num/xPower);
        xPower = xPower/10;
    }
    return 0;
}
