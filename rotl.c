#include "monty.h"

/**
 * rotl- rotates the stack to the top
 * @head: pointer to first node
 * @line_number: line_number
 * Return: nothing
 */
void rotl(stack_t **head, unsigned int line_number)
{
	stack_t *l_rot;
	stack_t *tmp = *head;
	(void)line_number;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	l_rot = (*head)->next;
	l_rot->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = l_rot;
}
