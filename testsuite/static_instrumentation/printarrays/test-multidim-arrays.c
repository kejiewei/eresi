/*
** Testsuite for reflection in ERESI
**
** $Id: test-multidim-arrays.c 1311 2009-01-14 20:36:48Z may $
*/
#include <stdio.h>

int biarray[2][3] = {{1, 2, 3}, {4, 5, 6}};

int triarray[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}};

int	main()
{
  printf("biarray = %p, triarray = %p \n", biarray, triarray);
  return (0);
}
