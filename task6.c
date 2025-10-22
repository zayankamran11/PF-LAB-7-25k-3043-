#include<stdio.h>
int main()
{
  char word[100];
  int i,vowels=0,consonants=0;
  printf("Enter the number:");
  scanf("%s",word);
  for(i=0;i!='\n';i++)
  {
  	char ch=word[i];
  	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
  	{
  		vowels++;
	  }
	  else if((ch>='a'&&ch<='z')||(ch>='65' && ch<='91'))
	  {
	  	consonants++;
	  }
	  
  }
	
printf("Numbers of vowels:%d\n",vowels);
printf("Number of consonants:%d",consonants);

return 0;
}
