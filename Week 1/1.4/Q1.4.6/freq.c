/* 
* Q1.4.6
* Create a C-program that counts how many times each of the numbers 0-4 have been typed. 
* Use a switch-case construction. Use default to count the number of other characters. 
* The input will be halted with ^Z (EOF). EOF means End-of-File and is defined in <stdio.h>. 
* Thus, the constant EOF can be used in a condition (test if EOF has been typed).
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
	
	while(( c = getchar()) != EOF) //Loop runs until EOF(^z) is entered
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
	printf("Count of 3 is: %d.\n", three);
	printf("Count of 4 is: %d.\n", four);

	return 0;
}