#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0
 */
int main ()
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			if (a % 3 == 0)
			{
				printf("Fizz");
			}
			if (a % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf ("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return(0);
}
