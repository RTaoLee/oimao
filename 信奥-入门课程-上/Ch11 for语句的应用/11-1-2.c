#include <stdio.h>
int main(){
    int n,k,x,c=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>=k){
            c+=1;
        }
    }
    printf("%d", c);
}