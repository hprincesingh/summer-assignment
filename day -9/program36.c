#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==5||j==1||j==5){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}