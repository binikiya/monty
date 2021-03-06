#include "monty.h"
#include <ctype.h>

/**
 * m_pstr - print string from top of stack
 * @stack: double pointer to head of the stack
 * @line_number: line number being executed from script file
 */
void m_pstr(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
int ch;
(void)line_number;
temp = *stack;
while (temp != NULL)
{
ch = temp->n;
if (!isascii(ch) || ch == 0)
break;
putchar(ch);
temp = temp->next;
if (temp == *stack)
break;
}
putchar('\n');
}
