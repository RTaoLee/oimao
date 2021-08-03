#include <stdio.h>
int main(){
    int f;
    double x,fee;
    scanf("%lf %d",&x,&f);

    if(x<=240){
        fee = x*0.4883;
    }
    else if(x>=240&x<=400){
        fee = (x-240)*0.5283+240*0.4883;
    }
    else if(x>400){
        fee =(x-400)*0.7883+(400-240)*0.5283+240*0.4883;
    }
    else {

    }

    if(f==0){
        fee = fee*2;
    }

    printf("%.5lf",fee);
}