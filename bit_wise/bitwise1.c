/*#include<stdio.h>

void main()
{
	unsigned int a = 0XF13A,mask;

	for(int i = 31;i >= 0;i--)
	{
                mask = 1 << i;
	        putchar((a & mask) ? '1' : '0');
	        
	        if(i%4 == 0)
		{
			putchar(' ');
		}	
		
	}
	printf("\n");
}
*/

#include<stdio.h>

void main()
{
	unsigned int n = 140,mask;
	for(int i = 31;i >= 0;i--)
        {
                mask = 1 << i;
                putchar((n & mask) ? '1' : '0');

                if(i%4 == 0)
                {
                        putchar(' ');
                }

        }
        printf("\n");

	n = n & (n-1);
	printf("%d\n",n);
	for(int i = 31;i >= 0;i--)
        {
                mask = 1 << i;
                putchar((n & mask) ? '1' : '0');

                if(i%4 == 0)
                {
                        putchar(' ');
                }

        }
        printf("\n");

}
