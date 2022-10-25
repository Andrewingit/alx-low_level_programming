#include "lists.h"


/**
*delete_nodeint_at_index - deletes the node at given index
*@head: a pointer to the address of the head of the list
*@index: the index of the node to be deleted - indices start at 0
*
*Return: 1 on succes and  -1 upon failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *next;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
current = *head;
for (i = 0; i < index - 1; i++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}
next = current->next;
current->next = next->next;
free(next);
return (1);
}
