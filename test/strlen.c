#include <stdio.h>
#include <string.h>
#include "tests.h"

static int	run_single_test(const char *s)
{
	size_t	expected;
	size_t	result;

	expected = strlen(s);
	result = ft_strlen(s);
	if (expected != result)
	{
		printf("["RED"KO"RESET"] strlen(\"%s\") -> expected: %zu, got: %zu\n"RESET,
			s, expected, result);
		return (1);
	}
	printf("["GREEN"OK"RESET"] strlen(\"%s\") -> %zu\n"RESET, s, result);
	return (0);
}

int	run_strlen_tests(void)
{
	int	failures;

	failures = 0;
	printf(CYAN"=== Testing ft_strlen ===\n"RESET);
	failures += run_single_test("");
	failures += run_single_test("a");
	failures += run_single_test("42");
	failures += run_single_test("Hello, world!");
	failures += run_single_test("0123456789");

	if (failures == 0)
	{
		printf(GREEN"All ft_strlen tests passed.\n"RESET);
		return (0);
	}
	printf(RED"%d ft_strlen test(s) failed.\n"RESET, failures);
	return (1);
}