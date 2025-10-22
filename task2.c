#include<stdio.h>
int main()
{
	int arr[10],j,num,count,i;
	
	for(i=0;i<10;i++)
	{
		printf("Enter number %d:",j+1);
		scanf("%d",&arr[i]);
		j++;
	}
	printf("Enter the number you want to find:");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(arr[i]==num)
		{
			count++;
		}
		
		
	}
	
	if(arr[5]!=num)
	printf("Number not found");
	else
	printf("%d",count-1);
	
	
	
	
	
	
	return 0;
}
