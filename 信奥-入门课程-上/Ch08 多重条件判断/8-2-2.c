
#include <stdio.h>

int main()
{
    int y, m;
    scanf("%d%d", &y, &m);
    if(m == 1) printf("31");
    if(m == 3) printf("31");
    if(m == 5) printf("31");
    if(m == 7) printf("31");
    if(m == 8) printf("31");
    if(m == 10) printf("31");
    if(m == 12) printf("31");
    if(m == 4) printf("30");
    if(m == 6) printf("30");
    if(m == 9) printf("30");
    if(m == 11) printf("30");
    if(m == 2) {
        if(y%4 == 0) {
            if(y%100 == 0) {
                if(y%400 == 0) {
                    printf("29");
                }
                else printf("28");
            }
            else {
                printf("29");
            }
        }
        else {
            printf("28");
        }

    }
}