#include<stdio.h>

void main()
{
          int A[30], i, j, value, pos;

	  printf("Enter the elements into an Array\n");
	  for(i = 0;i < 10;i++)
	  {
		  scanf("%d",&A[i]);
	  }

	  printf("Enter the position\n");
	  scanf("%d",&pos); 

          printf("Enter the value to be inserted\n");
          scanf("%d",&value);
	  
	  for(i=0;i<10;i++)
	  {
		  if(i == pos)
		  {
			  for(i=10;i>pos;i++)
			  {
				  A[i] = A[i-1];
			  }
		  }
	  }
	  printf("the new elemnts of an array is.........\n");
	  for(i=0;i<11;i++)
	  {
		  printf("%d",A[i]);
	  }





}

