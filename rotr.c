#include "monty.h"

/**
 * m_rotr - rotates the 'stack' to the bottom
 * @stack: double pointer to head of the stack
 * @line_number: line number being executed from script file
 */
void m_rotr(stack_t **stack, unsigned int line_number)
{
(void)line_number;
if (*stack)
*stack = (*stack)->prev;
}
