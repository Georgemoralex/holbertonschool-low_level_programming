#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    if (h == NULL)
        return (count);

    // Print the arrow before the first element
    printf("-> %d\n", h->n);
    count++;

    // Move to the next node
    h = h->next;

    // Print the rest of the elements
    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return (count);
}
