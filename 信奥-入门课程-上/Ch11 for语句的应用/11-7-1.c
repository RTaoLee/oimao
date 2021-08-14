#include <stdio.h>
int main(){
    int n,x,a,max=1;
    scanf("%d",&n);
    scanf("%d",&x);
    for (int i=2;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%x==0){
            x=a;
            max=i;
        }
    }
    printf("%d %d",max,x);
}