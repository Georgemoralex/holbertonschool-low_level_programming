#include "lists.h"


size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    if (h == NULL)
        return (count);

    printf("-> %d\n", h->n);
    count++;

    h = h->next;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    printf("-> %lu elements\n", count);

    return (count);
}