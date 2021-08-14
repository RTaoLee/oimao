#include <stdio.h>

int main()
{
    long long n,s=0;
    scanf("%lld",&n);
    long long sum=n;
    while(sum>=10){
        n=sum;
        s=0;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        sum=s;
    }
    printf("%lld", sum);
    
}