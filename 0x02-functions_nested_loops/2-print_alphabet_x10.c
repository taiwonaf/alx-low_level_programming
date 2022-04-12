#include "main.h"

/**
 *  print_alphabet -prints 10 times the alohabet, in lowercase.
 */

void print_alphabet_x10(void)

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
