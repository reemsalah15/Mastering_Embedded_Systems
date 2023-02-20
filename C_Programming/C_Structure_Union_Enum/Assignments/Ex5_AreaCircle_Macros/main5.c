#include<stdio.h>

#define pi 3.14
#define area(radius) (radius*radius*pi)

 
int main()
{
	float area,radius;
	printf("Enter radius: ");
	scanf("%f",&radius);
	area=area(radius);
	printf("Area= %.2f",area);
	return 0; 
}