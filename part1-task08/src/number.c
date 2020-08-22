
/*****************************************************************************/
/* Name:   number.c                                                          */
/*                                                                           */
/* Purpose:  Calculate the day of the week based 
             on the number we get from user                                  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include "number.h"

/*
  Name:        number_to_day

  Purpose:     Calculate the day of the week based 
               on the number we get from user with switch statement 

  Params:      IN    number - double type

  Returns:   a variable string
*/
const char *number_to_day(int day_number)
{
  char *day;

  switch (day_number)
  {
  case Monday:
    day = "Monday";
    break;
  case Tuesday:
    day = "Tuesday";
    break;
  case Wednesday:
    day = "Wednesday";
    break;
  case Thursday:
    day = "Thursday";
    break;
  case Friday:
    day = "Friday";
    break;
  case Saturday:
    day = "Saturday";
    break;
  case Sunday:
    day = "Sunday";
    break;
  default:
    day = "Not a week day";
    break;
  }

  return day;

} /* number_to_day */
