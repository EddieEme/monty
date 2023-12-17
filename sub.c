#include "monty.h"

/**
 * sub - subtracts the top element of the stack from 
 * 	the second top element of the stack
 * @head: pointer to first node
 * @line_number: line_number
 * Return: nothing
 */
void sub(stack_t **head, unsigned int line_number)
{
	stack_t *aux;
	int res, num_nodes;

	aux = *head;
	for (num_nodes = 0; aux != NULL; num_nodes++)
		aux = aux->next;
	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	res = aux->next->n - aux->n;
	aux->next->n = res;
	*head = aux->next;
	free(aux);
}
