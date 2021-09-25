#include "monty.h"

/**
 * m_pint - print all values in the 'stack' or exit if stack is empty
 * @stack: double pointer to head of the stack
 * @line_number: line number being executed from script file
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
stack_t *head = *stack;
if (var.stack_len == 0)
{
dprintf(STDOUT_FILENO, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", head->n);
}
