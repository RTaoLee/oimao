#include <stdio.h>

/*
1 2 3 4       1
8 7 6 5       2     2*4
9 10 11 12    3  2*4+1
16 15 14 13   4  4*4
17               5  4*4+1

25              7  6*4+1
*/

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1) {
            for(int j=(i-1)*n+1;j<(i-1)*n+1+n;j++)
            {
                printf("%d ", j);
            }
        }
        else {
            for(int j=i*n;j>i*n-n;j--)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
        
    }
    return 0;
}