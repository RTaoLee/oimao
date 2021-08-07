#include <stdio.h>
int main(){
    int n,x,lee=0,baoji=1;
    scanf("%d",&n);
    while(n>0){
        lee+=n%10;
        if(n%10%2==0) baoji=0;
        n=n/10;
    }
    if(lee%2!=0) baoji=0;
    printf("%d %d", lee, baoji);
}