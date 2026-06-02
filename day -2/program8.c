#include<stdio.h>
int main(){
    int n,remainder,reverse=0,originalnumber;
    printf("enter a number: ");
    scanf("%d",&n);
    originalnumber=n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(originalnumber==reverse){
        printf("given number is palindrome");
    }
    else{
        printf("given number is not palindrome");
    }
    return 0;
    
}