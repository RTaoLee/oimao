#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+2){
        if (i == 0) {
            continue;
        }
        printf("%d ",i);
    }
}