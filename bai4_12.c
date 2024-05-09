#include<stdio.h>
int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    double x,tong=0;
    scanf("%lf%d",&x,&n);
    if(n < 1 || x < 0){
        printf("Error");
        return 0;
    }
    for(int i=0;i<=n;i++){
        tong = tong+pow(-1,i)*pow(x,i)/factorial(i);
    }
    printf("%.4lf",tong);
    return 0;
}