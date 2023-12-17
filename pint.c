#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @head: pointer to the first node
 * @line_number: line_number
 * Return: nothing
 */
void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
