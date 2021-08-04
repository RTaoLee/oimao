#include <stdio.h>
int main(){
    int n,a,x=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a == i) {
            x = x + a;
        }
    }

    printf("%d",x-99);
}