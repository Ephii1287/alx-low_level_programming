#include "holberton.h"

/**
 * _islower - Checks if the character is lowercase
 * prints 1 if lowercase or 0 if not
 * Return: 0 always
 */

int _islower(int c)
{
  if (c >= 97 && c <= 122)

    {
      return (1);
    }
  else
    {
      return (0);
    }
  _putchar('\n');
}
