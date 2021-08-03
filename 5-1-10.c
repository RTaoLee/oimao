#include <stdio.h>
int main(){
    double x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);
    printf("%.2lf\n%.2lf",x+y+z,(x+y+z)/3);
}