#include "monty.h"
/**
 * f_swap - swapa the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void swap(stack_t **head, unsigned int num)
{
	stack_t *temp;
	int len = 0, m;

	temp = *head;
	/*check the len of stack */
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	m = temp->n;
	temp->n = temp->next->n;
	temp->next->n = m;
}
