#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int i;

for (i = 97; i < 123; i++)
{
if (i != 101 && i != 123)
{
putchar(i);
}
}
putchar('\n');
        return (0);
}
