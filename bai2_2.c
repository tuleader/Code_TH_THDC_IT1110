#include<stdio.h>
int main(){
    float a,b,max;
    scanf("%f%f", &a, &b);
    max = a;
    if (b > max) max = b;
    printf("%6.2f", max);
    return 0;
}