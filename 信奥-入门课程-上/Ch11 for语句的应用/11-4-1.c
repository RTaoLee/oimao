#include <stdio.h>
int main(){
    int a,b,x=0,y=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<a;i++){
        if(a%i==0){
            x+=i;
        }
    }
    for(int i=1;i<b;i++){
        if(b%i==0){
            y+=i;
        }
    }
    if(y==a&&x==b){
        printf("match.");
    }
    else{
        printf("N0!");
    }
}