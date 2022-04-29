#include<stdio.h>
void main()
{
        int mask,i,num;
        scanf("%d",&num);
        for(i = 31;i >= 0;i--)
        {
                mask = 1 << i;
                if(num & mask)
		{
			printf("%d\t",i);
		}
        }
        printf("\n");
}

