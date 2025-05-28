#include<stdio.h>
#include<stdlib.h>
#include "binary_print.h"
int main()
{
	int data,bit=31,pos;

	printf("Enter the data : ");
	scanf("%d",&data);
	binary_print(data);

	printf("Enter the bit position : ");
	scanf("%d",&pos);
	
	data = data ^ (1<<pos);

	printf("%d\n",data);
	binary_print(data);

}
