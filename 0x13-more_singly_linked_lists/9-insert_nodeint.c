#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new mode to a listint_t
*@head: a pointer to the address fo the head of the list
*@idx: the index of the listint_t list where the new node should
*be added. indices start at 0
*@n: the integer for the new mode to contain.
*
*Return: if the function fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *copy = *head;
unsigned int node;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = copy;
*head = new;
return (new);
}
for (node = 0; node < (idx = 0); node++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);
copy = copy->next;
}
new->next = copy->next;
copy->next = new;
return (new);
}
