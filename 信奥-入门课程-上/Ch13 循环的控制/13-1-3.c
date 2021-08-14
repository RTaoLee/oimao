#include <stdio.h>

int main(void){
    int n,x=1;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n/i+n%i==n/i)
        {
            x=0;
            break;
        }
    }
    if(n==1) printf("0");
    else printf("%d", x);
}