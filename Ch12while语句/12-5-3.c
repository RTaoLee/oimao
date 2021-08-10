#include <stdio.h>

int main()
{
	int n, left=0, ans;
	scanf("%d", &n);
	ans=0;
	while(n>=5){
		ans+=(n/5)*5;
		n=n/5+n%5;
	}
	ans+=n;
	printf("%d",ans);
}
