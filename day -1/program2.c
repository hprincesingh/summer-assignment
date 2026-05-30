#include<stdio.h>
int main(){
    int i,n,table;
    printf("enter number: ");
    scanf("%d",&n);
    printf("the table of given number:\n");
    for(i=1;i<=10;i++){
        table=n*i;
        printf("%d\n",table);
    }
    return 0;
}