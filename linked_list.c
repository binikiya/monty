#include "monty.h"

/**
 * add_node - add a new node to the circular linked list
 * @stack: doubly linked list to the beggining of circular linked list
 * @n: value to add a new node
 *
 * Description: this function adds a new node at the begginig
 * Return: pointer to new node or null
 */
stack_t *add_node(stack_t **stack, const int n)
{
stack_t *new;
if (stack == NULL)
return (NULL);
new = malloc(sizeof(stack_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*stack == NULL)
{
new->prev = new;
new->next = new;
}
else
{
(*stack)->prev->next = new;
new->prev = (*stack)->prev;
(*stack)->prev = new;
new->next = *stack;
}
if (var.queue == STACK || var.stack_len == 0)
*stack = new;
return (new);
}
