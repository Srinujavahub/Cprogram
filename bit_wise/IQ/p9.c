//9.find number even no position of 1s in 32 bit number or register
#include<stdio.h>
void displayBits(int);
void main()
{
	int num,even_count = 0,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	displayBits(num);
	for(i = 0;i < 31;i++)
	{
		if(i%2 == 0 && (num&(1<<i)))
		{
			even_count++;
		}
		
	}
        printf("%d\n",even_count);
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
