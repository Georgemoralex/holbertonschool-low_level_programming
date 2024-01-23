#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the doubly linked list
 * @idx: index of the list where the new node should be added (starting at 0)
 * @n: value of the element
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *current;
    unsigned int i;

    if (h == NULL)
        return (NULL);

    current = *h;

    /* Check if idx is 0, insert at the beginning */
    if (idx == 0)
        return add_dnodeint(h, n);

    /* Traverse the list to the position before the desired index */
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    /* Check if current is NULL (reached the end) or next is NULL (index out of bounds) */
    if (current == NULL)
        return (NULL);

    /* Create a new node */
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    /* Set the value and links of the new node */
    new->n = n;
    new->prev = current;

    /* Update links for the new node and the next node */
    if (current->next != NULL)
    {
        new->next = current->next;
        current->next->prev = new;
    }
    else
    {
        new->next = NULL;
    }

    current->next = new;

    /* Print the arrow -> as part of the output using putchar */
    putchar('-');
    putchar('>');
    putchar(' ');

    /* Print each digit individually without recursion */
    int divisor = 1;
    while (n / divisor >= 10)
        divisor *= 10;

    while (divisor != 0)
    {
        putchar(n / divisor + '0');
        n %= divisor;
        divisor /= 10;
    }

    putchar('\n');

    return (new);
}
