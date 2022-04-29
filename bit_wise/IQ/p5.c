//5 . Swaping Mth and Nth bit in 32 bit number

#include<stdio.h>

void displayBits(int);
int swap_bit(int,int,int);

void main()
{
        int num,pos1,pos2, res;
        
	printf("Enter any number\n");
        scanf("%d",&num);

	printf("Enter the position to set\n");
        scanf("%d",&pos1);

        printf("Enter the position to be clear\n");
        scanf("%d",&pos2);


        displayBits(num);
	res = swap_bit(num, pos1, pos2);
	displayBits(res);
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
int swap_bit(int num,int pos1,int pos2)
{
        unsigned int bit1,bit2,x,res;

	bit1 = (num >> pos1) & 1;
	bit2 = (num >> pos2) & 1;

	x = bit1 ^ bit2;
        x = (x << pos1) | (x << pos2);
	res = num ^ x;
	
	
	return res;
}                                                           
