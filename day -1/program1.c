#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("sum of first n natural number is = %d",sum);
    return 0;
}