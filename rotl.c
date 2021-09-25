#include "monty.h"

/**
 * m_rotl - rotates the 'stack' to the top
 * @stack: double pointer to head of the stack
 * @line_number: line number being executed from script file
 */
void m_rotl(stack_t **stack, unsigned int line_number)
{
(void)line_number;
if (*stack)
*stack = (*stack)->next;
}
