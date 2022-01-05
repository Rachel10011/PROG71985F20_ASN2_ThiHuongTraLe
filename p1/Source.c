//PROG71985-F20
//Assignment 2
//Question 1
//by Thi Huong Tra Le 
//September 2020

#include <stdio.h>

int main(void)
{
	int number, number_add_ten;  

	printf("Please enter a number (enter q to quit): ");
	while (scanf_s("%d", &number) == 1) //Check if user enter a number,if not break out of the loop
	{
		printf("%d\n", number);			//print the input number before increment 
		number_add_ten = number + 10;		
		while (++number <=number_add_ten)	//increse the number by one then print it until it reaches the requirement
		{
			printf("%d\n", number);			
		}
		printf("Please enter a number (enter q to quit): "); 
		continue;	 //repeate the loop
	}
	printf("Bye\n");

	return 0;
}