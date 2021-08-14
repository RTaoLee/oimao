#include <stdio.h>
int main(){
    int n,m;
    int a,b;
    scanf("%d%d",&n,&m);
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
            for(int j=0;j<m;j++)
            {
                printf("%d",a);
            }
        } else{
            printf("%d",a);
            for(int j=0;j<m-2;j++)
            {
                printf("%d",b);
            }
            printf("%d",a);
        }
        printf("\n");
    }
}