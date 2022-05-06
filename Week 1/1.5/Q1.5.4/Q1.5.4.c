/*
* Q 1.5.4
* Write a recursive function printnumber() which gets the number to be printed.
* This number is an integer.
*  The function should print the number digit by digit by using the putchar() function. Don’t use printf().
*/

#include<stdio.h>

void printnumber(int num)
{
	/* This function accepts integer as an arguement.
	* Prints the number digit by digit using putchar()
	*/

	if (num < 0)
	{
		putchar('-'); //Prints the negative sign
		num = -1 * num; //Makes the negative number positive
	}

	// Since, we want to print the unit digit last, we address the others digits of the number first.
	if (num / 10)
		printnumber(num / 10); //recursive function called on (number/10)

	putchar(num % 10 + '0'); // Base Case: Digits less than 10 will be outputted via statement
}

int main()
{
	int i;
	printf("Enter a integer number of your choice: ");
	scanf_s("%d", &i);

	printnumber(i); //Calling the user-defined function here.
	return 0;
}