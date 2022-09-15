#include "main.h"
/**
 * print_triangle - prints a triangle
 * 
 * @size: the sixe of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--);
			{
				_putchar(' ');
			}
			for (k = 0; k < 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}