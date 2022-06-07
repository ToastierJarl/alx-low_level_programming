#include "main.h"
/**
 * main - Entry point
 * Description: prints '_putchar \n'
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	char str[] = "_putchar\n";

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
