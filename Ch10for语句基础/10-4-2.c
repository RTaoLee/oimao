#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int tmp = 0;
    for(int i=1;i<=n;i=i+1){
        tmp = i * 11;
        sum = sum + tmp;
    }
    printf("%d",sum);
}