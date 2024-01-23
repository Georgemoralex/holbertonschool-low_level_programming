#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0; 

    if (h == NULL)
        return (count);


    _putchar('-');
    _putchar('>');

    while (h->prev != NULL)
        h = h->prev;


    while (h != NULL)
    {
        int num = h->n;
        int divisor = 1;


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
        {
            _putchar('-');
            _putchar('>');
        }

        h = h->next;
    }


    _putchar('-');
    _putchar('>');
    _putchar(' ');

    return (count);
}