#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=0x12345678;
	int pos1, pos2;
	
	printf("Enter the positions that you want to swap : ");
	scanf("%d%d",&pos1,&pos2);

	printf("Before swapping 0x%x\n",x);
	printf("Pos1 : %d\nPos2 : %d\n",pos1,pos2);
	
	int byte1= (x>>pos1*8) & 0xff;
	int byte2= (x>>pos2*8) & 0xff;

	x= x & ~(0xff<<pos1*8);
	x= x & ~(0xff<<pos2*8);
	
	x= (x | (byte1<<pos2*8)) | (x | (byte2<<pos1*8));

	printf("After swapping : 0x%x\n",x);

}
	
