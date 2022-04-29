/********************************************************************************************************
 WACP to read the age of a candidate and determine whether it elgible for casting his/her vote
********************************************************************************************************/

#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age of a candidate\n");
	scanf("%d",&age);
	if(age >= 21)
	{
		printf("Congratulation! you are eleigible for casting your vote\n");
	}
	else
	{
		printf("You are not eligible for voting\n");
	}
}
