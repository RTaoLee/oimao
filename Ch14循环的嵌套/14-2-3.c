#include <stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n*n;i++)
	{
		printf("%d ",i);
		if(i%n==0)
		{
			printf("\n");
		}
	}
	return 0;
}