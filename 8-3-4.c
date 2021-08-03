#include <stdio.h>
int main(){
    int a,b,c,d,e,f,x;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);
    if(x>=a&&x<=b){
        printf("1");
    }
    else if(x>=c&&x<=d){
        printf("2");
    }
    else if(x>=e&&x<=f){
        printf("3");
    }
    else{
        printf("ohno");
    }
}