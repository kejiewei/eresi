/*
** main.c
** 
** Started on  Sun Mar 17 06:38:49 2002 jfv
** Last update Sat Mar 23 11:00:10 2002 jfv
**
** $Id: main.c 1311 2009-01-14 20:36:48Z may $
**
*/
#include <stdio.h>
#include <string.h>

int main()
{
  char	*str;
  int	index;

  for (index = 0; index < 10; index++)
    {
      str = (char *) malloc(256);
      memcpy(str, "test_heap", 9);
      printf("%s [%u] \n", str, index);
    }

  puts("End !");

  return (0);
}
