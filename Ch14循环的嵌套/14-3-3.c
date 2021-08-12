#include <stdio.h>

int main()
{
	int a, b, k, i, j, lee=0;
	scanf("%d%d",&a,&b);
    if(a>b) {
        k=b;
        b=a;
        a=k;
    }
	for(i=a;i<=b;i++)
	{
		int num=i;
		int c=0;
		for(;num>0;)
		{
			c=c*10+num%10;
			num/=10;
		}
		if(c==i){
			printf("%d ", i);
			lee++;
		}
	}
	printf("\n%d", lee);
}