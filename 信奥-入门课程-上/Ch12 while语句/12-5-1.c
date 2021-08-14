#include <stdio.h>

int main() {
    int n,x,i,lee=0;
    scanf("%d",&n);
    scanf("%d",&x);
    while(n>0)
    {
        i-=x;
        x++;
        lee++;
    }
    printf("%d",lee);
    return 0;
}