// 82. Write a C program to enter any number and print its prime factors.


#include<stdio.h>

void main()
{
        int i, j,num, count = 0;

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
                }
        }
       }
                if(num%i == 0)
		{
                printf("prime factors are %d\t",i);
		}
        }
        
	
	
}
