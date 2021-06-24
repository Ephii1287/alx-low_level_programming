#include "holberton.h"

/**
* _isdigit - Shows 1 if the input is a
* digitotherwise, shows
* 0
*
* @c: Character in ASCII code
*
* Return: 1 for digit, 0 for others
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
