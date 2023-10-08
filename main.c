/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:31:26 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/08 20:01:33 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

static void	sep()
{
	printf("\n_______________________________________________________________________________\n\n");
}

static void	test_isalpha()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = ((ft_isalpha('a')) ? OK : KO);
	char	*test2 = ((ft_isalpha('Z')) ? OK : KO);
	char	*test3 = ((ft_isalpha('m')) ? OK : KO);
	char	*test4 = ((ft_isalpha('5') == 0) ? OK : KO);
	char	*test5 = ((ft_isalpha(-9326) == 0) ? OK : KO);
	char	*test6 = ((ft_isalpha(432) == 0) ? OK : KO);
	char	*test7 = ((ft_isalpha(' ') == 0) ? OK : KO);
	char	*test8 = ((ft_isalpha('\t') == 0) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_isalpha :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s | ", test6);
	printf("Test 7 : %s | ", test7);
	printf("Test 8 : %s", test8);
	sep();
}

static void	test_isdigit()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_isdigit('a') == 0 ? OK : KO);
	char	*test2 = (ft_isdigit('Z') == 0 ? OK : KO);
	char	*test3 = (ft_isdigit('0') ? OK : KO);
	char	*test4 = (ft_isdigit('9') ? OK : KO);
	char	*test5 = (ft_isdigit('\n') == 0 ? OK : KO);
	char	*test6 = (ft_isdigit('$') == 0 ? OK : KO);
	char	*test7 = (ft_isdigit(8265) == 0 ? OK : KO);
	char	*test8 = (ft_isdigit(-4211) == 0 ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_isdigit :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s | ", test6);
	printf("Test 7 : %s | ", test7);
	printf("Test 8 : %s", test8);
	sep();
}

static void	test_isalnum()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_isalnum('a') ? OK : KO);
	char	*test2 = (ft_isalnum('Z') ? OK : KO);
	char	*test3 = (ft_isalnum('0') ? OK : KO);
	char	*test4 = (ft_isalnum('9') ? OK : KO);
	char	*test5 = (ft_isalnum('\n') == 0 ? OK : KO);
	char	*test6 = (ft_isalnum('$') == 0 ? OK : KO);
	char	*test7 = (ft_isalnum(8265) == 0 ? OK : KO);
	char	*test8 = (ft_isalnum(-4211) == 0 ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_isalnum :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s | ", test6);
	printf("Test 7 : %s | ", test7);
	printf("Test 8 : %s", test8);
	sep();
}

static void	test_isascii()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_isascii('a') ? OK : KO);
	char	*test2 = (ft_isascii('Z') ? OK : KO);
	char	*test3 = (ft_isascii('4') ? OK : KO);
	char	*test4 = (ft_isascii('#') ? OK : KO);
	char	*test5 = (ft_isascii(127) ? OK : KO);
	char	*test6 = (ft_isascii(0) ? OK : KO);
	char	*test7 = (ft_isascii(8265) == 0 ? OK : KO);
	char	*test8 = (ft_isascii(-4211) == 0 ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_isascii :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s | ", test6);
	printf("Test 7 : %s | ", test7);
	printf("Test 8 : %s", test8);
	sep();
}

static void	test_isprint()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_isprint(32) ? OK : KO);
	char	*test2 = (ft_isprint(126) ? OK : KO);
	char	*test3 = (ft_isprint(64) ? OK : KO);
	char	*test4 = (ft_isprint(1) == 0 ? OK : KO);
	char	*test5 = (ft_isprint(127) == 0 ? OK : KO);
	char	*test6 = (ft_isprint(21) == 0 ? OK : KO);
	char	*test7 = (ft_isprint(8265) == 0 ? OK : KO);
	char	*test8 = (ft_isprint(-4211) == 0 ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_isprint :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s | ", test6);
	printf("Test 7 : %s | ", test7);
	printf("Test 8 : %s", test8);
	sep();
}

static void	test_strlen()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_strlen("Salut") == strlen("Salut") ? OK : KO);
	char	*test2 = (ft_strlen("") == strlen("") ? OK : KO);
	char	*test3 = (ft_strlen("test") == strlen("test") ? OK : KO);
	char	*test4 = (ft_strlen("lorem\tipsum\tdolor\nsit\namet\n") == strlen("lorem\tipsum\tdolor\nsit\namet\n") ? OK : KO);
	char	*test5 = (ft_strlen("     \t\n\n     ") == strlen("     \t\n\n     ") ? OK : KO);
	char	*test6 = (ft_strlen("9") == strlen("9") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strlen :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s", test6);
	sep();
}

static void	test_memset()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	void	*ft_mem;
	void	*mem;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*all_tests;

	if (!(ft_mem = malloc(sizeof(*ft_mem) * 15)))
		return ;
	if (!(mem = malloc(sizeof(*mem) * 15)))
		return ;
	// TEST 1
	mem = memset(mem, 'j', 5);
	ft_mem = ft_memset(ft_mem, 'j', 5);
	if (!memcmp(mem, ft_mem, 15))
		test1 = OK;
	else
		test1 = KO;
	// TEST 2
	mem = memset(mem, 'k', 14);
	ft_mem = ft_memset(ft_mem, 'k', 14);
	if (!memcmp(mem, ft_mem, 15))
		test2 = OK;
	else
		test2 = KO;
	// TEST 3
	mem = memset(mem, '\n', 4);
	ft_mem = ft_memset(ft_mem, '\n', 4);
	if (!memcmp(mem, ft_mem, 15))
		test3 = OK;
	else
		test3 = KO;
	// TEST 4
	mem = memset(mem, '\0', 1);
	ft_mem = ft_memset(ft_mem, '\0', 1);
	if (!memcmp(mem, ft_mem, 15))
		test4 = OK;
	else
		test4 = KO;
	// ALL TESTS
	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_memset :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s", test4);
	free(mem);
	free(ft_mem);
	sep();
}

static void	test_bzero()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	void	*ft_mem;
	void	*mem;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*all_tests;

	if (!(ft_mem = malloc(sizeof(*ft_mem) * 15)))
		return ;
	if (!(mem = malloc(sizeof(*mem) * 15)))
		return ;
	// TEST 1
	ft_mem = memset(ft_mem, 'c', 5);
	mem = memset(mem, 'c', 5);
	ft_bzero(ft_mem, 5);
	bzero(mem, 5);
	if (!memcmp(mem, ft_mem, 5))
		test1 = OK;
	else
		test1 = KO;
	// TEST 2
	ft_mem = memset(ft_mem, 'j', 15);
	mem = memset(mem, 'j', 15);
	ft_bzero(ft_mem, 10);
	bzero(mem, 10);
	if (!memcmp(mem, ft_mem, 15))
		test2 = OK;
	else
		test2 = KO;
	// TEST 3
	ft_mem = memset(ft_mem, 'k', 5);
	mem = memset(mem, 'k', 5);
	ft_bzero(ft_mem, 25);
	bzero(mem, 25);
	if (!memcmp(mem, ft_mem, 5))
		test3 = OK;
	else
		test3 = KO;
	// TEST 4
	ft_bzero(ft_mem, 0);
	bzero(mem, (0));
	if (!memcmp(mem, ft_mem, 5))
		test4 = OK;
	else
		test4 = KO;
	// ALL TESTS
	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_bzero :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s", test4);
	sep();
}

static void	test_memcpy()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	void	*ft_mem;
	void	*mem;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*all_tests;

	if (!(ft_mem = malloc(sizeof(*ft_mem) * 30)))
		return ;
	if (!(mem = malloc(sizeof(*mem) * 30)))
		return ;
	// TEST 1
	ft_mem = memset(ft_mem, 'c', 30);
	mem = memset(mem, 'c', 30);
	ft_memcpy(ft_mem, "abcdefghijklmnopqrstuvwxyz", 30);
	memcpy(mem, "abcdefghijklmnopqrstuvwxyz", 30);
	if (!memcmp(mem, ft_mem, 30))
		test1 = OK;
	else
		test1 = KO;
	// TEST 2
	ft_memcpy(ft_mem, "abcdefghijklmnopqrstuvwxyz", 0);
	memcpy(mem, "abcdefghijklmnopqrstuvwxyz", 0);
	if (!memcmp(mem, ft_mem, 30))
		test2 = OK;
	else
		test2 = KO;
	// TEST 3
	ft_memcpy(ft_mem, "", 1);
	memcpy(mem, "", 1);
	if (!memcmp(mem, ft_mem, 30))
		test3 = OK;
	else
		test3 = KO;
	// TEST 4
	ft_memcpy(ft_mem, "     \t\n       ", 8);
	memcpy(mem, "     \t\n       ", 8);
	if (!memcmp(mem, ft_mem, 30))
		test4 = OK;
	else
		test4 = KO;
	// ALL TESTS
	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_memcpy :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s", test4);
	free(mem);
	free(ft_mem);
	sep();
}

static void	test_memmove()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	ft_mem[] = "Ceci est un test";
	char	mem[] = "Ceci est un test";
	char	*ft_src;
	char	*src;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*test5;
	char	*test6;
	char	*all_tests;

	ft_src = ft_mem + 1;
	src = mem + 1;
	// TEST 1
	ft_memmove(ft_mem, "abcdefghijklmnopqrstuvwxyz", 17);
	memmove(mem, "abcdefghijklmnopqrstuvwxyz", 17);
	if (!memcmp(mem, ft_mem, 17))
		test1 = OK;
	else
		test1 = KO;
	// TEST 2
	ft_memmove(ft_mem, "abcdefghijklmnopqrstuvwxyz", 0);
	memmove(mem, "abcdefghijklmnopqrstuvwxyz", 0);
	if (!memcmp(mem, ft_mem, 17))
		test2 = OK;
	else
		test2 = KO;
	// TEST 3
	ft_memmove(ft_mem, "", 1);
	memmove(mem, "", 1);
	if (!memcmp(mem, ft_mem, 17))
		test3 = OK;
	else
		test3 = KO;
	// TEST 4
	ft_memmove(ft_mem, "     \t\n       ", 8);
	memmove(mem, "     \t\n       ", 8);
	if (!memcmp(mem, ft_mem, 17))
		test4 = OK;
	else
		test4 = KO;
	// TEST 5
	ft_memmove(ft_mem, ft_src, 10);
	memmove(mem, src, 10);
	if (!memcmp(mem, ft_mem, 17))
		test5 = OK;
	else
		test5 = KO;
	// TEST 6
	ft_memmove(ft_mem, ft_src, 0);
	memmove(mem, src, 0);
	if (!memcmp(mem, ft_mem, 17))
		test6 = OK;
	else
		test6 = KO;
	// ALL TESTS
	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_memmove :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s", test6);
	sep();
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	printf("\n\t\t\t || \033[94mPART 1: libc functions\033[0m ||");
	sep();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();

	return (0);
}