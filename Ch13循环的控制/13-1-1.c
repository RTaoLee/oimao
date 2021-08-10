#include <stdio.h>
int main(){
    int n,y,x,lee=0,i;
    scanf("%d%d%d",&n,&y,&x);
    for(i=1;;i++)
    {
        if(lee+n>=x) break;
        lee=lee+n-y;
    }
    printf("%d", i);
}