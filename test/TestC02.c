#include "../src/C02/ex00/ft_strcpy.c"
#include "../src/C02/ex01/ft_strncpy.c"
/*#include "../src/C02/ex02/ft_str_is_alpha.c"
#include "../src/C02/ex03/ft_str_is_numeric.c"
#include "../src/C02/ex04/ft_str_is_lowercase.c"
#include "../src/C02/ex05/ft_str_is_uppercase.c"
#include "../src/C02/ex06/ft_str_is_printable.c"
#include "../src/C02/ex07/ft_strupcase.c"
#include "../src/C02/ex08/ft_strlowcase.c"
#include "../src/C02/ex09/ft_strcapitalize.c"
#include "../src/C02/ex10/ft_strlcpy.c"
#include "../src/C02/ex11/ft_putstr_non_printable.c"
#include "../src/C02/ex12/ft_print_memory.c"*/
#include "unity.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	setUp(void)
{
}

void	tearDown(void)
{
}

void	test_ft_strcpy_ex00(void)
{
	char	*char1;
	char	char2[50];
	char	*result;

	char1 = "Hello";
	result = ft_strcpy(char2, char1);
	// ft_putstr(result);
	TEST_ASSERT_EQUAL_STRING(char1, char2);
	TEST_ASSERT_EQUAL_STRING(result, char2);
}

void	test_strncpy_exo1(void)
{
	char	*char1;
	char	char2[50];
	char	*result;

	char1 = "Hello";
	result = ft_strncpy(char2, char1, 5);
	// ft_putstr(result);
	TEST_ASSERT_EQUAL_STRING(char1, char2);
	TEST_ASSERT_EQUAL_STRING(result, char2);
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strcpy_ex00);
	RUN_TEST(test_strncpy_exo1);

	UNITY_END();

	return (0);
}