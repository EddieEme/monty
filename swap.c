#include "monty.h"

/**
 * swap_element - swaps the top two elements of the stack.
 * @head: pointer to first node
 * @line_number: line_number
 * Return: nothing
 */
void swap_element(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int len = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}
