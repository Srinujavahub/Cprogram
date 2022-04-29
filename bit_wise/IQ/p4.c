//4. Check in a number 5th or any bit is set or not if it is set then clear the 3rd bit
#include<stdio.h>
void displayBits(int);
void manipulate_bit(int,int,int);
void main()
{
        int num,set_pos,clr_pos;
        printf("Enter any number\n");
        scanf("%d",&num);
        printf("Enter the position to set\n");
        scanf("%d",&set_pos);
        printf("Enter the position to be clear\n");
        scanf("%d",&clr_pos);
        displayBits(num);
        manipulate_bit(num,set_pos,clr_pos);
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
void manipulate_bit(int num,int set_pos,int clr_pos)
{
        if(num & (1<<set_pos))
        {
              num = num & ~(1<<clr_pos);
              displayBits(num);
        }
        else
        {
                printf("%dth bit is not set\n",set_pos);
        }
}

