#include <stdio.h>
int main(){
    int n,lee=0;
    scanf("%d",&n);
    for(int i=0;n!=0;i++)
    {
        lee+=n;
        scanf("%d",&n);
    }
    printf("%d",lee);
}