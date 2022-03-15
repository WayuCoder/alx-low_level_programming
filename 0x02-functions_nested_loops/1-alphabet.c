#include "holberton.h"
/**
 * main - main function
 * print_alphabet - prints all the alpha bets in lowercase
 * _putchar - prints putchar
 * Return: return function
 */
void print_alphabet(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar(10);
}
