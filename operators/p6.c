/**********************************************************************************************************
6. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0,
   0 when m is 0 and -1 when m is less than 0.   
Test Data : -5

************************************************************************************************************/

#include<stdio.h>
void main()
{
     int m,n;
     printf("Enter any value\n");
     scanf("%d",&m);
     
     if(m>0)
     {
	   printf("%d\n",1); 
     }
     else if(m<0)
     {
	     printf("%d\n",-1);
     }
     else
     {
	     printf("%d\n",0);
     }
     

   
}

