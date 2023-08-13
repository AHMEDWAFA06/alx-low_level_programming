#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return> Always 0  (success)
*/

int main(void)
{
             char ah = 'a';

	     while (ah <= 'z')
	     {
		     putchar(ah);
		     ah++;
	     }
	     putchar('\n');
             return (0);
}    
