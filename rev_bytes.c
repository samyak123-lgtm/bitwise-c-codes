#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=0x12345678,v;

	printf("Before reversing : 0x%x\n",x);

	v= ((x<<24) & 0xff000000) | ((x <<8) & 0xff0000) | ((x>>8) & 0xff00) | ((x>>24) & 0xff);

	printf("After reversing : 0x%x\n",v);

}
