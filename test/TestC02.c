#include "../src/C02/ex00/ft_strcpy.c"
#include "../src/C02/ex01/ft_strncpy.c"
#include "../src/C02/ex02/ft_str_is_alpha.c"
#include "../src/C02/ex03/ft_str_is_numeric.c"
#include "../src/C02/ex04/ft_str_is_lowercase.c"
#include "../src/C02/ex05/ft_str_is_uppercase.c"
#include "../src/C02/ex06/ft_str_is_printable.c"
#include "../src/C02/ex07/ft_strupcase.c"
#include "../src/C02/ex08/ft_strlowcase.c"
#include "../src/C02/ex09/ft_strcapitalize.c"
/*#include "../src/C02/ex10/ft_strlcpy.c"
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

void	test_ft_strncpy_ex01(void)
{
	char	dest[] = "World1";
	char	src[] = "Hello";
	char	*result;

	result = ft_strncpy(dest, src, 3);
	TEST_ASSERT_EQUAL_STRING("Helld1", dest);
	TEST_ASSERT_EQUAL_STRING(result, dest);
}

void	test_ft_str_is_alpha_ex02(void)
{
	char	empty_char[50];

	empty_char[0] = '\0';
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_alpha("Hello"));         // 1
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_alpha(empty_char));      // 1
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_alpha("hiuhi77^"));      // 0
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_alpha("abcghij[`aBCZ")); // 0
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_alpha("23adsaffq"));     // 0
	TEST_ASSERT_EQUAL_INT(0, 0 && 1);
	TEST_ASSERT_EQUAL_INT(1, 0 || 1);
}

void	test_ft_str_is_numeric_ex03(void)
{
	char	empty_char[50];

	empty_char[0] = '\0';
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_numeric("23adsaffq"));
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_numeric("123456789"));
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_numeric(empty_char));
}

void	test_ft_str_is_lowercase_ex04(void)
{
	char	empty_char[50];

	char *lower_case_only = "hello";         // 1
	char *other_caracters = "HEY!! 6468dcs"; // 0
	empty_char[0] = '\0';                    // 1
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_lowercase(lower_case_only));
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_lowercase(other_caracters));
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_lowercase(empty_char));
}

void	test_ft_str_is_uppercase_ex05(void)
{
	char	empty_char[50];
	char	*lower_case_only;
	char	*upper_case_only;
	char	*other_caracters;

	lower_case_only = "hello";
	upper_case_only = "HELLO";
	other_caracters = "HEY!! 6468dcs";
	empty_char[0] = '\0';
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_uppercase(lower_case_only)); // 0
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_uppercase(upper_case_only)); // 1
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_uppercase(other_caracters)); // 0
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_uppercase(empty_char));      // 1
}

void	test_ft_str_is_printable_ex06(void)
{
	char	empty_char[50];
	char	*printable_string_only;
	char	*no_printable_string;

	printable_string_only = "hello-123456!sadasdewdsfdsfds";
	no_printable_string = "\n\t\v\f";
	empty_char[0] = '\0';
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_printable(printable_string_only));
	TEST_ASSERT_EQUAL_INT(0, ft_str_is_printable(no_printable_string)); // 0
	TEST_ASSERT_EQUAL_INT(1, ft_str_is_printable(empty_char));          // 1
}

void	test_ft_strupcase_ex07(void)
{
	char	lowcase_string[50] = "bonjour !";
	char	random_car[50] = "23_-3frewg4wvfsd4";

	TEST_ASSERT_EQUAL_STRING("BONJOUR !", ft_strupcase(lowcase_string));
	TEST_ASSERT_EQUAL_STRING("23_-3FREWG4WVFSD4", ft_strupcase(random_car));
	TEST_ASSERT_EQUAL_CHAR('A', 'a' - 32);
	TEST_ASSERT_EQUAL_CHAR('a', 'A' + 32);
}

void	test_ft_strlowcase_ex08(void)
{
	char	upcase_string[50] = "bonjour !";
	char	random_car[50] = "23_-3frewg4wvfsd4";

	TEST_ASSERT_EQUAL_STRING("BONJOUR !", ft_strupcase(upcase_string));
	TEST_ASSERT_EQUAL_STRING("23_-3FREWG4WVFSD4", ft_strupcase(random_car));
	TEST_ASSERT_EQUAL_CHAR('A', 'a' - 32);
	TEST_ASSERT_EQUAL_CHAR('a', 'A' + 32);
}

void	test_ft_strcapitalize_ex09(void)
{
	char	input_char[220] = "hi, how are you? 42words foRty-two; fifty+and+one";
	char	output_char[220] = "Hi, How Are You? 42words Forty-Two; Fifty+And+One";
	char	test[220] = "HI, HOW ARE YOU? 42WORDS FORTY-TWO; FIFTY+AND+ONE";
	TEST_ASSERT_EQUAL_STRING(test, ft_strcapitalize(test));
	char	capital_input[50] = "HELLO";
	char	capital_output[50] = "Hello";
	TEST_ASSERT_EQUAL_STRING(output_char, ft_strcapitalize(input_char));
	TEST_ASSERT_EQUAL_STRING(capital_output, ft_strcapitalize(capital_input));

}

int	main(void)
{
	UNITY_BEGIN();

	RUN_TEST(test_ft_strcpy_ex00);
	RUN_TEST(test_ft_strncpy_ex01);
	RUN_TEST(test_ft_str_is_alpha_ex02);
	RUN_TEST(test_ft_str_is_numeric_ex03);
	RUN_TEST(test_ft_str_is_lowercase_ex04);
	RUN_TEST(test_ft_str_is_uppercase_ex05);
	RUN_TEST(test_ft_str_is_printable_ex06);
	RUN_TEST(test_ft_strupcase_ex07);
	RUN_TEST(test_ft_strlowcase_ex08);
	RUN_TEST(test_ft_strcapitalize_ex09);

	UNITY_END();

	return (0);
}