#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    double fee;
    char ji;

    scanf("%d %c", &x, &ji);
    if(x <= 1000){
        fee = 16;
    }
    else {
        x = x - 1000;
        fee = 16 + ceil(x/500.0) * 10;
    }
    if(ji == 'F') {
        fee = fee + 20;
    }

    if(x == 0) fee = 0;

    printf("%d", (int)fee);
}