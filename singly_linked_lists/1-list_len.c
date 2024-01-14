/**
 * list_len - returns then number of elements in a list.
 * @Nhead: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *Nhead)
{
	size_t elements;

	elements = 0;
	while (Nhead != NULL)
	{
		Nhead = Nhead->next;
		elements++;
	}
	return (elements);
}
