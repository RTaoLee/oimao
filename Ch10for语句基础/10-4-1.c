#include <stdio.h>
int main(){
    int n;
    double s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s+1.0/i;
    }
    printf("%.2lf",s);
}
