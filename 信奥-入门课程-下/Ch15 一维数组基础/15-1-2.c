#include <stdio.h>
int main(){
    int n,x,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(i==x)
        {
            printf("%d ",i);
        }
    }
}