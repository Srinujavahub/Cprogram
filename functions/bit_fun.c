/*
   #include<stdio.h>

void main()
{
        int arr[16], i, j, num;

        printf("Enter the decimal number\n");
        scanf("%d",&num);

        for(i = 0; num != 0;i++)
        {
                arr[i] = num % 2;
                num = num/2;
        }

        printf("Binary number is\n");
        for(j = i-1;j >= 0;j--)
        {
                printf("%d",arr[j]);
        }
}
 
*/

#include<stdio.h>

void main()
{
      int arr[16], i, j, num;

        printf("Enter the decimal number\n");
        scanf("%d",&num);

        for(i = 0; num != 0;i++)
        {
                arr[i] = num % 2;
                num = num/2;
        }

        printf("Binary number is\n");
        for(j = 8;j >= 4;j--)
        {
                printf("value at bit %d is %d\n",j,arr[j]);
        }

}
/*
#include<stdio.h>
int bit_extract(int, int, int);
void main()
{
	int num, pos_start, pos_end, k;
	num = 155;
	pos_start = 4,pos_end = 8;
        
	k = bit_extract(num,pos_start,pos_end);

	printf("%d\n",k);
}

int bit_extract(int num,int a,int b)
{
      
      return ((0x01<<b)-1)&(num>>(a-1));

}*/
