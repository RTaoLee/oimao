#include <stdio.h>
int main(){
    int n,s=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        s=s*i;
    }
    printf("%d",s);
}