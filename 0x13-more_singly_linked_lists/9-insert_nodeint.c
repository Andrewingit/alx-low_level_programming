#include "lists.h"
#include <stdlib.h>
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
unsigned int i;
listint_t *current, *new;

if (head == NULL)
return (NULL);
if (idx != 0)
{
current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = current->next;
current->next = new;
return (new);
}
