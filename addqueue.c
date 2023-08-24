#include"monty.h"
/**
 * f_queue - prints the top
 * @head: pointer
 * @num: line number
 * Return: Nothing
 */
void queue(stack_t **head, unsigned int num)
{
	(void)head;
	(void)num;
	bus.lifi = 1;
}
/**
 * addqueue - addnode to end
 * @n: value
 * @head: head of stack
 * Return: Nothing
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		aux->next = new;
		new->prev = aux;
	}
}
