#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;     /* pointer to the new node */
    listint_t *temp = *head;    /* pointer to the current last node in the list */

    /* allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    /* initialize the new node with the given data */
    new->n = n;
    new->next = NULL;

    /* if the list is empty, make the new node the first node */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* traverse the list to find the last node */
    while (temp->next)
        temp = temp->next;

    /* add the new node to the end of the list */
    temp->next = new_node;

    return (new_node);
}
