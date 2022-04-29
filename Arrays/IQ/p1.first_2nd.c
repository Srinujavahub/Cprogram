// Write a C Program to find which number of First array is not present in the Second array First Array 1,2,3,4,5 Second Array  2,3,1,0,5

#include<stdio.h>
void main()
{
	int A[10] = {1,2,3,4,5,8,44,22,98,12};
	int B[10] = {2,3,1,0,5,67,56,98,67,13},flag;
	
	for(int i = 0;i < 10;i++)
	{
		flag = 0;
		for(int j = 0;j < 10;j++)
		{
			if(A[i] == B[j])
	                {
		              flag++;	
		 	     
	        	}
		}
		if(flag == 0)
		{
			printf("%d\n",A[i]);
		}
	}
	 
}
