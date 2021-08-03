#include <stdio.h>
int main(){
    int h,m,s,j;
    scanf("%d",&j);
    h=j/10000;
    m=j%10000/100;
    s=j%100;
    printf("%d",(h-0)*3600+(m-0)*60+s);
}