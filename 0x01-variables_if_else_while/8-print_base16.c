#include <stdio.h>
/**
 * main - main block
 * Description: prints hexadecimal
 * starting from 48 t0 57, followed 97 to 102.
 * Return: 0
 */
int main(void)
{
char b_16;
for (b_16 = 48; b_16 <= 57; b_16++)
{
putchar(b_16);
}
for (b_16 = 97 ; b_16 <= 102; b_16++)
{
putchar(b_16);
}
putchar ('\n');
return (0);
}
