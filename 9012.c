#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(void)
{
	int T;

	scanf("%d", &T);

	for(int i=0;i<T;i++)
	{
		int stack=0;
		bool VPS=true;
		char *str=calloc(51,sizeof(char));

		while(getchar()!='\n');
		scanf("%s", str);

		for(int j=0;j<strlen(str);j++)
		{
			stack+=str[j]=='('?1:-1;

			if(stack<0)
			{
				VPS=false;
				break;
			}
		}

		printf("%s\n", VPS&&stack==0?"YES":"NO");
		free(str);
	}

	return 0;
}
