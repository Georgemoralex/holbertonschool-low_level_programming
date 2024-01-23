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

    // Iterate through the list to print elements
    while (h != NULL)
    {
        int num = h->n;
        int divisor = 1;

        // Print arrow before the actual element value
        _putchar('-');
        _putchar('>');

        // Print the actual element value
        while (num / divisor >= 10)
        {
            divisor *= 10;
        }

        while (divisor != 0)
        {
            _putchar(num / divisor + '0');
            num %= divisor;
            divisor /= 10;
        }

        _putchar('\n');
        count++;

        // Move to the next node
        h = h->next;
    }

    // Print the count after printing all elements
    _putchar('-');
    _putchar('>');
    _putchar(' ');
    printf("%lu element%s\n", count, (count != 1) ? "s" : "");

    return (count);
}
