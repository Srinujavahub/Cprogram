#include<stdio.h>
#include<math.h>

void main()
{
     int x1,n;
     float x, den, cosval, cosx = 0, acc, term;

     printf("Enter the x value (in degrees)\n");
     scanf("%f",&x);

     printf("Enter the accuracy \n");
     scanf("%f",&acc);

     x1 = x;
     x = x * (3.142/180.0);
     cosval = cos(x);

     term = 1;
     cosx = term;
     n = 1;

     while(acc <= fabs(cosval - cosx))
     {
         den = 2*n*(2*n-1);
         term = -term * x * x / den;
         cosx = cosx + term;
         n = n + 1;
     }
     printf("Cos(%d) without using library function is %f\n",x1,cosx);
     printf("Cos(%d)  using library function is %f \n",x1,cos(x));


}                                                          
                                                                                                                                          
                                                                                                                                       

