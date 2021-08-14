#include <stdio.h>

int main()
{
    int n, i, m, j, lee=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%7==0) lee++;
        else {
            m=1;
            j=i;
            while(j>0){
                if(j%10==7){
                    m=0;
                    break;
                }
                j/=10;
            }
            if(m==0) lee++;
        }
    }
    printf("%d", n-lee);
}