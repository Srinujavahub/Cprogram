/*
//1.Set a bit and clear bit by using call by reference...
// Set a bit by using call by reference
#include<stdio.h>
void displayBits(int);
void set_bit(int*,int);

void main()
{
	int num,pos,*ptr;
	printf("Enter any number\n");
	scanf("%d",&num);

	printf("Enter the position\n");
	scanf("%d",&pos);

	ptr = &num;

	displayBits(num);

        set_bit(ptr,pos);

	displayBits(num);




}

void displayBits(int num)
{
        int mask,i;

        for(i = 31;i >= 0;i--)
        {
                mask = 1 << i;
                putchar((num&mask) ? '1' : '0');
                if(i%4 == 0)
                {
                        printf(" ");
                }
        }
        printf("\n");
}

void set_bit(int* ptr,int pos)
{
	*ptr = *ptr | 1<<pos;
}
*/
//Clear a bit by using call by reference

#include<stdio.h>

void displayBits(int);
void clear_bit(int*,int);

void main()
{
        int num,pos,*ptr;
        printf("Enter any number\n");
        scanf("%d",&num);

        printf("Enter the position\n");
        scanf("%d",&pos);

        ptr = &num;

        displayBits(num);

        clear_bit(ptr,pos);

        displayBits(num);




}

void displayBits(int num)
{
        int mask,i;

        for(i = 31;i >= 0;i--)
        {
                mask = 1 << i;
                putchar((num&mask) ? '1' : '0');
                if(i%4 == 0)
                {
                        printf(" ");
                }
        }
        printf("\n");
}

void clear_bit(int* ptr,int pos)
{
        *ptr = *ptr & ~(1<<pos);
}
