#include <stdio.h>

int main(){
	
	int num1,num2,total;
	char opt;
	printf("calculator");
	
	printf("Enter the First Number : ");
	scanf("%d",&num1);
	printf("Enter the Second Number : ");
	scanf("%d",&num2);
	printf("Enter the operator : ");
	gets(opt);
	
	switch(opt){
	  case '+':
			printf("%d",num1+num2);
			break;
	  default:
			printf("invalid");
			
	}
	
}
