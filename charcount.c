
#include <stdio.h>

int main(void) {
	int i,count=0;
	char s[100];
            gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		count++;
		if(s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^')
		count++;
		if(s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||s[i]=='+')
		count++;
		if(s[i]>='0'&&s[i]<='9')
		count++;
		}
	printf("%d",count);
	
	// your code goes here
	return 0;
}
