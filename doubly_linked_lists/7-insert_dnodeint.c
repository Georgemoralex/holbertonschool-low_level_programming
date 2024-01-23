#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (!h)
        return NULL;

    new_node = calloc(1, sizeof(dlistint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        /* Insert at the beginning */
        new_node->next = *h;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    current = *h;
    for (i = 0; i < idx - 1 && current; i++)
        current = current->next;

    if (!current)
    {
        /* Cannot insert beyond the end of the list */
        free(new_node);
        return NULL;
    }

    /* Insert in the middle or at the end */
    new_node->next = current->next;
    new_node->prev = current;

    if (current->next)
        current->next->prev = new_node;
    current->next = new_node;

    return new_node;
}





