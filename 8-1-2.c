
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(c>a&&c>b){
        if(a*a+b*b==c*c){
            printf("yes");
        }
        else printf("no");
    }
    if(a>c&&a>b){
        if(b*b+c*c==a*a){
            printf("yes");
        }
        else printf("no");
    }
    if(b>a&&b>c){
        if(a*a+c*c==b*b){
            printf("yes");
        }
        else printf("no");
    }
}