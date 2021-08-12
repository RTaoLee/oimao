#include <stdio.h>

int main()
{
	int a, b, i, j, lee=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int c=1;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0) {
				c=0;
				break;
			}
		}
		if(c==1){
			printf("%d ", i);
			lee++;
		}
	}
	printf("\n%d", lee);
}