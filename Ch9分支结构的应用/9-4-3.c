#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&b>=c){
        printf("%d %d %d",1,2,3);
    }
    else if(a>=c&&c>=b){
        printf("%d %d %d",1,3,2);
    }
    else if(b>=a&&a>=c){
        printf("%d %d %d",2,1,3);
    }
    else if(b>=c&&c>=a){
        printf("%d %d %d",2,3,1);
    }
    else if(c>=b&&b>=a){
        printf("%d %d %d",3,2,1);
    }
    else if(c>=a&&a>=b){
        printf("%d %d %d",3,1,2);
    }
    else{

    }
}