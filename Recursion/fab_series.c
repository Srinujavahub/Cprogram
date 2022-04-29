/*
#include<stdio.h>
void fab(int);
void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("%d\t%d\t",0,1);
	fab(n-2);
	printf("\n");
		
}
void fab(int n)
{
     static int n1 = 0,n2 = 1,n3;
     if(n != 0)
     {
        n3 = n1 + n2;    
        n1 = n2;
	n2 = n3;
	printf("%d\t",n3);
	fab(n-1);
     }
}
*/

#include<stdio.h>
void fab(int);
void main()
{
        int n;
        printf("Enter the number\n");
        scanf("%d",&n);
        printf("%d\t%d\t",0,1);
        fab(n-2);
        printf("\n");

}
void fab(int n)
{
     static int n1 = 0,n2 = 1,n3,i;
     for(i = n;i > 0;i--)
     {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d\t",n3);
        fab(i);
     }
}




