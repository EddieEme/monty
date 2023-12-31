#include "monty.h"

/**
 * mul - multiplies the second top element of the stack
 * 	with the top element of the stack.
 * @head: pointer to first node
 * @line_number: line_number
 * Return: nothing
 */
void mul(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int len = 0, res;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	res = h->next->n * h->n;
	h->next->n = res;
	*head = h->next;
	free(h);
}
