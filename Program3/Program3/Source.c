/*a.PROGRAMMER: Ian Foale
b.COURSE : CSCI 1320.02
c.DATE : October 16, 2017
d.ASSIGNMENT : Program 3
e.ENVIRONMENT : Windows 10
f.FILES INCLUDED : source.c

h.INPUT : N/A
i.PRECONDITIONS : N/A

j.OUTPUT : prints pattern using loop, then writes pattern to file, then prints pattern read from file except for the even values
k.POSTCONDITIONS : N/A

l.ALGORITHM : prints pattern -> writes pattern to file -> reads pattern from file except for even values

m.ERRORS : N/A
n.EXAMPLE: N/A
o.HISTORY : N/A
*/




#include <stdio.h>

//function declarations:

void pattern();
void write();
void read();



int main(void)
{
	pattern();



	getchar();

	return 0;
}


void pattern() {

	int count;
	int num;
	for (count = 10; count > 0; count--) 
	{
		for (num = 1; num < count; num++)
		{
			printf("%d ", num);
			
		}
		printf("\n\n");
	}
	
	return 0;
}


