#include <stdio.h>
#include <math.h>
int main(){
    int i,n,x;
    scanf("%d%d",&x,&n);

    for(int i=x;i<=n;i=i+3){
        if(i>n){
            break;
        }
        else printf("%d ",i);
    }
    //printf("%d",n);
}