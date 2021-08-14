#include <stdio.h>

int main()
{
    int n, a, b, a1, b1, lee=0;
    scanf("%d%d%d", &n, &a, &b);
    for(int i=2;i<=n;i++)
    {
        scanf("%d%d",&a1,&b1);
        if(a>b&&a1<b1) lee++;
        if(a<b&&a1>b1) lee++;
        a=a1;
        b=b1;
    }
    if(a>b) printf("peiqi\n");
    else printf("aimili\n");
    printf("%d", lee);
}