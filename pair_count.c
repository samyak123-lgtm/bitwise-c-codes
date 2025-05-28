#include<stdio.h>
#include<stdlib.h>
#include "binary_print.h"

int main()
{
	int data,bit=31;

	printf("Enter the data : ");
	scanf("%d",&data);
	binary_print(data);
	int count =0;
	
	while(bit >=0)
	{
		if((data>>bit)&1 && (data>>bit-1)&1)
		{
			count++;
			bit--;
		}
		bit--;
	}

	printf("set pair count :%d\n",count);
}

