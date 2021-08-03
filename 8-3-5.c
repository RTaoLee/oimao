#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if((int)x >= (int)'a' && (int)x <= (int)'z'){
        printf("%c",x-32);
    }
    else {
        printf("%c", x);
    }
}