/*
* Q.1.4.3
* Do exercise 1 again, but change your solution so that the switch-case statement 
* is used instead of the if blocks.
*/


#include<stdio.h>

int main()
{
	int a; //variable to store the input
	int count_letters = 0; //counter for letters 
	int count_words = 0; // counter for words
	int count_lines = 0; //counter for lines

	printf("Enter a value: ");
	
    while ((a = getchar()) != EOF) //while loop ends when EOF is reached
    {
        switch (a) //switch evaluates the input
        {
        case ' ': //is the input equivalent of a space? if yes, a word was entered prior
            count_words++;
            break;
        case '\n': //is the input signalling creation of a new line?
            count_lines++;
            count_words++;
            break;
        default: //when it is not a space or a new line, character is incremented 
            count_letters++;
        }
    }
        printf("Number of characters are %d.\n", count_letters);
        printf("Number of words are %d.\n", count_words);
        printf("Number of lines are %d.\n", count_lines);

        return 0;
}
