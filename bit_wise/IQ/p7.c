//7.find number set bits in 32 bit number or register ( number of 1s)

#include<stdio.h>
void displayBits(int);
void main()
{
        int num,mask,i, count = 0;

	printf("Enter the number\n");
        scanf("%d",&num);
        displayBits(num);
	
        for(i = 31;i >= 0;i--)
        {
                if(num & (1<<i))
		{
	         	count++;

		}

	}
	printf("number of 1's in a number %d\n",count);


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
