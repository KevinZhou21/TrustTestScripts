#include<stdio.h>
#include<stdlib.h>

void main()
{
	printf("=== now modify the sub-program ===\n");

	FILE* pf = fopen("helloTrust14","a");

	if(pf == NULL)
	{
		printf("fopen fails\n");
		return;
	}
	
	fputc('1',pf);

	fclose(pf);
	pf = NULL;
}

