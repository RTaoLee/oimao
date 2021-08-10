#include <stdio.h>

int main() {
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=a;
    while(a%b!=0)
    {
        a=a+x;
    }
    printf("%d",a);
    return 0;
}