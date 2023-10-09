#include <criterion/criterion.h>

// Define your function here:
int my_func(char *str);
Test(my_func, test_example )
{
    // do things for your function then use criterion here:
    cr_assert_eq(sample_value , 1 );
}
