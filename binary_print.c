#include<stdio.h>

void binary_print(int data)
{
	int bit=31;
	printf("Binaray representation is :\n");
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}
	printf("\n");
}

