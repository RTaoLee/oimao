#include <stdio.h>
int main(){
    int n,x,mx=0,my=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>mx){
        my=mx;
        mx=x;
        }
        else if(x<mx && x>my) my=x;
    }   
    printf("%d",my);
}