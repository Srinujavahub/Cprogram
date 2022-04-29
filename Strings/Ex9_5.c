#include<stdio.h>
void main()
{
	char country[30] = "Em ware technologies";
	

	printf("%15s\n",country);
	printf("%15.6s\n",country);
        printf("%-15.7s\n",country);
        printf("%15.1s\n",country);
        printf("%.3s\n",country);
	printf("%s\n",country);
}
