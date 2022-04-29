//81. Write a C program to find sum of all prime numbers between 1 to n.

#include<stdio.h>

void main()
{
        int i, j,num, count = 0, sum = 0;

        printf("Enter the range\n");
        scanf("%d",&num);

        for(i = 1;i <= num;i++)

        {
                count = 0;
                for(j = 1;j <= i;j++)
                {
                        if(i%j == 0)
                        {
                                count++;
                        }

                }
                if(count == 2)
                {
			printf("%d\t",i);
			sum = sum + i;
                        
                }
        }
	printf("\nSum of all prime numbers between 0 and %d is %d\n",num,sum);
        

}


