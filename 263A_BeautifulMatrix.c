#include<stdio.h>
#include<math.h>



int main()
{
	
	int a[5][5];
	int x=0;
	int count=0;
	int i,j;
	
	for(i=0 ; i<5 ;i++)
	{
		for(j=0; j<5; j++)
		{
			scanf("%d",&a[i][j]) ;
			//scanf("%d",&x) ;
			if(a[i][j]==1)
			{
				count = abs(i - 2) + abs(j - 2);
				break;
			}
		}
	}
	
		printf("%d",count);
		
	
	
	return 0;
	
}