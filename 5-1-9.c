#include <stdio.h>
int main(){
    double x,k,ans;
    scanf("%lf%lf",&x,&k);
    ans = x + (x/100)*k;
    ans = ans + (ans/100)*k;
    ans = ans + (ans/100)*k;
    printf("%.2lf",ans);
}