
/*
  Name:        test_main.c

  Purpose:     This file contains tests for whether the number is positive, negative or zero 
             with if statement and switch statement
*/

#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <setjmp.h>
#include <cmocka.h>

#include "../src/number.h"
void number_state_with_if_stmt_valid_negative(void **state);

/*****************************************************************************/
/*                                                                           */
/*****************************************************************************/

int main()
{
  const struct CMUnitTest tests[] = {
      cmocka_unit_test(number_state_with_if_stmt_valid_negative),

  };

  return cmocka_run_group_tests(tests, NULL, NULL);
}

/*
  Name:        number_state_with_if_stmt_valid_negative

  Purpose:     Test that number_state_with_if_stmt works with negative values. 

  Params:      IN    state
              
  Returns:     Nothing

*/
void number_state_with_if_stmt_valid_negative(void **state)
{
  int fstate = number_state_with_if_stmt(-5);

  assert_int_equal(fstate, -1);
} /* number_state_with_if_stmt_valid_negative */
