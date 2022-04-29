#include<stdio.h>
void main()
{
       int a = 0XFFFFFFFF;

       a = a&(~0x124);
       printf("%x",a);
}
