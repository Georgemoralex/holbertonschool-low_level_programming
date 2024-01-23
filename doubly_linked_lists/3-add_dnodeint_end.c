#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *current;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        /* If the list is empty, set the new node as both head and tail */
        new->prev = NULL;
        *head = new;
    }
    else
    {
        /* If the list is not empty, find the last node and update pointers */
        current = *head;
        while (current->next != NULL)
            current = current->next;

        current->next = new;
        new->prev = current;
    }

    return (new);
}