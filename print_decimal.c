#include "main.h"
/**
 * print_decimal - function that calculate decimal
 * @value: argument to be evaluated
 * Return: return count
 */
int print_decimal(int value)
{
int count = 0;
/* print '-' for negative numbers*/
if (value < 0)
{
count += _putchar('-');
value = value * -1;
}
if (value / 10)
count += print_decimal(value / 10);
count += _putchar(value % 10 + '0');
return (count);
}
