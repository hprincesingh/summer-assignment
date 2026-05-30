#include<stdio.h>
int main(){
    int n,digitcount=0;
    printf("enter number: ");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        digitcount++;
        
    }
    printf("number of digits in given number is: %d",digitcount);
    return 0;
}