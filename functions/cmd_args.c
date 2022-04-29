 #include <stdio.h>  
void main(int argc, char *argv[] ) 
{  
      
       printf("Program name is: %s\n", argv[0]);  
       printf("Program name is: %s\n", argv[1]);
       printf("Program name is: %s\n", argv[2]);	
       if(argc < 2)
       {  
          printf("No argument passed through command line.\n");  
       }  
       else
       {  
          printf("First argument is: %s\n", argv[1]);  
       }
       printf("No of arguments %d\n",argc);  
}  

