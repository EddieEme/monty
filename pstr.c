#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * @head: pointer to first node
 * @line_number: line_number
 * Return: nothing
 */
void pstr(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

