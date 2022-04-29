/**********************************************************************************
 WACP TO FIND A DENOMINATION FOR A GIVEN AMOUNT
 *********************************************************************************/

#include<stdio.h>

void main()
{
	int Amount, Total, Den_2000, Den_500, Den_200, Den_100, Den_50, Den_20, Den_10, Den_5, Den_2, Den_1;

	printf("Enter the Amount\n");
	scanf("%d",&Amount);
	
	Total = Amount;

	Den_2000 = Amount / 2000;
	Amount   = Amount % 2000;
	Den_500  = Amount / 500;
        Amount   = Amount % 500;
	Den_200  = Amount / 200;
        Amount   = Amount % 200;
	Den_100  = Amount / 100;
        Amount   = Amount % 100;
	Den_50   = Amount / 50;
        Amount   = Amount % 50;
	Den_20   = Amount / 20;
        Amount   = Amount % 20;
	Den_10   = Amount / 10;
        Amount   = Amount % 10;
	Den_5    = Amount / 5;
        Amount   = Amount % 5;
	Den_2    = Amount / 2;
        Amount   = Amount % 2;
	Den_1    = Amount / 1;
        Amount   = Amount % 1;

	printf("Denominations For %d \n",Total);
	printf("| 2000 * %d     | %d          |\n",Den_2000,Den_2000 * 2000);
	printf("| 500  * %d     | %d          |\n",Den_500,Den_500   * 500);
	printf("| 200  * %d     | %d          |\n",Den_200,Den_200   * 200);
	printf("| 100  * %d     | %d          |\n",Den_100,Den_100   * 100);
        printf("| 50   * %d     | %d          |\n",Den_50,Den_50     * 50);
        printf("| 20   * %d     | %d          |\n",Den_20,Den_20     * 20);
	printf("| 10   * %d     | %d          |\n",Den_10,Den_10     * 10);
        printf("| 5    * %d     | %d          |\n",Den_5,Den_5       * 5);
        printf("| 2    * %d     | %d          |\n",Den_2,Den_2       * 2);
        printf("| 1    * %d     | %d          |\n",Den_1,Den_1       * 1);
	printf("|--------------|---------------|\n");
	printf("| Total Amount | %d\n", Total);

}
