/*
 *  C function to reverse order of the word in the string.
 *
 *  Created on: Feb 14, 2023
 *      Author: Reem Salah
 */


/*
 * h e l l o  \0   w o r l d
 * 0 1 2 3 4  5    6 7 8 9 10 -->11
 * for(int i=10;i>=0;i--)
 * {
 * if(a[i]=='')   a[5]=' '
 * {
 * 		a[5]=null;
 * 		printf(%s,&(a[5])+1);
 * }
 * }
 */
#include <stdio.h>
#include <string.h>

void rev_order(char str[]);

int main()
{
  	char str[100];
   	printf("Enter any String: ");
  	fflush(stdout);
  	fflush(stdin);
  	gets(str);
  	rev_order(str);
   	return 0;
}
void rev_order(char str[])
{
	int len;
	len = strlen(str);
  	printf("\nString in Reverse Order: ");
  	for(int i = len - 1; i >= 0; i--)  //10
	{

  		if(str[i] == ' ') // if there was a space
		{
			str[i] = '\0'; //the index of space will replace with null ('\0)
			printf("%s ", &str[i]+1); //print the word after null
		}
	}
	printf("%s", str);
}

