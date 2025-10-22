#include<stdio.h>
int main()
{
	
	int i,arr[5];
	int j=1,last;
	for(i=0;i<5;i++)
	{
		printf("Enter number %d:",j);
		scanf("%d",&arr[i]);
		j++;
	}
	 last=arr[4];
	 
	for(i=4;i>0;i--)
	{
		arr[i]=arr[i-1];
	
	
    }
    arr[0]=last;
    
	printf("Array after shifting elements is:");
	
	for(i=0;i<5;i++)
	{  
	
		printf("%d ",arr[i]);
		
		
	}
	
	
		return 0;
}
