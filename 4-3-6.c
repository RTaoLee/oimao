#include <stdio.h>
int main(){
    int n,m,k,j,s;
    scanf("%d%d%d%d", &n, &m, &k, &j);
    s = n*3600+m*60+k+j*60;
    printf("%d:%d:%d",(s/3600)%24,s%3600/60,s%3600%60/1);
}