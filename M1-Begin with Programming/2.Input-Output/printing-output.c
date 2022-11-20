#include<stdio.h>
#include<limits.h>

int main(){
    int a = 12345;
    float fl = 1.23;
    double dl = 1.432;
    char ch = 'g';
    printf("Int value is %d, Float value is %f, double value is %.2lf and character value is %c", a, fl, dl, ch);
    return 0;
}

// Format/Type Specifier --> to specify the datatype of var being printed
// %d --> integer
// %ld --> long
// %lld --> long long or sometimes %I64d
// %f --> float
// %lf --> double
// %c --> character
// %s --> string


  