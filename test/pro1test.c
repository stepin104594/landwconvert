#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <pro1fun.h>
#define PROJECT_NAME    "landwconvert"

/* Prototypes for all the test functions */
void test_millitocenti(void);
void test_millitometer(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "millitocenti", test_millitocenti);
  CU_add_test(suite, "millitometer", test_millitometer);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_millitocenti(void) {
  CU_ASSERT(1 == millitocenti(1,10));

  /* Dummy fail*/
  CU_ASSERT(10 == millitocenti(1,10));
}

void test_millitometer(void) {
  CU_ASSERT(1 == millitometer(1,10));

  /* Dummy fail*/
  CU_ASSERT(10 == millitometer(1,1000));
}

