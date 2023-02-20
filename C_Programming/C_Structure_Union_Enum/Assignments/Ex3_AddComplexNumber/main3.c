
/***************************************************************************************
				Author: Reem Salah
				Date: 2 Feb. 2023
***************************************************************************************/

#include<stdio.h>

/*
	In this program, we define a complex structure to represent 
	a complex number with real and imaginary parts.
	We also define separate functions for reading a complex number
	from the user (ReadComplexNumber), printing a complex number
	to the console (PrintComplexNumber), and adding two complex numbers (AddComplexNumber).
*/
struct ScomplexNumber{
	float r;
	float i;

};

struct ScomplexNumber ReadComplexNumber(int j);
struct ScomplexNumber AddComplexNumber(struct ScomplexNumber a,struct ScomplexNumber b);
void PrintComplexNumber(struct ScomplexNumber c);


int main()
{
struct ScomplexNumber A,B,C;
A=ReadComplexNumber(1);
B=ReadComplexNumber(2);
C=AddComplexNumber(A,B);
PrintComplexNumber(C);
return 0;
}


struct ScomplexNumber ReadComplexNumber(int j)
{
	struct ScomplexNumber x;
	printf("\nFor complex number %d: ",j);
	printf("\nEnter real and imaginary respectively: ");
	scanf("%f %f",&x.r,&x.i);
	return x;
}
/*
	The add function takes two complex structures as arguments 
	and returns a complex structure representing their sum
*/
struct ScomplexNumber AddComplexNumber(struct ScomplexNumber a,struct ScomplexNumber b)
{
	struct ScomplexNumber c;
	c.r= a.r + b.r;
	c.i= a.i + b.i;
	return c;

} 
void PrintComplexNumber(struct ScomplexNumber c)
{
	printf("Sum= %.1f + %.1fi\n",c.r,c.i);

}
