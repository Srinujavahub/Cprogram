/*****************************************************************************************************
 9. Write a C program to accept a coordinate point in a XY coordinate system and 
    determine in which quadrant the coordinate point lies.   
*****************************************************************************************************/
#include<stdio.h>

void main()
{
	int x, y;
	printf("Enter x, y values\n");
	scanf("%d%d",&x,&y);

	if(x>0 && y>0)
	{
		printf("the point is lies in FIRST quadrant\n");
	}
	else if(x>0 && y<0)
        {
                printf("the point is lies in SECOND quadrant\n");
        }
	else if(x<0 && y<0)
        {
                printf("the point is lies in THIRD quadrant\n");
        }
	else if(x<0 && y>0)
        {
                printf("the point is lies in FOURTH quadrant\n");
        }



}
