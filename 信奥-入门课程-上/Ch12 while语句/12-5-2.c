#include <stdio.h>

int main() {
    int x,y,lee=1;
    scanf("%d",&x);
    scanf("%d",&y);
    while(y>=x)
    {
       x=x*2;
       lee++;
    }
    printf("%d",lee);
    return 0;
}