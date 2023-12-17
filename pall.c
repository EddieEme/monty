#include "monty.h"
/**
 * pall - prints all the values on the stack,
 *        starting from the top of the stack
 * @head: stack head
 * @line_number: not used
 * Return: return nothing
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
