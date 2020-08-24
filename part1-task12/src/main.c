
/*****************************************************************************/
/* Name:   main.c                                                            */
/*                                                                           */
/* Purpose:   TODO    */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "number.h"

int main(int argc, char **argv)
{
  int minutes;

  printf("Enter math mark: ");
  scanf("%d", &minutes);

  printf("Result: %d\n", pay_charge(minutes));
  return 0;
} /* main */
