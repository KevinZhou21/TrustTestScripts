#include<stdio.h>
#include<stdlib.h>

void main()
{
	printf("=== now modify the sub-program ===\n");

	FILE* pf = fopen("helloTrust14","r");

	if(pf == NULL)
	{
		printf("fopen fails\n");
		return;
	}
	
	char arr[5] = {0};
       	fgets(arr,5,pf);


	fclose(pf);
	pf = NULL;
}

