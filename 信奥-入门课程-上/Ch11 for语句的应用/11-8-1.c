#include <stdio.h>
int main(){
    int n,x,a,max=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for (int i=2;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==x){
            printf("%d ",i);
            max++;
        }
        else{
            x=a;
        }
    }
    printf("\n%d",max);
}