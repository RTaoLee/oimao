#include <stdio.h>

int main()
{
    int n, a[51], x, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    printf("%d", a[x-1]);
}