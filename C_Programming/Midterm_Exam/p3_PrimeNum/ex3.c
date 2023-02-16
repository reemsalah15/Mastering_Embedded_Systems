/*
 *  C Function to print all prime numbers between two numbers
 *
 *  Created on: Feb 13, 2023
 *      Author: Reem Salah
 *
 *
 */


/*
 * algorithm of the function:
 * Define a function with two integer inputs representing the lower(n1) and upper bounds(n2), respectively.
 * take two numbers from user (n1,n2)
 * n1 must be smaller than n2
 * so make a while loop condition between two interval
 *
 */
#include<stdio.h>
void prime(int n1,int n2);
int main()
{
	int n1,n2;
	//take number(no)from user to find square root
	printf("Enter n1: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&n1);

	printf("Enter n2: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&n2);

	prime(n1,n2);
	return 0;
}

void prime(int n1,int n2)
{
	int flag;

	while(n1<n2) //n1= 1<20
	{
		flag=0;  // clear flag 0 as normal case
		if(n1<=1)
		{
			++n1;        //if begin with 1 or < 1 --> must be increment
			continue;
		}
		for(int j=2;j<=n1/2;++j)
		{
			if(n1%j==0 )
			{
				flag=1;
				break;
			}

		}
		if(flag==0)
			printf("%d ",n1);
		//divide by itself and one only
		++n1;
	}
}



