#include <stdio.h>

int main() {
int i;
char word[150];

printf("Enter a word: ");
scanf("%s",&word);

for(i=0;i!='\n';i++)
{
	if((word[i]>='A' && word[i]<='Z')||(word[i]>='a' && word[i]<='z')){
		word[i]="";
	}
}
printf("%s",word);
return 0;
}
