#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    /*
    if(a<b+c){
        if(b<a+c){
            if(c<a+b){
                printf("yes");
            }
            else printf("no");
        }
        else printf("no");
    }
    else printf("no");
    */
    if(a < b + c && b < a + c && c < a + b) {
        printf("yes");
    } else {
        printf("no");
    }
}