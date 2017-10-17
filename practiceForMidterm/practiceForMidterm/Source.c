/*a.PROGRAMMER: Ian Foale
b.COURSE : CSCI 1320.02
c.DATE : October 16, 2017
d.ASSIGNMENT : practice for midterm
e.ENVIRONMENT : Windows 10
f.FILES INCLUDED : source.c

h.INPUT : 
i.PRECONDITIONS : N/A

j.OUTPUT :
k.POSTCONDITIONS : N/A

l.ALGORITHM : 

m.ERRORS : N/A
n.EXAMPLE: N/A
o.HISTORY : N/A
*/




//program will use loop to print hello 7 times and call a function that prints "function called"
/* 
	count = 0
	for count < 7
		print hello
		count++

	function()
	*/


#include <stdio.h>

void function();
void num(int *x);

int a;

int main(void)
{
	int count;
	
	for (count = 0; count != 7; count++) {
		printf("hello\ncount is: %d\n\n", count);
	}

	function();

	printf("\n\na equals %d", a);

	num(&a);

	printf("\na now equals %d", a);


	int numba;

	printf("\nPlease insert a number between 1 and 4: ");
	scanf_s("%d", &numba);

	printf("\nNumba is : %d", numba);
	
	switch (numba) {
	case 1: printf("\noh boi");
			break;
	case 2: printf("\noh boi oh boi");
			break;
	case 3: printf("\noh boi oh boi oh boi");
			break;
	case 4: printf("\noh boi oh boi oh boi oh boi");
			break;
	default: printf("\nthat's the wrong one");
	}





	getchar();
	getchar();
	return 0;
}



void function() {
	printf("function was called");
	return 0;
}


void num(int *x) {
	*x = *x + 3;
	return x;
}
