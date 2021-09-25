#include "monty.h"

/**
 * m_sub - substruct the top two elements of 'stack'
 * @stack: double pointer to head of the stack
 * @line_number: line number being executed from script file
 */
void m_sub(stack_t **stack, unsigned int line_number)
{
int n;
if (var.stack_len < 2)
{
dprintf(STDOUT_FILENO,
	"L%u: can't sub, stack too short\n",
	line_number);
exit(EXIT_FAILURE);
}
n = (*stack)->n;
m_pop(stack, line_number);
(*stack)->n -= n;
}
