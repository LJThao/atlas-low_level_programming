#include <stdio.h>

/** main - Prints the alphabet in lowercase
 * Return: Always 0
 */

int main(void)

{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)

	putchar(letter);
	if (letter == 'z')
		
	putchar('\n');

	return (0);
}
