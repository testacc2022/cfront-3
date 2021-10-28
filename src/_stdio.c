/* stdio.c */

#include <stdio.h>
#include <errno.h>

FILE* _get_stdin()
{
    return stdin;
}

FILE* _get_stdout()
{
    return stdout;
}

FILE* _get_stderr()
{
    return stderr;
}
#ifndef _WIN32
int* _get_errno()
{
    return &errno;
}
#endif
