#include "../src/C00/ex00/ft_putchar.c"
#include "../src/C00/ex01/ft_print_alphabet.c"
#include "../src/C00/ex02/ft_print_reverse_alphabet.c"
#include "../src/C00/ex03/ft_print_numbers.c"
#include "../src/C00/ex04/ft_is_negative.c"
#include "unity.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Déclaration d'un pointeur de fonction pour vérifier la signature
typedef void	(*ft_putchar_signature_check)(char);
typedef void	(*ft_print_alphabet_signature_check)(void);
void			ft_print_alphabet(void);
typedef void	(*ft_is_negative_signature_check)(int);

void	setUp(void)
{
}

void	tearDown(void)
{
}

void	test_ft_putchar(void)
{
	int		saved_stdout;
	int		pipefd[2];
	char	buffer[10] = {0};

	saved_stdout = dup(1);
	pipe(pipefd);
	dup2(pipefd[1], 1);
	close(pipefd[1]);
	ft_putchar('Z');
	read(pipefd[0], buffer, sizeof(buffer));
	close(pipefd[0]);
	dup2(saved_stdout, 1);
	close(saved_stdout);
	TEST_ASSERT_EQUAL_CHAR('Z', buffer[0]);
	TEST_ASSERT_NOT_EQUAL_CHAR('p', buffer[0]);
}

void	test_ft_putchar_signature_should_be_correct(void)
{
	ft_putchar_signature_check	ptr;

	ptr = ft_putchar;
	// TEST_PASS_MESSAGE("Signature de ft_putchar correcte (nom et parametre char)");
}

void	test_ft_print_alphabet_signature_should_be_correct(void)
{
	ft_print_alphabet_signature_check	ptr;

	ptr = ft_print_alphabet;
	TEST_PASS_MESSAGE("Signature de ft_print_alphabet correcte (nom et parametre void)");
}

// Redirige la sortie standard et capture ce que la fonction écrit
char	*capture_stdout(void (*func)(void))
{
	int	pipefd[2];
	int	saved_stdout;

	char *buffer = malloc(27); // 26 lettres + null terminator
	if (!buffer)
		return (NULL);
	// Création du pipe
	pipe(pipefd);
	// Sauvegarder stdout
	saved_stdout = dup(1);
	// Rediriger stdout vers le pipe
	dup2(pipefd[1], 1);
	close(pipefd[1]);
	// Appeler la fonction
	func();
	// Restaurer stdout
	fflush(stdout);
	dup2(saved_stdout, 1);
	close(saved_stdout);
	// Lire le contenu du pipe
	read(pipefd[0], buffer, 26);
	buffer[26] = '\0';
	close(pipefd[0]);
	return (buffer);
}

void	test_ft_print_alphabet_should_print_abcdefghijklmnopqrstuvwxyz(void)
{
	char	*output;

	output = capture_stdout(ft_print_alphabet);
	TEST_ASSERT_NOT_NULL(output);
	TEST_ASSERT_EQUAL_STRING("abcdefghijklmnopqrstuvwxyz", output);
	free(output);
}

void	test_ft_print_reverse_alphabet_should_print_zyxwvutsrqponmlkjihgfedcba(void)
{
	char	*output;

	output = capture_stdout(ft_print_reverse_alphabet);
	TEST_ASSERT_NOT_NULL(output);
	TEST_ASSERT_EQUAL_STRING("zyxwvutsrqponmlkjihgfedcba", output);
	free(output);
}

void	test_ft_print_numbers(void)
{
	char	*output1;

	output1 = capture_stdout(ft_print_numbers);
	TEST_ASSERT_NOT_NULL(output1);
	TEST_ASSERT_EQUAL_STRING("0123456789\0", output1);
	free(output1);
}

void	test_ft_is_negative_should_be_correct(void)
{
	ft_is_negative_signature_check	ptr;

	ptr = ft_is_negative;
}

void	test_ft_is_negative_with_negative_number(void)
{
	int		pipe_fd[2];
	char	buffer;

	// Utilisation de pipe pour capturer la sortie de write
	pipe(pipe_fd);
	// Redirection de la sortie standard vers le pipe
	dup2(pipe_fd[1], STDOUT_FILENO);
	// Appel de la fonction avec un nombre négatif
	ft_is_negative(-1);
	// Vérification que la sortie est 'N'
	read(pipe_fd[0], &buffer, 1);
	TEST_ASSERT_EQUAL('N', buffer);
	// Fermeture des fichiers
	close(pipe_fd[0]);
	close(pipe_fd[1]);
}

void	test_ft_is_negative_with_positive_number(void)
{
	int		pipe_fd[2];
	char	buffer;

	// Utilisation de pipe pour capturer la sortie de write
	pipe(pipe_fd);
	// Redirection de la sortie standard vers le pipe
	dup2(pipe_fd[1], STDOUT_FILENO);
	// Appel de la fonction avec un nombre positif
	ft_is_negative(1);
	// Vérification que la sortie est 'P'
	read(pipe_fd[0], &buffer, 1);
	TEST_ASSERT_EQUAL('P', buffer);
	// Fermeture des fichiers
	close(pipe_fd[0]);
	close(pipe_fd[1]);
}

int	main(void)
{
	UNITY_BEGIN();

	RUN_TEST(test_ft_putchar);
	RUN_TEST(test_ft_putchar_signature_should_be_correct);
	RUN_TEST(test_ft_print_alphabet_signature_should_be_correct);
	RUN_TEST(test_ft_print_numbers);
	RUN_TEST(test_ft_print_alphabet_should_print_abcdefghijklmnopqrstuvwxyz);
	RUN_TEST(test_ft_print_reverse_alphabet_should_print_zyxwvutsrqponmlkjihgfedcba);
	// RUN_TEST(test_ft_is_negative_with_negative_number);
	// RUN_TEST(test_ft_is_negative_with_positive_number);
	RUN_TEST(test_ft_is_negative_should_be_correct);
	UNITY_END();

	return (0);
}