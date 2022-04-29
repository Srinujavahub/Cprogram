#include<stdio.h>

void main()
{
       char str1[20], str2[10] , i, j;

       gets(str1);
       gets(str2);
       
  
       for(i = 0;str1[i] != '\0';i++);
      // printf("%d\n",i);      
       for(j = 0;str2[j] != '\0';j++)
       {
	       str1[j+i] = str2[j];
       }
	str1[j+i]='\0';
       
       puts(str1);
       puts(str2);


}
