#include "monty.h"

/**
 * m_fs_close - close file stream
 * @status: exit status
 * @arg: double pointer to the stack
 */
void m_fs_close(int status, void *arg)
{
FILE *fs;
(void)status;
fs = (FILE *) arg;
fclose(fs);
}
