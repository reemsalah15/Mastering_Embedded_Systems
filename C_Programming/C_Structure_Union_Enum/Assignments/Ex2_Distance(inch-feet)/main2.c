
/***************************************************************************************
				Author: Reem Salah
				Date: 2 Feb. 2023
***************************************************************************************/


#include<stdio.h>

/*
 	In this program, we define a structure called Sfeet_inch
	 that contains two members: feet (an integer), and inch (a floating-point number).
*/
struct Sfeet_inch{
int feet;
float inch;
};


//We then define three functions: Read() ,Add() and Print(). 

struct Sfeet_inch Read(int i);
struct Sfeet_inch Add(struct Sfeet_inch x,struct Sfeet_inch y);
void Print(struct Sfeet_inch f);

/*
	 In the main function, we declare three variables d1, d2, and sum of type Sfeet_inch.
	 We call the Read function twice to get two distances from the user,
	 call the Add function to add them together,
	 and then call the Print function to display the original distances and their sum.
*/
int main()
{
	struct Sfeet_inch d1,d2,f;
	d1= Read(1);
	d2= Read(2);
 	f= Add(d1,d2);
 	Print(f);
	return 0;
}

/*
	 prompts the user to enter a distance in feet and inches,
	 and reads in that information using scanf.

*/
struct Sfeet_inch Read(int i)
{
	
	struct Sfeet_inch f;
	printf("\nEnter information for distance %d\n",i);
	printf("Enter feet: ");
	scanf("%d",&f.feet);
	printf("Enter inch: ");
	scanf("%f",&f.inch);
	return f;
}

/*
	Note that in the add function, 
	we check if the sum of inches is greater than or equal to 12,
	and if so, we carry the excess over to the feet field
	and adjust the inches field accordingly.

*/
struct Sfeet_inch Add(struct Sfeet_inch x,struct Sfeet_inch y)
{
	struct Sfeet_inch f;
	f.feet = x.feet + y.feet;
	f.inch = x.inch + y.inch;
	while(f.inch>=12)
	{
		f.inch -= 12;
		f.feet++;
	}
	return f;
}
/*
	The output function takes a distance structure as its argument
	and prints out the distance in feet and inches using printf
*/
void Print(struct Sfeet_inch f)
{
	printf("\nSum of distances= %d'-%.1f\n",f.feet,f.inch);
}
