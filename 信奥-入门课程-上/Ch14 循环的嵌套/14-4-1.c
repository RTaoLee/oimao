/*
   *    0  1
  * *   1  2  (2-1)*2-1    
 *   *  3  3  (3-1)*2-1
******* 5  4  (4-1)*2-1   2*4-1
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        printf("*");
        if(i>=2&&i<n)
        {
            for(j=1;j<=(i-1)*2-1;j++)
            {
                printf(" ");
            }
            printf("*");
        } else if(i==n) 
        {
            for(j=1;j<=2*n-2;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}