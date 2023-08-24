#include "monty.h"
/**
 * swap - swapa the top two elements of the stack.
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void swap(stack_t **head, unsigned int num)
{
	stack_t *temp;
	/* m is a temporal variable to store data*/
	int len = 0, m;

	/*assigning temp to point the first ele in stack*/
	temp = *head;
	/*check the len of stack */
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	/*checking the require elements to swap*/
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	/*doing the swaping*/
	temp = *head;
	m = temp->n;
	temp->n = temp->next->n;
	temp->next->n = m;
}
