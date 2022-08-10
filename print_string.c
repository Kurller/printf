#include "main.h"
/**
 * print_string - function that print string
 * @string: argument passed
 * Return: return count
 */
int print_string(char *string)
{
int count = 0;
for (int i = 0; string[i] != '\0'; i++)
{
count += _putchar(string[i]);
}
return (count);
}
