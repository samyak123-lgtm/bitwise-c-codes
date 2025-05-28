#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=0x12345678;
	int pos1,pos2;

	printf("Enter the positions that you want to swap : ");
	scanf("%d%d",&pos1,&pos2);

	printf("Before swapping :0x%x\n",x);
	printf("Pos1 :%d\nPos2:%d\n",pos1,pos2);

	int nib1= (x>>pos1*4)&0xf;
	int nib2= (x>>pos2*4)&0xf;

	x= x & ~(0xf<<pos1*4);
	x= x & ~(0xf<<pos2*4);

	x= (x | (nib1<<pos2*4)) | (x | (nib2<<pos1*4));

	printf("After swapping  :0x%x\n",x);

	return 0;

}
