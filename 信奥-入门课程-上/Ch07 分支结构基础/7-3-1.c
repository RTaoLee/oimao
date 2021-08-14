#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x >= 90) {
        printf("Excellent");
    }
    else if(x >= 80) {
        printf("Good");
    }
}