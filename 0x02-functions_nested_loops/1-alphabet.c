#include "holberton.h"
/**
 * main - main function
 * print_alphabet - prints all the alpha bets in lowercase
 * Return: return function
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar(10);
}
