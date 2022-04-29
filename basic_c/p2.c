#include<stdio.h>

/*
void main()
{
	int a = 5;

	printf("%d %d %d %d %d %d\n",a++,++a,a,++a,--a,a--);// 5  6  6  6  6  5
}


void main()
{
        float a = 5;

        printf("%f %f %f %f %f %f\n",a++,++a,a,++a,--a,a--);// 5  5  4  4  3  5
}
*/
/*
void main()
{
	int x=0;
	if(!x != !0)
	    printf("%d\n"x);
	printf("emware");
}
*/
/*
void main()
{
	int a = 5;
	int k;
        //a = a++;	
	printf("a = %d\n",a++);
	k = a;
	printf("k = %d\n",k);
}
*/
/*
void main()
{
	int a = 6,k;
	k = a++;
	printf("%d\n",k);
	printf("%d\n",a);
	printf("%d %d %d %d\n",a,a++,++a,a--);
}
*/

void main()
{
        int a = 4,k;
	k = ++a + a-- + a++ + a + a++;
        printf("%d %d\n",a,k);
}


