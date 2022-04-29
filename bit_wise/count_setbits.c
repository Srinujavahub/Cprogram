/*
#include<stdio.h>

int count_setbits(unsigned int);

void main()
{
	unsigned int num;
	scanf("%x",&num);

       printf("Total number of setbits  : %d\n",count_setbits(num));	
}

int count_setbits(unsigned int num)
{
	int count = 0, mask,i;

	for(i = 0;i < 32;i++)
	{
		mask = 1<<i;
		if((num&mask) != 0)
		{
			count++;
		}
	}
	return count;

}*/
/*
#include<stdio.h>

void main()
{
        unsigned int num;
        scanf("%x",&num);

       printf("Total number of setbits  : %d\n",count_setbits(num));
}

int count_setbits(unsigned int num)
{
        int count = 0, mask,i;

        while(num != 0)
	{
		if((num&1) != 0)
		{
			count++;
		}
		num >>= 1;
	}

        return count;
}
*/

#include<stdio.h>

void main()
{
        unsigned int num;
        scanf("%x",&num);

        printf("Total number of setbits  : %d\n",count_setbits(num));
}

int count_setbits(unsigned int num)
{
        int count = 0, mask,i;

        while(num != 0)
        {
		count++;
		num = num&(num-1);

	}
	return count;
}
