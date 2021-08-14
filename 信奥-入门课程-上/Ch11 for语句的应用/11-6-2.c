#include <stdio.h>
int main(){
    int n,x=0,y=1,a;
    scanf("%d",&n);
    if(n==1){
        printf("%d",x);
    }
    if(n==2){
        printf("%d",y);
    }
    if(n>2){
        for(int i=3;i<=n;i++){
            a=x+y;
            x=y;
            y=a;
        }
    }
    printf("%d",a);
}