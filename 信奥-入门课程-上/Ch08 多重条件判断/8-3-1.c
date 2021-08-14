#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==100&&y==100){
        if(y==100&&x==100){
            printf("no");
        }
        else printf("no");
    }
    if(x==100&&y<100){
        if(y==100&&x<100){
            printf("yes");
        }
        else printf("yes");
    }
    if(x<100&&y<100){
        if(y<100&&x<100){
            printf("no");
        }
        else printf("no");
    }
}