#include<stdio.h>

int digit_sum(int);
void main()
{
	unsigned int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("sum of all the digits %d\n",digit_sum(num));


}
int digit_sum(int n)
{
	unsigned int rem,sum=0;
    while(n>0)
    {	    
	rem = n%10;
	sum = sum + rem;
        n = n/10;
    }
     return sum;
        	
}
