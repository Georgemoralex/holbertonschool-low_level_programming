#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *head = NULL;
    dlistint_t *node;

    head = add_dnodeint_end(&head, 98);
    head = add_dnodeint_end(&head, 9);
    head = add_dnodeint_end(&head, 6);

    printf("-> %d\n", head->n);
    for (node = head->next; node != NULL; node = node->next)
        printf("%d\n", node->n);
    printf("-> 3 elements\n");

    printf("-> %d\n", node->prev->n);
    for (; node != NULL; node = node->prev)
        printf("%d\n", node->n);
    printf("-> 3 elements\n");

    return (0);
}
