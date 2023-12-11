#include<stdio.h>
#include<unistd.h>

void main()
{
	int a = 1;
	int b = 2;
	int c;

	while(1)
	{	
	   a++;	
	   c = a+b;
	   printf("=== c is %d \n",c);
	   sleep(2);

	}
}

