#include <stdio.h>

int main(void){
    int x,y,n,lee=0,i=1;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&n);
    while(x>=y)
    {
        x=x/2;
        n-=i;
        i=i*2;
        if(n<0)
        {
            break;
        }
        
    }
    if(x<y) printf("%d %d", x, n);
    else printf("%d %d", x, 0);
}