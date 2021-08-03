#include <stdio.h>

int main(){
    int n;
    long long r = 1;
    scanf("%d", &n);
    r = r << n;
    printf("%lld", r);
}