/*a.PROGRAMMER: Ian Foale
b.COURSE : CSCI 1320.02
c.DATE : September 11, 2017
d.ASSIGNMENT : SampleProgram
e.ENVIRONMENT : Windows 10
f.FILES INCLUDED : source.c

h.INPUT : N/A
i.PRECONDITIONS : N/A

j.OUTPUT : prints one line
k.POSTCONDITIONS : N/A

l.ALGORITHM : prints one line -> waits for keypress -> exits

m.ERRORS : N/A
n.EXAMPLE: N/A
o.HISTORY : N/A
*/




#include <stdio.h>

int main(void) 
{
	int length = 10;
	int width = 5;

	int area = 0;

	printf("Please enter value for length\n");

	scanf_s("%d", &length);

	/* %d is for int
	   %f is for decimal/float */

	//length = 10;

	

	area = length * width;

	printf("The value of length and width is %d %d %d", length, width, area);

	
	getchar();
	
	return 0;
}