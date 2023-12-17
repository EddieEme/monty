#include "monty.h"
/**
 * add_element - function that adds the top two elements of the stack.
 * @head: The head of stack
 * @line_number: number of line
 * Return: return nothing
*/
void add_element(stack_t **head, unsigned int line_number)
{
	stack_t *first;
	stack_t *second;

	if (!head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	first = *head;
	second = first->next;
	first->n += second->n;
	free(second);
	*head = first->next;
}
