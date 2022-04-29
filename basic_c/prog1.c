#include<stdio.h>

void main()
{ 
	printf("%d\n",2,3,4,2,5);//will give warning and prints only first integer
	printf("%d %d %d %d %d %d %d %d %d %d\n",2,3,3,4);//will give warnings like "format ‘%d’ expects a matching ‘int’ argument"
                                                          //for extra format specifiers it will prints unknown values like 0 or garbage value	
}

