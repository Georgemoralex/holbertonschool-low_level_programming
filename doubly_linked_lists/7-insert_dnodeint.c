#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *current;
    unsigned int i;

    if (h == NULL)
        return NULL;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return NULL;

    new->n = n;
    new->prev = NULL;
    new->next = NULL;

    if (idx == 0)
    {
        return add_dnodeint(h, n);
    }

    current = *h;
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL)
    {
        free(new);
        return NULL;
    }

    new->next = current->next;
    new->prev = current;
    if (current->next != NULL)
        current->next->prev = new;

    current->next = new;

    return new;
}

