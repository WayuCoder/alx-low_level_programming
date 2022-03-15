#include<unistd.h>
#include<holberton.h>
/**
 * main - main function goes here
 * Return - return function
 */
void _putchar(void);
int main(void)
{
char putchr[] = "__putchar";
int i = 0;
for (i = 0; i < strlen(putchr); i++)
{
_putchar(putchr[i]);
}
_putchar('\n');
return (0);
}
