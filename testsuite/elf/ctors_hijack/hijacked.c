/*
** hijacked.c for elfsh
** 
** Started on  Sun Mar 10 02:41:10 2002 jfv
** Last update Sun Mar 10 02:54:44 2002 jfv
**
** $Id: hijacked.c 1311 2009-01-14 20:36:48Z may $
**
*/
#include <stdio.h>


void	my_ctors() __attribute__ ((constructor));


void	new_ctors()
{
  printf("hijacked ctors ! \n");
}


void	my_ctors()
{
  printf("My ctors ! \n");

}

int	main()
{
  printf("Main ! \n");
}
