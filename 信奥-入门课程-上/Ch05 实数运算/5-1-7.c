//AB之间的距离为sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb))

#include <stdio.h>
#include <math.h>

int main()
{
    double xa, ya, xb, yb, xc, yc;
    double AB, BC, AC, p;
    scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &xb, &yb, &xc, &yc);
    AB = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    BC = sqrt((xb - xc) * (xb - xc) + (yb - yc) * (yb - yc));
    AC = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));
    p = (AB+BC+AC)/2;
    printf("%.3lf",sqrt(p*(p - AB)*(p - BC)*(p - AC)));
}