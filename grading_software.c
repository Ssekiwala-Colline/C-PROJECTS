#include <stdio.h>

/**
*main - Acquires the user information on the command prompt
*And prints the user information including the average and total
*
*Return: Always zero
*/

int main()
{
	/*The user information to be stored*/
	char name[50];
	int day, month, year;
	char gender;
	char stream;
	int term;

	/*Th information to be manipulated mathematically*/
	int reading, spelling, singing, storytelling;
	int total;
  	float average, strength;

        /*Get the pupil's information*/
	printf("Enter the name of the pupil:\n\n");
	scanf(" %s",name);

	printf("\n\nDate of Birth of the pupil(dd/mm/yy):\n\n");
	scanf(" %d/%d/%d", &day, &month, &year);

	printf("\n\nWhat is the gender(F or M)\n\n");
	scanf(" %c", &gender);

	printf("\n\nEnter the name of the stream (A, B or C)\n\n");
	scanf(" %c", &stream);

	printf("\n\nEnter the current school term (1, 2 0r 3)\n\n");
	scanf(" %d", &term);

	/*Print the results input by the user*/

	printf("\n\nThe pupil is %s born on %d/%d/%d with gender %c in stream %c studying in term %d\n\n", name, day, month, year, gender, stream, term);

	printf("\n\nWhat are the marks in reading:\n\n");
	scanf(" %d", &reading);

	printf("\n\nWhat are the marks in spelling:\n\n");
	scanf(" %d", &spelling);

	printf("\n\nWhat are the marks in singing:\n\n");
	scanf(" %d", &singing);

	printf("\n\nWhat are the marks in storytelling:\n\n");
	scanf(" %d", &storytelling);

	/*Calculate the total = sum of all of the marks*/
	total = reading + spelling + singing + storytelling;
	printf("\n\n%s\'s total mark in all the subjects is as follows:\n", name);
        printf("\n\n%d + %d + %d + %d = %d", reading, spelling, singing, storytelling, total);

	/*Calculate the average*/
	average = total/4.0;
	printf("\n\nThe average of the marks is %.1f\n", average);


	/*Calculate the class strength of the student*/
	strength = (average/15.0) + 5;
	printf("\n\nThe class strength of %s is %.1f\n", name, strength);


	return (0);

}
