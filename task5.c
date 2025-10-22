#include<stdio.h>

int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);	
	}
	int max=arr[0];
	int min=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("max:%d\n",max);
	printf("min:%d\n",min);
	printf("Difference:%d",max-min);
	
	
	
	
	
	
	return 0;
}
