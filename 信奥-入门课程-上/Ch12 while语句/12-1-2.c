#include <stdio.h>
int main(){
    int a,b,sum,lee=0,i=1,d;
    scanf("%d %d %d", &a, &b, &sum);
    d = b - a;
    lee = a;
    while(lee < sum)
    {
        a = a + d;
        lee = lee + a;
        i++;
    }
    printf("%d", i);
}