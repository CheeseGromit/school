/*a.PROGRAMMER: Ian Foale
b.COURSE : CSCI 1320.02
c.DATE : September 11, 2017
d.ASSIGNMENT : SampleProgram
e.ENVIRONMENT : Windows 10
f.FILES INCLUDED : source.c

h.INPUT : N/A
i.PRECONDITIONS : N/A

j.OUTPUT : Prints one line
k.POSTCONDITIONS : Prints line, waits for keypress before exit

l.ALGORITHM : Prints one line -> waits for keypress -> exit

m.ERRORS : N/A
n.EXAMPLE: N/A
o.HISTORY : N/A
*/



#include <stdio.h>

int main(void) {
	printf("Hallo");
	getchar();
	return 0;
}