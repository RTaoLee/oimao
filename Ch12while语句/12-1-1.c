#include <stdio.h>
int main(){
    int s,x=0,lee=0,i=1;
    scanf("%d",&s);
    while(x<s)
    {
        x=x+i;
        i=i+1;
        lee++;
    }
    printf("%d",lee);
}