#include "monty.h"
/**
  *sub- sustration
  *@head: stack head
  *@num: line_number
  *Return: no return
 */
void sub(stack_t **head, unsigned int num)
{
	stack_t *temp;
	int m, len;

	temp = *head;
	for (len = 0; temp != NULL; len++)
		temp = temp->next;
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	m = temp->next->n - temp->n;
	temp->next->n = m;
	*head = temp->next;
	free(temp);
}
