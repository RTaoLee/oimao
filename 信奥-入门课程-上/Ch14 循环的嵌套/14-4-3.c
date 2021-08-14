#include <stdio.h>
int main()
{
    int n, i, j;
    char c;
    scanf("%d %c",&n,&c);
    for(i=0;i<n;i++)
    {
        for(j=n-i;j<n;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}