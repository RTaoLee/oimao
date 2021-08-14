#include <stdio.h>
int main(){
    int n,x,mx=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(mx<x){
            mx=x;
        }
    }
    printf("%d",mx);
}