#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    if (h == NULL)
        return count;

    while (h != NULL)
    {
        int num = h->n;
        int divisor = 1;

        _putchar('-');
        _putchar('>');

        while (num / divisor >= 10)
            divisor *= 10;

        while (divisor != 0)
        {
            _putchar(num / divisor + '0');
            num %= divisor;
            divisor /= 10;
        }

        _putchar('\n');
        count++;

        if (h->next != NULL)
            h = h->next;
        else
            break;
    }

    _putchar('-');
    _putchar('>');
    _putchar(' ');
    printf("%lu element%s\n", count, (count != 1) ? "s" : "");

    return count;
}

