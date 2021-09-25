#include "monty.h"
#include <ctype.h>

/**
 * m_pchar - print character from top of stack
 * @stack: double pointer to head of the stack
 * @line_number: line number being executed from script file
 */
void m_pchar(stack_t **stack, unsigned int line_number)
{
int ch;
if (var.stack_len < 1)
{
dprintf(STDOUT_FILENO,
	"L%u: can't pchar, stack empty\n",
	line_number);
exit(EXIT_FAILURE);
}
ch = (*stack)->n;
if (!isascii(ch))
{
dprintf(STDOUT_FILENO,
	"L%u: can't pchar, value out of range\n",
	line_number);
exit(EXIT_FAILURE);
}
printf("%c\n", ch);
}
