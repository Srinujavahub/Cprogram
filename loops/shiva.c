#include<stdio.h>
void main()
{
	int n,i = 0,f1 = 0,f2 = 1,f3;
	printf("enter n value\n");
	scanf("%d",&n);
	while(i < n)
	{
	//	f3 = f1;
		printf("%d\t",f1);
		f3 = f1 +f2;
		f1 = f2;
		f2 = f3;
		i++;
	}
}
