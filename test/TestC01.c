#include "../src/C01/ex00/ft_ft.c"
#include "../src/C01/ex01/ft_ultimate_ft.c"
#include "../src/C01/ex02/ft_swap.c"
#include "../src/C01/ex03/ft_div_mod.c"
#include "../src/C01/ex04/ft_ultimate_div_mod.c"
#include "../src/C01/ex05/ft_putstr.c"
#include "../src/C01/ex06/ft_strlen.c"
#include "../src/C01/ex07/ft_rev_int_tab.c"
#include "../src/C01/ex08/ft_sort_int_tab.c"
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

void	increment(int *value, int increment_by)
{
	if (value)
		*value += increment_by;
}

void	test_increment_should_increase_value_by_given_amount(void)
{
	int	value;

	value = 10;
	increment(&value, 5);
	TEST_ASSERT_EQUAL_INT(15, value);
}

void	test_increment_with_zero_should_not_change_value(void)
{
	int	value;

	value = 7;
	increment(&value, 0);
	TEST_ASSERT_EQUAL_INT(7, value);
}

void	test_increment_should_handle_null_pointer_gracefully(void)
{
	increment(NULL, 5); // Should not crash
	TEST_PASS();
	// You might add logging in function to ensure it handles NULL
}

void	test_ft_ft(void)
{
	int	value;

	value = 4256564;
	ft_ft(&value);
	TEST_ASSERT_EQUAL_INT(42, value);
	TEST_ASSERT_NOT_EQUAL_INT(444444, value);
}

void	print_int(int number)
{
	int	len;

	char buffer[20]; // large enough for most ints
	// Convert int to string
	len = snprintf(buffer, sizeof(buffer), "%d", number);
	// Write to stdout (file descriptor 1)
	write(1, buffer, len);
	write(1, "\n", 1); // optional newline
}

void	test_ft_ultimate_ft(void)
{
	int	a;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	a = 420;
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	TEST_ASSERT_EQUAL_INT(42, a);
	TEST_ASSERT_NOT_EQUAL_INT(444444, a);
	// print_int(a);
}

void	test_ft_swap(void)
{
	int	a;
	int	b;

	a = 42;
	b = 5000;
	ft_swap(&a, &b);
	TEST_ASSERT_EQUAL_INT(5000, a);
	TEST_ASSERT_EQUAL_INT(42, b);
}

void	test_ft_div_mod(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 3;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	TEST_ASSERT_EQUAL_INT(1, mod);
	TEST_ASSERT_EQUAL_INT(1, div);
}

void	test_ft_ultimate_div_mod(void)
{
	int	a;
	int	b;

	a = 3;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	TEST_ASSERT_EQUAL_INT(1, a);
	TEST_ASSERT_EQUAL_INT(1, b);
}

// Fonction utilitaire pour capturer la sortie de ft_putstr
char	*capture_output(void (*func)(char *), char *input)
{
	int			pipefd[2];
	int			saved_stdout;
	static char	buffer[1024];
	int			len;

	pipe(pipefd);
	// Sauvegarde de stdout
	saved_stdout = dup(STDOUT_FILENO);
	// Redirige stdout vers le pipe
	dup2(pipefd[1], STDOUT_FILENO);
	close(pipefd[1]);
	// Appel de la fonction
	func(input);
	// Récupère la sortie
	fflush(stdout);
	dup2(saved_stdout, STDOUT_FILENO);
	len = read(pipefd[0], buffer, sizeof(buffer) - 1);
	buffer[len] = '\0';
	close(pipefd[0]);
	close(saved_stdout);
	return (buffer);
}

void	test_ft_putstr(void)
{
	char	*output;

	output = capture_output(ft_putstr, "Hello World!");
	TEST_ASSERT_EQUAL_STRING("Hello World!", output);
}

void	test_ft_strlen(void)
{
	int	i;

	i = ft_strlen("Hello World!");
	TEST_ASSERT_EQUAL_INT(12, i);
}

void	print_array_int(int *tab, int size)
{
	int	it;

	it = 0;
	while (it < size)
	{
		print_int(tab[it]);
		it++;
	}
}
void	test_ft_rev_int_tab(void)
{
	int	tab[] = {1, 9, 6, 5, 3, 2};
	int	tab1[] = {2, 3, 5, 6, 9, 1};

	ft_rev_int_tab(tab, 6);
	// ft_putstr("--------********>>>>");
	// print_array_int(tab1, 6);
	TEST_ASSERT_EQUAL_INT_ARRAY(tab, tab1, 6);
}

void	test_ft_sort_int_tab(void)
{
	int	tab[] = {1, 9, 6, 5, 3, 2};
	int	tab1[] = {1, 2, 3, 5, 6, 9};

	ft_sort_int_tab(tab, 6);
	// ft_putstr("--------********>>>>");
	// print_array_int(tab1, 6);
	TEST_ASSERT_EQUAL_INT_ARRAY(tab, tab1, 6);
}

int	main(void)
{
	UNITY_BEGIN();
	// RUN_TEST(test_increment_should_increase_value_by_given_amount);
	// RUN_TEST(test_increment_with_zero_should_not_change_value);
	// RUN_TEST(test_increment_should_handle_null_pointer_gracefully);
	RUN_TEST(test_ft_ft);
	RUN_TEST(test_ft_ultimate_ft);
	RUN_TEST(test_ft_swap);
	RUN_TEST(test_ft_div_mod);
	RUN_TEST(test_ft_ultimate_div_mod);
	RUN_TEST(test_ft_putstr);
	RUN_TEST(test_ft_strlen);
	RUN_TEST(test_ft_rev_int_tab);
	RUN_TEST(test_ft_sort_int_tab);
	UNITY_END();

	return (0);
}