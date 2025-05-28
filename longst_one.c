#include<stdio.h>
#include<stdlib.h>
#include"binary_print.h"

int main()
{
	int data,bit=31;

	printf("Enter the data : ");
	scanf("%d",&data);
	binary_print(data);

	int max=0,count=0;

	while(bit>=0)
	{
		if((data>>bit)&1)
		{
			count++;

			if(count>max)
			{
				max=count;
			}
		}
		else
		{
			count=0;
		}
		bit--;
	}
	printf("Longest series of ones is %d\n",max);
}

