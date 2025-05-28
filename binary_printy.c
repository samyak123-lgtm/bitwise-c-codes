#include<stdio.h>
#include<stdlib.h>

int main()
{
	int data,bit=31;

	printf("Enter the  data : ");
	scanf("%d",&data);

	printf("Binaray representation is :\n");

	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		bit--;
	}

	return 0;
}

