#include <stdio.h>

int main()
{
    int s, n, x, d, sum, lee=0;
    scanf("%d%d%d%d", &s, &n, &x, &d);
    sum = s%10 + s/10%10 + s/100%10 + s/1000;
    for(int i = 0; i < n; i++)
    {
        if((x + i * d)%sum == 0) {
            lee++;
        }
    }
    printf("%d", lee);
}