#include<stdio.h>
#include<math.h>
//#include<stdlib.h>

void main()
{
     int x1,n;
     float x, den, sinval, sinx = 0, acc, term,
     
     printf("Enter the x value (in degrees)\n");
     scanf("%f",&x);
     
     printf("Enter the accuracy \n");
     scanf("%f",&acc);
     
     x1 = x;
     x = x*(3.142/180.0);
     sinval = sin(x);
     
     term = x;
     sinx = term;i
     n = 1;
   
     while(acc <= fabs(sinval - sinx))
     {
         den = 2*n(2*n+1);
         term = -term * x * x / den;
         sinx = sinx + term;
         n = n + 1;
     }
     printf("Sin(%d) without using library function is %f\n",x1,sinx);
     printf("Sin(%d)  using library function is %f \n",x1,sin(x));

     
   }
