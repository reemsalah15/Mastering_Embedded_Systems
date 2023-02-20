/***************************************************************************************
									Author: Reem Salah
									Date: 2 Feb. 2023
***************************************************************************************/

#include<stdio.h>
#include<string.h>

/*
 In this program, we define a structure called Sstudent
 that contains three fields: name (an array of characters)
 , roll (an integer), and marks (a floating-point number).
*/
struct Sstudent{
char name [50];
int roll_num;
float marks;
};


//We then define two functions: ReadInfo() and PrintInfo(). 

struct Sstudent ReadInfo();

void PrintInfo(struct Sstudent s);

/*
	 In the main function, we declare a variable s of type struct student,
	 call the input function to get information about a student 
	 and then call the output function to display that information by passing the s structure variable itself.
*/
int main()
{
	struct Sstudent std;
	std=ReadInfo();
	PrintInfo(std);

	return 0;
}

/*
	The ReadInfo() function prompts the user to enter information about a student, 
	and reads in that information using gets and scanf. 
*/
struct Sstudent ReadInfo()
{
	struct Sstudent s;
	printf("\nEnter information of student\n");
	printf("Enter name: ");
	gets(s.name);
	printf("Enter roll number: ");
	scanf("%d",&s.roll_num);
	printf("Enter marks: ");
	scanf("%f",&s.marks);
	
	return s;
}

/*
	The output function takes a student structure as its argument 
	and prints out the information about the student using printf.
*/
void PrintInfo(struct Sstudent s)
{
	printf("\n\nDisplaying information");
	printf("\nName: %s",s.name);
	printf("\nRoll: %d",s.roll_num);
	printf("\nMarks: %.2f",s.marks);
}