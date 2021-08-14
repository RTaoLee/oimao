#include <stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d %d %d", &a, &b,&c);
    for(x=2;;x++)
    {
        if(a%x==b%x&&b%x==c%x)
        {
            printf("%d",x);
            break;
        }
    }
}