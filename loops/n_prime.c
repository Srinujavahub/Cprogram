#include<stdio.h>

void main()
{
        int num, count = 0,flag = 0, i, j;

        printf("Enter the number\n");
        scanf("%d",&num);
	printf("Prime numbers are\n");
        for(i = 2;count < num;i++)
        {
                flag = 0;
                for(j = 1;j <= i/2;j++)
                {
                        if(i%j == 0)
                        {
                                flag++;

                        }
                }
                if(flag == 1)
                {
                        printf("%d ",i);
			count++;
                }
        }
        
}                                                                                                                                  
                     
