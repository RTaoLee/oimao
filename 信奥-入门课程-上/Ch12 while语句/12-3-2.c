#include <stdio.h>

int main() {
    int n,n1,m=0;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        m=m*10+n%10;
        n/=10;
    }
    if(n1==m) printf("1");
    else printf("0");
    return 0;
}
