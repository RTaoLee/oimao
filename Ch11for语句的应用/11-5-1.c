#include <stdio.h>
int main(){
    int n,x,mx=0,my=101,mz=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&x);
        if(mx<x){
            mx=x;
        }
        if(my>x){
            my=x;
        }
        mz+=x;
    }
    printf("%d",mz-mx-my);
}