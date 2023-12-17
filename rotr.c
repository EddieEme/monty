#include "monty.h"

/**
 * rotr- rotates the stack to the bottom
 * @head: pointer to first node
 * @line_number: line_number
 * Return: nothing
 */
void rotr(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}

