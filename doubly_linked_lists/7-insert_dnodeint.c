#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    dlistint_t *head = NULL;
    dlistint_t *node;

    // Inserting elements dynamically
    head = add_dnodeint_end(&head, 98);
    head = add_dnodeint_end(&head, 9);
    head = add_dnodeint_end(&head, 6);

    // Printing the elements
    printf("-> %d\n", head->n); // Print the first element separately
    for (node = head->next; node != NULL; node = node->next)
        printf("%d\n", node->n);
    printf("-> 3 elements\n");

    // Reversing and printing the elements
    printf("-> %d\n", node->prev->n); // Print the last element separately
    for (; node != NULL; node = node->prev)
        printf("%d\n", node->n);
    printf("-> 3 elements\n");

    return (0);
}
