//3. Check in a number 5th or any bit is set or not 
#include<stdio.h>
void displayBits(int);
void test_bit(int,int);
void main()
{
        int num,pos;
        printf("Enter any number\n");
        scanf("%d",&num);
        printf("Enter the position\n");
        scanf("%d",&pos);
        displayBits(num);
        test_bit(num,pos);
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
void test_bit(int num,int pos)
{
	int bit;
	if(num & (1<<pos))
	{
		printf("%dth bit is set\n",pos);
	}
	else
	{
		printf("%dth bit is not set\n",pos);
	}
}
                    
