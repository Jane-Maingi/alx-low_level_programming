#include <stdio.h>

/**
 * main - the main function
 * Return:0 always
 */

int main(void)
{
printf("Size of an int: %lu bytes\n", sizeof(int));
printf("Size of a char: %lu bytes\n", sizeof(char));
printf("Size of a float: %lu bytes\n", sizeof(float));
printf("Size of a long int: %lu bytes\n", sizeof(long int));
printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
return (0);
}
