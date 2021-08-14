#include <stdio.h>
int main(){
    int n,m;
    char ans = '%';
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
            for(int j=0;j<m;j++)
            {
                printf("%c",ans);
            }
        } else{
            printf("%c",ans);
            for(int j=0;j<m-2;j++)
            {
                printf(" ");
            }
            printf("%c",ans);
        }
        printf("\n");
    }
}