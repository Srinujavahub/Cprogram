/*
 Write program for given function
Void clear_bit( int address, int position);
At that address ,data is available and for that data for given position bit is to be cleared


 */


#include<stdio.h>
void clear_bit(int*, int);
void main()
{
	int a = 85, *ptr = &a,pos=4 ;
	char b = 30;
	int *p1 = &b;
	
        
	clear_bit(ptr,pos);
       


}

void clear_bit(int* address, int position)
{
	int p;
	p = (*address) & (~(1<<position));
	printf("%d",p);
}
