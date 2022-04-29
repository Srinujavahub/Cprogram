#include<stdio.h>

void displayBits(int);
void manipulate_nBits(int, int, int);
void main()
{
	int num,m=7,n=4;
	scanf("%d",&num);
	displayBits(num);
	manipulate_nBits(num, m, n);
	

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
void manipulate_nBits(int num, int m,int n)
{
       int mask;
       mask = ~(~0<<n)<<m-n+1;

       printf("After setting m to n bits\n");
       num = num | mask;
       displayBits(num);

       printf("After clearing m to n bits\n");
       num = num & (~mask);
       displayBits(num);

       printf("After toggling m to n bits\n");
       num = num ^ mask;
       displayBits(num);
}
