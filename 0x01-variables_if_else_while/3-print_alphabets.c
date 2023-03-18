#include <stdio.h>

/**
 * main - write lower and uppercase alph
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
    char lower = 'a';
    char upper = 'A';
    int i;

    for (i = 0; i < 26; i++)
    {
        putchar(lower);
        lower++;
    }

    for (i = 0; i < 26; i++)
    {
        putchar(upper);
        upper++;
    }

    putchar('\n');
    return (0);
}
