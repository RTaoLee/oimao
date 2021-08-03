#include <stdio.h>
int main(){
    long long a,b,x,y;
    scanf("%lld%lld",&a,&b);
    if(a>b){
        printf("x>y");
    }
    else if(a<b){
        printf("x<y");
    }
    else if(a==b){
        printf("x=y");
    }
}