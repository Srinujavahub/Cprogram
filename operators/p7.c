/***************************************************************************************************************
 7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height.   
****************************************************************************************************************/

#include<stdio.h>

void main()
{
	int height;
	printf("Enter the height\n");
	scanf("%d",&height);
	
	if(height <= 135)
	{
		printf("person is Dwarf\n");
	}
	else if(height > 135 && height < 160)
        {
                printf("person is medium height\n");
        }
	else if(height >= 160)
        {
                printf("person is tall\n");
        }



}
