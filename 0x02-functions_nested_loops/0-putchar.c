#include "main.h"

/**
 * main - This program prints _putchar
 * 
 * Return: alwyas return 0 
 * 
 */
int main(void)
{
    char ch[] = "_putchar;";
    int i;

    for (i = 0; ch[1] != '\0'; i++)
    {
        _putchar(ch[i]);        
    }
    _putchar('\n');
    return(0);
}