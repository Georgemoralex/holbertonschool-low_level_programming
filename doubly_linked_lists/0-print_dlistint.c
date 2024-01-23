#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;  // Use size_t for count

    if (h == NULL)
        return (count);

    // Print arrow and count before the actual elements
    _putchar('-');
    _putchar('>');
    _putchar(' ');
    while (h->prev != NULL)
        h = h->prev;

    // Iterate through the list to print elements
    while (h != NULL)
    {
        int num = h->n;
        int divisor = 1;

        // Print arrow before each element
        _putchar('-');
        _putchar('>');

        // Print the actual element value
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
        h = h->next;
    }

    // Print the count after printing all elements
    _putchar('-');
    _putchar('>');
    _putchar(' ');

    return (count);
}