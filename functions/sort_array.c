#include<stdio.h>
void sort(int,int []);
void main()
{
	int n,i;
	int m[] = {78,56,40,90,66};
	printf("elements in the array before sort function call\n");
	for(i = 0;i < 5;i++)
	{
		printf("%d\t",m[i]);
	}
	printf("\n");
        sort(5, m);
	printf("elements in the array After sort function call\n");
        for(i = 0;i < 5;i++)
        {
                printf("%d\t",m[i]);
        }
	printf("\n");
}
void sort(int n, int x[])
{
      int i,j,temp;
      for(i = 1;i < n-1;i++)
      {
	      for(j = 1;j < n-i;j++)
	      {
		      if(x[j-1] >= x[j])
		      {
			      temp = x[j-1];
                              x[j-1] = x[j];
                              x[j] = temp;			      
		      }
	      }
      }
}
