#include <stdio.h>
int main(){
    int n,lee=0;
    scanf("%d",&n);
    while(n>0)
    {
        lee = lee + n%10;
        n = n/10;
    }
    printf("%d",lee);
}