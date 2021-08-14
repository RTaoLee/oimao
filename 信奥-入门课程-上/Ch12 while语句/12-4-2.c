#include <stdio.h>
int main(){
    int n,lee=0;
    scanf("%d",&n);
    while(n!=0)
    {
        lee+=n;
        scanf("%d",&n);
    }
    printf("%d",lee);
}