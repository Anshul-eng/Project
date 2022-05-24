#include <stdio.h> 
int main() {
   int radius;
   float area, perimeter;    
   printf("Enter the radius of cricle");
   scanf("%d",&radius);

   perimeter = 2*3.14*radius;
   printf("Perimeter of the Circle = %f inches\n", perimeter);
	
	area = 3.14*radius*radius;
	printf("Area of the Circle = %f square inches\n", area);

return(0);
}