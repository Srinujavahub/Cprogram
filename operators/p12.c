/********************************************************************************************************************************
12. Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.   
    Test Data :
    Input the Roll Number of the student :784
    Input the Name of the Student :James
    Input the marks of Physics, Chemistry and Computer Application : 70 80 90
    Expected Output :
    Roll No : 784
    Name of Student : James
    Marks in Physics : 70
    Marks in Chemistry : 80
    Marks in Computer Application : 90
    Total Marks = 240
    Percentage = 80.00
    Division = First
*********************************************************************************************************************************/

#include<stdio.h>

void main()
{
	int roll_no,physics,chemistry,CApp,total,Division;
	float percentage;
	char  name[10];
	
	printf("Name of the student : ");
        scanf("%s",name);
	printf("\nEnter roll no :");
	scanf("%d",&roll_no);
	printf("\nMarks in physics  :");
        scanf("%d",&physics);
	printf("\nMarks in chemistry :");
        scanf("%d",&chemistry);
        printf("\nMarks in computer application  :");
        scanf("%d",&CApp);

        total = (physics + chemistry + CApp);
	percentage = ((total)/300.0)*100;

	printf("Roll No : %d",roll_no);
	printf("\nName of the Student : %s",name);
	printf("\nMarks in physics : %d",physics);
        printf("\nMarks in chemistry : %d",chemistry);
        printf("\nMarks in physics : %d",CApp);
	printf("\nTotal Marks : %d",total);
	printf("\npercentage : %f",percentage);
        
	if(total>=70)
	{
		printf("\nDivision : Distinction\n");
	}
	if(total >= 60 && total < 70)
        {
                printf("\nDivision : First\n");
        }
	if(total >= 35 && total < 60)
        {
                printf("\nDivision :PASS\n");
        }
	if(total < 35)
        {
                printf("\nDivision : FAIL\n");
        }






	
}

 
 
