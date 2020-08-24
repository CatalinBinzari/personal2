
/*
  Name:        test_main.c

  Purpose:     TODO
*/

#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <setjmp.h>
#include <cmocka.h>

#include "../src/number.h"
void admission_valid_not_admitted(void **state);
void admission_valid_admitted(void **state);
/*****************************************************************************/
/*                                                                           */
/*****************************************************************************/

int main()
{
  const struct CMUnitTest tests[] = {
      cmocka_unit_test(admission_valid_not_admitted),
      cmocka_unit_test(admission_valid_admitted),
  };

  return cmocka_run_group_tests(tests, NULL, NULL);
}

/*
  Name:        admission_valid_not_admitted

  Purpose:     TODO

  Params:      IN    state
              
  Returns:     Nothing

*/
void admission_valid_not_admitted(void **state)
{
  int admitted = admission(55, 55, 65);
  assert_int_equal(admitted, FALSE);
} /* admission_valid_not_admitted */
