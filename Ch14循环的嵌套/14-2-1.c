#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%2d+%2d=%2d ", j, i-j, i);
        }
        printf("\n");
    }
    return 0;
}