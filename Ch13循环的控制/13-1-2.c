#include <stdio.h>

int main(void){
    int n, k, i=1;
    scanf("%d%d", &n, &k);
    double sum=n, price=200;
    
    while(sum < price){
        sum+=n;
        price = price + price * k /100;
        i++;
        if(i>20) break;
    }
    if(i<20) printf("%d", i);
    else printf("Impossible");
    return 0;
}