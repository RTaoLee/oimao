#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    printf("%d%d%d%d",x%10,x/10%10,x/100%10,x/1000);
}