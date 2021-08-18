#include <stdio.h>

int main()
{
    int n, a[101], d, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d", &d);
    for(i=0;i<n;i++)
    {
        if(a[i]==d){
            break;
        }
    }
    if(i==n) printf("-1");
    else printf("%d", i+1);
}