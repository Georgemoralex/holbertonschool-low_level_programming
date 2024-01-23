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
    dlistint_t *new, *head;
    unsigned int i;

    new = NULL;
    if (idx == 0)
    {
        new = add_dnodeint(h, n);
    }
    else
    {
        head = *h;
        i = 1;

        while (head != NULL && i < idx)
        {
            head = head->next;
            i++;
        }

        if (head != NULL)
        {
            new = malloc(sizeof(dlistint_t));
            if (new != NULL)
            {
                new->n = n;
                new->prev = head;
                new->next = head->next;

                if (head->next != NULL)
                    head->next->prev = new;

                head->next = new;
            }
        }
    }

    return new;
}
