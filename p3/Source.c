//PROG71985-F20
//Assignment 2
//Question 3
//by Thi Huong Tra Le 
//September 2020

#include <stdio.h>

int main(void)
{
	int days, weeks, extraDays;				//There is no negative day/week
	
	printf("Please enter a number of days: ");
	while (scanf_s("%ul", &days) == 1)				//Check if user enter a number
	{
		if (days > 0)
		{
			weeks = days / 7;					//there are 7 days a week  //magic number
			extraDays = days % 7;				//Check the remainder (days) //magic number, should define them on top
			printf("%d %s %s %d %s and %d %s\n",
				days,
				days > 1 ? "days" : "day",			//grammar check
				days > 1 ? "are" : "is",			//if there is more than one day/week, add 's' for 'day' or 'week'
				weeks,
				weeks > 1 ? "weeks" : "week",
				extraDays,
				extraDays > 1 ? "days" : "day");

			printf("Please enter a number of days: ");			//Repeate the loop after conversion
			continue;
		}
		else
			printf("Negative number is not acceptable!\n");
		break;
	}
	printf("Bye\n");

	return 0;
}