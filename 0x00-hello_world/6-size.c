#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: o
*
*/

int main(void)  
{

char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;

printf("size of a char: %d byte(s)\n", sizeof(chartype));
printf("size of an int: %d byte(s)\n", sizeof(inttype));
printf("size of a long int: %d byte(s)\n", sizeof(longinttype));
printf("size of a long long int: %d byte(s)\n", sizeof(longlonginttype));
printf("size of a float: %d byte(s)\n", sizeof(floattype));
return (0);
}
