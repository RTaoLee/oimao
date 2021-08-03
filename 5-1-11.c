#include <stdio.h>
#include <math.h>

int main()
{
    double h, r, v, pi = 3.14159;
    scanf("%lf%lf", &h, &r);
    v = pi * r * r * h / 1000;
    printf("%d", (int)ceil(30/v));
}