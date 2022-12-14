#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win_nums()
{
	static int i;
	int win[] = {9, 8, 10, 24, 75, 9};

	return (win[i++ % 6]);
}
