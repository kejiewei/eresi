/*
* @file kernsh/autotypes.c
** @ingroup kernsh
** $Id: autotypes.c 1397 2009-09-13 02:19:08Z may $
**
*/
#include "kernsh.h"
#include "libkernsh.h"

/*  */
int		cmd_autotypes()
{
  int		ret;

  PROFILER_IN(__FILE__, __FUNCTION__, __LINE__);

  ret = kernsh_autotypes();
  if (ret)
    PROFILER_ERR(__FILE__, __FUNCTION__, __LINE__, 
		 "Cannot autotypes", -1);

  PROFILER_ROUT(__FILE__, __FUNCTION__, __LINE__, 0);
}
