#include<stdio.h>

int main(){
    int a,b,c,x,y,z;
    printf("Enter the First integer : ");
    scanf("%d",&a);
    printf("Enter the Second integer : ");
    scanf("%d",&b);
    printf("Enter the Third integer : ");
    scanf("%d",&c);
    
    x = a%10;
    y = b%10;
    z = c%10;

    if ((x==y)|| (y==z)||(x==z))
    {
        printf("true");
    }
    else{
        printf("false");
    }
    
}