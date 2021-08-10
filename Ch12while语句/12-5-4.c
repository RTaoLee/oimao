#include <stdio.h>

//1 1 2 3 5
int main()
{
    int n, x=1, y=1, a, lee=1, sum=1;
    scanf("%d", &n);
    while(sum<=n)
    {
        sum+=y;
        a=x;
        x=y;
        y=a+y;
        lee++;
    }
    printf("%d", lee);

}