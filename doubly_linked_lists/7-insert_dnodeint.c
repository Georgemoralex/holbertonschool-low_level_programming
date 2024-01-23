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

    if (h == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0)
    {
        /* Insert at the beginning */
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;

        return new_node;
    }

    current = *h;
    for (i = 0; i < idx && current != NULL; i++)
        current = current->next;

    if (current == NULL)
    {
        /* Cannot insert beyond the end of the list */
        free(new_node);
        return NULL;
    }

    /* Insert in the middle or at the end */
    new_node->next = current;
    new_node->prev = current->prev;

    if (current->prev != NULL)
        current->prev->next = new_node;
    else
        *h = new_node;

    current->prev = new_node;

    return new_node;
}





