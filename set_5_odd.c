#include<stdio.h>
#include<stdlib.h>
#include"binary_print.h"
int main()
{
	int data;

	printf("Enter the data : ");
	scanf("%d",&data);
	binary_print(data);

	for(int i=1;i<=9;i+=2)
	{
		data = data |(1<<i);
	}
	printf("%d\n",data);
	binary_print(data);
}
