#include <stdio.h>

int main() {

char word[100];
int i;

printf("Enter the word:");
scanf("%s",word);

for(i=0;i!='\n';i++)
{
	if(word[i]>='A' && word[i]<='Z')
	{
		word[i]=word[i]+'32';
	}
	else if(word[i]>='a' && word[i]<='z')
	{
		word[i]=word[i]-'32';
	}
}
printf("%s",word);
}
