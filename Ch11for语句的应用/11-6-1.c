#include <stdio.h>

int main()
{
    int n, a, max = 0, max2 = 0, max_index = 0, max2_index = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a > max) {
            max2 = max;
            max = a;
            max2_index = max_index;
            max_index = i;
        }
        else if (a > max2) {
            max2 = a;
            max2_index = i;
        }
    }
    printf("%d", max2_index);
}