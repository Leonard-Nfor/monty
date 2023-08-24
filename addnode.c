#include"monty.h"
/**
 * addnode - fxn name
 * @head: pointer
 * @n: data
 * Return: Nothing
 */
void addnode(stack_t **head, int n)
{
	stack_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
		if (aux)
			aux->prev = new;
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
}

