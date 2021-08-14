#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c){
        printf("%d %d",1,a);
    }
    else if(b>=a&&b>=c){
        printf("%d %d",2,b);
    }
    else {
        printf("%d %d",3,c);
    }
}