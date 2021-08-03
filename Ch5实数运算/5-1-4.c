#include <stdio.h>
int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d",(n%x+x-1)/x+(n/x));
}