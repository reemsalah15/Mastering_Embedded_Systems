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

void ReadInfo(struct Sstudent s[]);

void PrintInfo(struct Sstudent s[]);

/*
	 In the main function, we declare a array (s) of type struct Sstudent,
	 call the input function to get information about a student 
	 and then call the output function to display that information by passing the s structure variable itself.
*/
int main()
{
	struct Sstudent std[10];

	ReadInfo(std);
	PrintInfo(std);

	return 0;
}

/*
	The ReadInfo() function prompts the user to enter information about a student, 
	and reads in that information using gets and scanf. 
*/
void ReadInfo(struct Sstudent s[])
{
	printf("\nEnter information of student\n");
	for(int i=0;i<10;i++)
	{
		printf("\nFor roll number ");
		scanf("%d",&s[i].roll_num);
		printf("Enter name: ");
		scanf("%s",&s[i].name);
				
		printf("Enter marks: ");
		scanf("%f",&s[i].marks);
	
	}

}

/*
	The output function takes a student structure as its argument 
	and prints out the information about the student using printf.
*/
void PrintInfo(struct Sstudent s[])
{
	for(int i=0;i<10;i++)
	{
		printf("\n\nInformation for roll number %d",s[i].roll_num);
		printf("\nName: %s",s[i].name);
		printf("\nMarks: %.2f",s[i].marks);
	}
}
