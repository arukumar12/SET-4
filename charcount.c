#include <stdio.h>

int main(void) {
	int i,count=0;
	char s[10];
	for(i=0;i<10;i++)
	scanf("%c",&s[i]);
	for(i=0;i<10;i++)
	{
		if((s[i]>='a'||s[i]<='z')||(s[i]>='A'||s[i]<='Z'))
		count++;
	}
	printf("%d",count);
	
	// your code goes here
	return 0;
}
