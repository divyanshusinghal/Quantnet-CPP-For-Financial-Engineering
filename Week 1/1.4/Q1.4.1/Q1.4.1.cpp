/*
* Q.1.4.1 
* Write a C-program that asks for text input from the keyboard. 
* The output of this program should be the amount of characters, 
* the amount of words and the amount of lines that have been typed. 
* Multiple consecutive spaces should not be counted as multiple words.
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
        if (a == ' ') //checks for space in the input. implies word count to be increased
        {
            count_words++;
        }
        else if (a == '\n') //checks for new line
        {
            count_lines++;
            count_words++;
        }
        else if (a != ' ' && a != '\n') //checks if the input is not a space or a new line character
        {
            count_letters++;
        }
    }
        printf("Number of characters are %d.\n", count_letters);
        printf("Number of words are %d.\n", count_words);
        printf("Number of lines are %d.\n", count_lines);
    
	return 0;
}