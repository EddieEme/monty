#include "monty.h"

/**
 * _div - divides the second top element of the stack
 * 	by the top element of the stack. 
 * @head: pointer to the first node
 * @line_number: line_number
 * Return: nothing
 */
void _div(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int len = 0;
	int res;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	res = h->next->n / h->n;
	h->next->n = res;
	*head = h->next;
	free(h);
}
