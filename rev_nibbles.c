#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=0x12345678,v;

	printf("Before reversing : 0x%x\n",x);

	v= ((x<<28) & 0xf0000000) | ((x<<20)  & 0xf000000) | ((x<<12) & 0xf00000) | ((x<<4) & 0xf0000) | ((x>>4) & 0xf000) | ((x>>12) & 0xf00) | ((x>>20) &0xf0) | ((x>>28) & 0xf);

	printf("After reversing  : 0x%x\n",v);

}	
