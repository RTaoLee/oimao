#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%10==7){
        if(x%3==0){
            if(x%12==0){
                printf("fail");
            }
            else printf("done");
        }
        else printf("fail");
    }
    else printf("fail");
}