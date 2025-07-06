#include <stdio.h>
int main()
{
    float l,b,r;
    
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f%f",&l,&b);
    printf("Given rectangle length is %f and breadth is %f\n",l,b);
    float area = l*b;
    printf("Area of rectangle is %f\n",area);
    float perimeter = 2*(l+b);
    printf("Area of rectangle: %f",area);
    printf("\nPerimeter of rectangle: %f",perimeter);
    printf("\nEnter the radius of the circle: ");
    scanf("%f",&r);
    float circumference = 2*3.14*r;
    printf("\nCircumference of circle: %f",circumference);
    printf("\n rectangle  length is %f and breadth of rectangle is %f and its area is %f and radius of circle is %f and circumference of circle is %f",l,b,area,r,circumference);
    return 0;

    
}
