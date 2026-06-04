#include<stdio.h>
int main(){
    int i,n,a=0,b=1,c;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n==1){
        printf("nth term is= %d",a);
    }
    else if(n==2){
        printf("nth term is = %d",b);
    }
        else{
            for(i=3;i<=n;i++){
                c=a+b;
                a=b;
                b=c;
            }
            printf("nth tern is = %d",b);
    }
    return 0;
}