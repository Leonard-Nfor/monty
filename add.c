#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @head: stack head
 * @num: line_number
 * Return: no return
*/
void add(stack_t **head, unsigned int num)
{
	stack_t *h;
	int len = 0, m;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", temp);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	/*doing the addition*/
	m = temp->n + temp->next->n;
	/*transfering result in the next node*/
	temp->next->n = m;
	/*making head to point to the next node*/
	*head = temp->next;
	/*deleting the first node*/
	free(temp);
}
