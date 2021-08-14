#include <stdio.h>
#include <math.h>
int main(){
    int p,a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    p = (a+b+c)/2;
    printf("%d",(int)(sqrt(p*(p-a)*(p-b)*(p-c))));
}