#include "monty.h"

/**
 * add_element - adds the top two elements of the stack.
 * @head: pointer to the first node
 * @line_number: line number
 * Return: nothing
 */
void add_element(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	int res, len = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	res = h->n + h->next->n;
	h->next->n = res;
	*head = h->next;
	free(h);
}
