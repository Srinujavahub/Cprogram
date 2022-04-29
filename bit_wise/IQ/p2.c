//2. Practice call by reference and call by value programs like swaping numbers 
#include<stdio.h>
void displayBits(int);
void swap(int*, int*);
void main()
{
        int num1, num2,*ptr1,*ptr2;
        printf("Enter any num1\n");
        scanf("%d",&num1);
	printf("Enter any num2\n");
        scanf("%d",&num2);
	printf("num1 and num2 values before function calling are %d %d\n",num1,num2);
        ptr1 = &num1;
	ptr2 = &num2;
        swap(ptr1, ptr2);
	printf("num1 and num2 values after function calling are %d %d\n",num1,num2);
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
void swap(int* ptr1,int* ptr2)
{
        *ptr1 = *ptr1 ^ *ptr2;
	*ptr2 = *ptr1 ^ *ptr2;
        *ptr1 = *ptr1 ^ *ptr2;
}
    

