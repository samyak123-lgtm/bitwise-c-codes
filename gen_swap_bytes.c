#include<stdio.h>
#include<stdlib.h>

int main()
{
        int x=0x12345678;

        int pos1,pos2;

        printf("enter the byte positions that you want to swap  :");
        scanf("%d %d",&pos1,&pos2);

        int byte1= (x>>pos1*8) & 0xff;
        int byte2= (x>>pos2*8) & 0xff;

        x = x & ~(0xff << 8*pos1);
        x = x & ~(0xff << 8*pos2);

        x = (x | (byte1<< 8*pos2)) | (x | (byte2 << 8*pos1));

        printf("0x%x\n",x);

}
