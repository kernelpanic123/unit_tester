#include <criterion/criterion.h>

#include <ft_printf.h>
#include <limits.h>

Test(ft_print_dec, test1)
{
	int	res;

	res = ft_itoa(5365);

	cr_assert_eq(res, 5365);
}
