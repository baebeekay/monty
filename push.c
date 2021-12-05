#include "monty.h"

/**
 * push - implements the push opcode of stack
 * @x: inteder variable to push
 */
void push(int x)
{
	stack_t *temp, *top = 0;

	if (x == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", x);
		exit(EXIT_FAILURE);
	}
	temp = malloc(sizeof(stack_t));
	temp->n = x;
	temp->next = top;
	top = temp;
}
