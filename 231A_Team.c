#include<stdio.h>

int main()
{
	int number;
	int Pety, Vasya,Tonya;
	int i,sum=0,count=0;
	
	scanf("%d",&number);
	

	
	for(i=0; i<number; i++)
	{
		sum=0;
		scanf("%d %d %d",&Pety,&Vasya,&Tonya);
		
		/*if( Pety==1)
			count++;
		if( Vasya==1 )
			count++;
		if( Tonya==1 )
			count++;		
		
		if(count>=2)
		{
			sum++;
		}
		count=0;
		*/
		sum +=Pety+Tonya+Vasya;
		if(sum>=2)
			++count;
		
	}
	printf("%d",count);
	
	
	return 0;
	
}