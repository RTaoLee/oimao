#include <stdio.h>
int main(){
    int k,m;
    scanf("%d%d",&m,&k);
    if(m%k==0){
        printf("Great!");
    }
    else{
        printf("Fail..");
    }
}