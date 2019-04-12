#include <stdio.h>
int main()
{
	int K;
	char LastChar, code[100];

	while(scanf("%s",code)!=EOF)
	{
		char *ptr = code;
		while(*ptr!='\0')
		{
			LastChar = *ptr;
			ptr++;
		}
		K = LastChar - 46;
		for(int i = 0; i<sizeof code; i++)
		{
			if(code[i]=='\0')
				break;
			printf("%c",code[i]-K);
		}
		printf("\n");
	}
	return 0;
}
