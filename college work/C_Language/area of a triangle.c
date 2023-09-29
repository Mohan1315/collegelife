#include<stdio.h>
int main (){

	int hight, base, area;
	printf("Enter the hight of The Triangle : \n");
	scanf("%d",&hight);
	
	printf("Enter the base of The Triangle : \n");
	scanf("%d",&base);
	
	area = hight*base;
	
	printf("The area of a Triangle is : %d",area);
	
	return 0;
}
