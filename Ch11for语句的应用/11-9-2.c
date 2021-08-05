#include <stdio.h>
int main(){
    int n,a,lee=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a!=i){
            lee++;
        }
    }
    printf("%d",lee);
}