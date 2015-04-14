/*
**
** $Id: hijacked.c 1311 2009-01-14 20:36:48Z may $
**
*/
#include <stdio.h>

void	new_sleep()
{
  printf("hijacked sleep ! \n");
}


int	main()
{
  printf("Main ! \n");
  sleep(5);
}
