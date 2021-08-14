#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    if(a > b) {
        c = a;
        a = b;
        b = c;
    }
    for(int i = a; i <= b; i++)
    {
        if(i < 10) { //个位数
            if((i*i)%10 == i) printf("%d ", i);
        }
        else if (i < 100) { //两位数
            if((i*i)%100 == i) printf("%d ", i);
        }
        else if (i < 1000) { //三位数
            if((i*i)%1000 == i) printf("%d ", i);
        }
        else {

        }
    }
}