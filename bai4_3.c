#include <stdio.h>
int main()
{
    int n, x=0;
    scanf("%d", &n);
    if (n <= 0 || n >= 1000)
    {
        printf("ERROR");
        return 0;
    }
    while(n){
        x += n%10;
        n /= 10;
    }
    printf("%d", x);
    return 0;
}