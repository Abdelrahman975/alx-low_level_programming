#include <stdio.h>
/**
 * main - prints alphabet
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	char q = 'A';

	while (c <= 'z')
{
	putchar(c);	/*print the current character*/
	c++;	/*move to the next character*/
}
	while (q <= 'Z')
{
	putchar(q);     /*print the current character*/
	q++;    /*move to the next character*/
}
	putchar('\n');	/*print a newline character at the end*/

	return (0);
}
