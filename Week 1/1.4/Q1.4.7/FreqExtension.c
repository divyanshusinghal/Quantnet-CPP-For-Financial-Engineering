/*
* Q1.4.7
* Extend the program of exercise 6 in such a way that the frequency of number 3 is shown in words.
* E.g.: Number three appears two times.
* Only print the frequency when it is smaller than three. 
* If the frequency is three or larger, then print: "The number three appears more than two times."
*/

#include<stdio.h>

int main()
{
	int c;
	int zero = 0; //counter for input 0
	int one = 0; //counter for input 1
	int two = 0; //counter for input 2
	int three = 0; //counter for input 3
	int four = 0; //counter for input 4
	int others = 0; //counter for any input other than 0-4

	printf("Enter input characters, program ends with EOF(^z).\n");

	while ((c = getchar()) != EOF) //Loop runs until EOF(^z) is entered
	{
		switch (c)
		{
		case'0':
			zero++;
			break;
		case'1':
			one++;
			break;
		case'2':
			two++;
			break;
		case'3':
			three++;
			break;
		case'4':
			four++;
			break;
		default:
			others++;
		}
	}

	//Prints the number of times , any number between 0-4 has been inputted
	printf("Count of 0 is: %d.\n", zero);
	printf("Count of 1 is: %d.\n", one);
	printf("Count of 2 is: %d.\n", two);
	//printf("Count of 3 is: %d.\n", three); This is now inputted as per the new condition
	printf("Count of 4 is: %d.\n", four);

	switch (three) //As per the conditions described in the problem statement.
	{
	case 0:
		printf("The numer three appears zero times.");
		break;
	case 1:
		printf("The number three appears one time.");
		break;
	case 2:
		printf("The number three appears two times.");
		break;
	default:
		printf("The number three appears more than two times");
		break;
	}
	return 0;
}