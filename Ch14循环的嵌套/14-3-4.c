#include <stdio.h>

int main()
{
	int a, b, i, j, lee=1;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		int c=1, sum=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0) {
				c=0;
				break;
			}
		}
		if(c==1) {
			int p=i;
			while(p>0){
				sum=sum+p%10;
				p/=10;
			}
			if(sum==10){
				lee=0;
				printf("%d", i);
				break;
			}
		}
	}
	if(lee==1) printf("no");
}