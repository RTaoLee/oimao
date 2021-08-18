#include <stdio.h>
int main(){
    int h,a[10],lee,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&h);
    lee=0;
    for(i=0;i<10;i++)
    {
        if(h+30>=a[i])
        {
            lee++;
        }
    }
    printf("%d",lee);
}