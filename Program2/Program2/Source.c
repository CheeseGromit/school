/*a.PROGRAMMER: Ian Foale
b.COURSE : CSCI 1320.02
c.DATE : September 11, 2017
d.ASSIGNMENT : Program 2
e.ENVIRONMENT : Windows 10
f.FILES INCLUDED : source.c

h.INPUT : # for account type, # of checks
i.PRECONDITIONS : N/A

j.OUTPUT : prints total charge for a month to account
k.POSTCONDITIONS : N/A

l.ALGORITHM : asks account type -> assign charge based on type -> ask # of checks -> determine charges based on checks -> 
add charges together and print total charge

m.ERRORS : N/A
n.EXAMPLE: N/A
o.HISTORY : N/A
*/




#include <stdio.h>

int main(void)
{
	int type;
	int checknum;
	float charge = 0;

	printf("Please enter 1 for Checking Account, or 2 for Money-Market Account:\n");

	scanf_s("%d", &type);

	if (type == 1)
	{
		charge = charge + 15;
		printf("\nYou have chosen Checking Account.");
	}
	if (type == 2)
	{
		charge = charge + 10;
		printf("\nYou have chosen Money-Market Account.");
	}
	if (type != 1 && type != 2)
	{
		printf("\nYou have not chosen an account. Program will exit.");
		getchar();
		getchar();
		exit();
	}

	
	printf("\n\nBase charge is: $%.2lf", charge);

	printf("\n\nPlease enter the number of checks:\n");

	scanf_s("%d", &checknum);

	printf("\nNumber of Checks is: %d", checknum);

	if (checknum >= 0 && checknum < 20)
	{
		charge = charge + (checknum * .1);
	}

	if (checknum >= 20 && checknum < 40)
	{
		charge = charge + (checknum * .08);
	}

	if (checknum >= 40 && checknum < 60)
	{
		charge = charge + (checknum * .06);
	}

	if (checknum >= 60)
	{
		charge = charge + (checknum * .04);
	}

	if (checknum < 0)
	{
		printf("\nError, invalid number of checks. Program will exit.");
		getchar();
		getchar();
		exit();
	}

	


	if (type == 1)
	{
		printf("\nThe total charge for the Checking Account is: $%.2lf", charge);
	}
	else
	{
		printf("\nThe total charge for the Money-Market Account is $%.2lf", charge);
	}

	/* %d is for int
	%f is for decimal/float */


	getchar();
	getchar();

	return 0;
}