#include<stdio.h>

int main()
{
	int x=0x12299854,v;

	printf("%x\n",x);
	/*	
	v =x<<24 & 0xff000000;
	v =x<<8  & 0xff0000;
	v =x>>8  & 0xff00;
	v =x>>24 & 0xff;
	*/

	v=((x<<24)&0xff000000) | ((x<<8) & 0xff0000) | ((x>>8) & 0xff00) | ((x>>24) & 0xff);
	printf("%x\n",v);
}

