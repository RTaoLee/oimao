#include <stdio.h>
#include <math.h>
int main(){
    int x;
    double fee;
    scanf("%d",&x);
    if(x<=1000){
        fee=16;
    }
    else{
        x=x-1000;
        fee = 16 + ceil(x/500.0) * 10;
    }
    if(x == 0) fee = 0;

    printf("%d", (int)fee);
}