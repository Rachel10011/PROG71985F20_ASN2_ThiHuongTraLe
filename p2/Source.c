//PROG71985-F20
//Assignment 2
//Question 2
//by Thi Huong Tra Le 
//September 2020

#include <stdio.h>

int main(void)
{
	int lowerLimit, upperLimit;			
	
	printf("Please enter the lower limit number (enter q to quit): ");
	while (scanf_s("%d", &lowerLimit) == 1)		//continue if the first user's input is a numer, otherwise break the loop
	{
		printf("Please enter the upper limit number (enter q to quit): "); //continue if the second user's input is a numer, otherwise break the loop
		if (scanf_s("%d", &upperLimit) == 1)
		{
			if (lowerLimit < upperLimit)	//check if the lowerLimit is smaller than the upperLimit, if not then let user input again 
			{
				for (int row = lowerLimit; row <= upperLimit; row++) //the maximum number of row is the range between lower and upper limit
				{

					printf("|->|%d|--|", row);		//print the interger
					printf("%d|--|", row * row);	//print the square
					printf("%d|<-|", row * row * row);		//print the cube
					printf("\n");
				}
			}
			else
			{
				printf("Upper limit needs to be larger than the lower limt!\n");
			}
		}
		else
			break;
		printf("Please enter the lower limit number (enter q to quit): "); //Repeat the loop
		continue;
	}
	printf("Bye\n");

	return 0;
}