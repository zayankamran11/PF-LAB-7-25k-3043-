#include<stdio.h>
int main()
{
  int marks[10],pass[10],fail[10],i,sump=0,sumf=0,sum=0,c1=0,c2=0;
  float avg,avgp,avgf;
  for(i=0;i<10;i++)
  {
  	printf("Enter the marks of Student %d:",i+1);
  	scanf("%d",&marks[i]);
  	sum+=marks[i];
  	
  	if(marks[i]==-1)
  	break;
  	
  	else if(marks[i]>=0 && marks[i]<=5)
  	{
  		fail[i]=marks[i];
  		c1++;
  		sumf+=fail[i];
	}
  	else if(marks[i]>=6 && marks[i]<=10)
  	{
  		pass[i]=marks[i];
  		c2++;
  		sump+=pass[i];
    }
  }
  printf("\nEntered marks:");
  for(i=0;i<10;i++)
  {
  	printf("%d ",marks[i]);
  }
  printf("\nPassed:");
  for(i=0;i<c2;i++)
  {
  	printf("%d ",pass[i]);
  }
  printf("\nFailed:");
  for(i=0;i<c1;i++)
  {
  	printf("%d ",fail[i]);
  }
	avgp=(float)sump/c2;
	avgf=(float)sumf/c1;
	avg=(float)sum/10;
	printf("\nAverage:%.2f",avg);
	printf("\nAverage pass :%.2f",avgp);
	printf("\nAverage fail:%.2f",avgf);
	    	
	return 0;
}
