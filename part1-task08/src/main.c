
/*****************************************************************************/
/* Name:   main.c                                                            */
/*                                                                           */
/* Purpose:   a C program to print the name for the day                      */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "number.h"

int main(int argc, char **argv)
{
  int day_number;

  printf("Enter the day number: ");
  scanf("%d", &day_number);
  //to do valiation
  printf("With switch statement: %d\n", number_to_day(day_number));

  return 0;
} /* main */
