#include <stdio.h>

int main()
{
    int x, y, n = 0;
    scanf("%d%d", &x, &y);
    for(int i = x; i <= y; i++)
    {
        int a = i/100;
        int b = i/10%10;
        int c = i%10;
        if (a*a*a + b*b*b + c*c*c == i) {
            printf("%d ", i);
            n++;
        }
    }
    printf("\n%d", n);
}