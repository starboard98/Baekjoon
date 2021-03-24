#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	char str[1000000]={'\0', };
	int count=0;

	fgets(str,sizeof(str),stdin);

	for(int i=0;i<strlen(str)-1;i++)
		count+=(!isalpha(str[i])&&isalpha(str[i+1])||i==0&&isalpha(str[i]));

	printf("%d\n", count);

	return 0;
}
