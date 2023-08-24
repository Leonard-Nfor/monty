#include"monty.h"
/**
 * f_pall - fxn name
 * @head: pointer
 * @num: input
 * Return: Nothing
 */
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *h;
	(void)num;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
