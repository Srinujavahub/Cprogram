/****************************************************************************************************************************
10. Write a C program to find the eligibility of admission for a professional course based on the following criteria:   
    Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three
    subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks 
    obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 
    Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
******************************************************************************************************************************/
#include<stdio.h>

void main()
{
       int maths,phys,chem,Total,Total2;
       printf("marks obtained in Physics :\n");
       scanf("%d",&phys);
       printf("marks obtained in Chemistry :\n");
       scanf("%d",&chem);
       printf("marks obtained in Mathematics :\n");
       scanf("%d",&maths);
       
       Total = maths + phys + chem;
       Total2 = maths + phys;
       
       printf("Total marks of maths, physics and chemistry : %d\n",Total);
       printf("Total marks of maths, physics : %d\n",Total2);

       if(maths >= 65 && phys >= 55 && chem >= 50 && (Total >= 190 || Total2 >= 140))
       {
	       printf("Candidate is eligible for admission\n");
       }
       else
       {
	       printf("Candidate not eligible for admission\n");
       }
          

}
