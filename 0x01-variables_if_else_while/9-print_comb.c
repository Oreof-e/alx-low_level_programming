#include <stdio.h>

Gerhard, [03/06/2022 21:58]
[In reply to Sammy Tuga]
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
 int num;

 for (num = 0; num <= 9; num++)
 {
  putchar((num % 10) + '0');
  if (num == 9)
   continue;

  putchar(',');
  putchar(' ');
 }

 putchar('\n');

 return (0);
}
