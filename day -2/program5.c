#include<stdio.h>
int main(){
    int sum=0,n,remainder;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("sum of digits of given number is: %d",sum);
    return 0;
}