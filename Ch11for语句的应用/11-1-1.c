#include <stdio.h>
int main(){
    int n;
    double s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            s=s-1.0/i;
        }
        else{
            s=s+1.0/i;
        }
    }
    printf("%.2lf",s);
}