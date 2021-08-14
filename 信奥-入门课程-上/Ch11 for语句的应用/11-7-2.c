#include <stdio.h>
int main(){
    int n,x,a;
    int d=1,ans=1;
    scanf("%d",&n);
    scanf("%d",&a);
    for(int i=2;i<=n;i++){
        scanf("%d",&x);
        if(a==x){
            d++;
            if(ans < d) ans = d;
        }
        else{
            d=1;
            a=x;
        }
    }
    printf("%d",ans);
}