#include "main.h"

/**
 * main- print x10 the alphabets
 * 
 */
void print_alphabet_x10(void)
{
    int alpha, alpha2;

    for (alpha = 0; alpha <= 9; alpha++)
    {
        for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
        {
            _putchar(alpha2);
        }
        _putchar('\n');
    }
    

}