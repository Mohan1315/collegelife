#include <stdio.h>
void square(int a){
    printf("Area of sqaure is %d\n",a*a);
    printf("Perimeter of square is %d\n",4*a);
}
void rectangle(int l,int b){
    printf("Area of rectangle is %d\n",l*b);
    printf("Perimeter of rectangle is %d\n",2*l*b);
}
void circle(int r){
    printf("Area of circle is %.2f\n",3.14*r*r);
    printf("Perimeter of circle is %.2f\n",2*3.14*r);
}
void triangle(int base,int height,int p,int q,int s){
    printf("Area of triangle is %.2f\n",0.5*base*height);
    printf("Perimeter of triangle is %d",p+q+s);
}

int main() {
    int a,l,b,r,base,height,p,q,s;
    printf("Enter sides of square: \n");
    scanf("%d",&a);
    printf("Enter length and breath of rectangle: \n");
    scanf("%d",&l);
    scanf("%d",&b);
    printf("Enter radius of circle: \n");
    scanf("%d",&r);
    printf("Enter base and height of triangle: \n");
    scanf("%d",&base);
    scanf("%d",&height);
    printf("Enter sides of triangle: \n");
    scanf("%d",&p);
    scanf("%d",&q);
    scanf("%d",&s);
    square(a);
    rectangle(l,b);
    circle(r);
    triangle(base,height,p,q,s);
    
}
