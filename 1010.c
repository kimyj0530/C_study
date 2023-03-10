#include "stdio.h"
int main(void)
{
	int k, n, m, a;
	scanf("%d", &k);
	for(int z=0; z<k; z++)
	{
		a=1;
		scanf("%d %d", &n, &m);
		for(int i=0; i<n; i++)
		{
			a*=m-i; 
			a/=1+i;
		}
		printf("%d\n", a);
	}
}
