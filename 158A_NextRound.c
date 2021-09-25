#include<stdio.h>



int main()
{
	int n,k;
	int a[100];
	
	scanf("%d",&n);
	scanf("%d",&k);
	int i;
	for(i=1; i<= n; i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=1; i<= n; i++)
	{
		if (a[i] >= a[k] && a[i] != 0)
		{
			count++;
		}
	}
	
	printf("%d",count);
	return 0;
	
}


