#include <stdio.h>
int main(){
    int n,x,y,a,lee=0;
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(x<=a&&y>=a){
            lee++;
        }
    }
    printf("%d",lee);
}