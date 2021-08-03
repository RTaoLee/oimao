#include <stdio.h>
int main(){
    double n,k;
    scanf("%lf%lf",&n,&k);
    printf("%.2lf",n+(n/100.0)*k);
}