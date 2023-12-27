#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word


/*Exercise 1-13 */

int main()
{
	int c, state, blanks;
	c, blanks = 0;

	state = OUT;
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			state = OUT;
			++blanks;
		}
		else if (state == OUT)
		{
			state = IN;
			blanks = 0;
		}
		if (state == IN && blanks <= 1)
		{
			putchar(c);
		}		
		if (c == ' ' && blanks <= 1)
		{
			putchar(' ');
		}
	}
}