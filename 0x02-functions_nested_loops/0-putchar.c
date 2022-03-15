#include<unistd.h>
#include "holberton.h"
/**
 * main - main function goes here
 * Return: return function
 * @putchr: nothing
 */
int _putchar(int putchr);
int main(void)
{
char putchr[] = "_putchar";
int i = 0;
for (i = 0; i < 9; i++)
{
_putchar(putchr[i]);
}
_putchar('\n');
return (0);
}
