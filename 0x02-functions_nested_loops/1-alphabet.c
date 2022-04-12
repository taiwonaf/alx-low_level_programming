#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
    int count = 0;
    while (count < 10)
    {
        char alpha;
        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
            _putchar(alpha);
        }
        _putchar('\n');
        count++;
    }
}
