#ifndef __OSFCN_H
#define __OSFCN_H 1

#ifdef __MINGW32__
#define _INC_MINGW_SECAPI
#define _INC_CRTDEFS
#define __cdecl
#endif

#ifndef __MINGW32__
#include <sys/types.h>
#endif
#include <fcntl.h>
#include <grp.h>
#include <pwd.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <utime.h>
#ifndef _WIN32
#include <sys/wait.h>
#endif
#endif
