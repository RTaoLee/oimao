#include <stdio.h>
int main(){
    int n;
    int tmp=0;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        tmp = tmp + i;
        sum = sum + tmp; 
    }
    printf("%d",sum);
}