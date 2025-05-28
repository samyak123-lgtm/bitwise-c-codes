#include<stdio.h>
#include<stdlib.h>
#include"binary_print.h"

int main()
{
	int data;

	printf("Enter the data : ");
	scanf("%x",&data);
	printf("%x\n",data);
	binary_print(data);

	int bit=0,rev=0;
	
	for(int i=31;i>=0;i--)
	{
		bit=(data>>i)&1;
		rev= rev | (bit<<31-i);
	}
	data=rev;

	printf("Number after reversing is %d\n",data);
	printf("%x\n",data);
	binary_print(data);

}
