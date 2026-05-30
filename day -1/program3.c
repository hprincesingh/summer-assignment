#include<stdio.h>
int main(){
    int i,n,factorial=1;
    printf("enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("factorial of given number is: %d",factorial);
    return 0;
}