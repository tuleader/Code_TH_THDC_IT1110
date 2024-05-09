#include<stdio.h>
int main(){
    int n,giaiThua = 1;
    scanf("%d",&n);
    if(n < 0 || n>8){
        printf("ERROR");
        return;
    }
    for(int i=1;i<=n;i++){
        giaiThua = giaiThua*i;
    }
    printf("%d",giaiThua);
    return 0;
}