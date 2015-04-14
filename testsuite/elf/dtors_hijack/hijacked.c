/*
**
** $Id: hijacked.c 1311 2009-01-14 20:36:48Z may $
**
*/
#include <stdio.h>


void	my_dtors() __attribute__ ((destructor));


void	new_dtors()
{
  printf("hijacked dtors ! \n");
}

void	my_dtors()
{
    printf("My dtors ! \n");
}


int	main()
{
  printf("Main ! Sleeping 5 secs ... \n");
  sleep(5);
}
