#include "monty.h"

/**
 * pall - prints the values on the stack starting from the top of stack
 * @head: pointer to first node
 * @line_number: line number
 * Return: nothing
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
