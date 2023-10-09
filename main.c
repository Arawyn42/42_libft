/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:31:26 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/09 20:14:31 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
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

static void	test_strlcpy()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*ft_dest;
	char	*dest;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*test5;
	char	*test6;
	char	*all_tests;

	if (!(ft_dest = malloc(15 * sizeof(char *))))
		return ;
	if (!(dest = malloc(15 * sizeof(char *))))
		return ;
	// TEST 1
	if (ft_strlcpy(ft_dest, "abcdef", 6) == strlcpy(dest, "abcdef", 6) && !memcmp(dest, ft_dest, 15))
		test1 = OK;
	else
		test1 = KO;
	// TEST 2
	if (ft_strlcpy(ft_dest, "abcdef", 0) == strlcpy(dest, "abcdef", 0) && !memcmp(dest, ft_dest, 15))
		test2 = OK;
	else
		test2 = KO;
	// TEST 3
	if (ft_strlcpy(ft_dest, "abcdef", 3) == strlcpy(dest, "abcdef", 3) && !memcmp(dest, ft_dest, 15))
		test3 = OK;
	else
		test3 = KO;
	// TEST 4
	if (ft_strlcpy(ft_dest, "", 15) == strlcpy(dest, "", 15) && !memcmp(dest, ft_dest, 15))
		test4 = OK;
	else
		test4 = KO;
	// TEST 5
	if (ft_strlcpy(ft_dest, "Salut ceci est un test qui depasse", 15) == strlcpy(dest, "Salut ceci est un test qui depasse", 15) && !memcmp(dest, ft_dest, 15))
		test5 = OK;
	else
		test5 = KO;
	// TEST 6
	if (ft_strlcpy(ft_dest, "Salut ceci est un test qui depasse", 30) == strlcpy(dest, "Salut ceci est un test qui depasse", 30) && !memcmp(dest, ft_dest, 15))
		test6 = OK;
	else
		test6 = KO;
	// ALL TESTS
	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strlcpy :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s", test6);
	free(ft_dest);
	free(dest);
	sep();
}

static void	test_strlcat()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*ft_dest;
	char	*dest;
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;
	char	*test5;
	char	*all_tests;

	ft_dest = "Je suis une destination";
	dest = "Je suis une destination";
	// TEST 1
	if (ft_strlcat(ft_dest, "abcdef", 6) == strlcat(dest, "abcdef", 6) && !memcmp(dest, ft_dest, strlen(dest)))
		test1 = OK;
	else
		test1 = KO;
	// TEST 2
	if (ft_strlcat(ft_dest, "abcdef", 0) == strlcat(dest, "abcdef", 0) && !memcmp(dest, ft_dest, strlen(dest)))
		test2 = OK;
	else
		test2 = KO;
	// TEST 3
	if (ft_strlcat(ft_dest, "abcdef", 3) == strlcat(dest, "abcdef", 3) && !memcmp(dest, ft_dest, strlen(dest)))
		test3 = OK;
	else
		test3 = KO;
	// TEST 4
	if (ft_strlcat(ft_dest, "", 15) == strlcat(dest, "", 15) && !memcmp(dest, ft_dest, strlen(dest)))
		test4 = OK;
	else
		test4 = KO;
	// TEST 5
	if (ft_strlcat(ft_dest, "Salut ceci est un test qui depasse", 15) == strlcat(dest, "Salut ceci est un test qui depasse", 15) && !memcmp(dest, ft_dest, strlen(dest)))
		test5 = OK;
	else
		test5 = KO;
	// ALL TESTS
	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strlcat :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s", test5);
	sep();
}

static void	test_toupper()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_toupper('a') == toupper('a') ? OK : KO);
	char	*test2 = (ft_toupper('Z') == toupper('Z') ? OK : KO);
	char	*test3 = (ft_toupper('0') == toupper('0') ? OK : KO);
	char	*test4 = (ft_toupper('\n') == toupper('\n') ? OK : KO);
	char	*test5 = (ft_toupper(' ') == toupper(' ') ? OK : KO);
	char	*test6 = (ft_toupper('$') == toupper('$') ? OK : KO);
	char	*test7 = (ft_toupper(8265) == toupper(8265) ? OK : KO);
	char	*test8 = (ft_toupper(-4211) == toupper(-4211) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_toupper :\t%s\t", all_tests);
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

static void	test_tolower()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_tolower('a') == tolower('a') ? OK : KO);
	char	*test2 = (ft_tolower('Z') == tolower('Z') ? OK : KO);
	char	*test3 = (ft_tolower('0') == tolower('0') ? OK : KO);
	char	*test4 = (ft_tolower('\n') == tolower('\n') ? OK : KO);
	char	*test5 = (ft_tolower(' ') == tolower(' ') ? OK : KO);
	char	*test6 = (ft_tolower('$') == tolower('$') ? OK : KO);
	char	*test7 = (ft_tolower(8265) == tolower(8265) ? OK : KO);
	char	*test8 = (ft_tolower(-4211) == tolower(-4211) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_tolower :\t%s\t", all_tests);
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

static void	test_strchr()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_strchr("Salut lol", 'S'), strchr("Salut lol", 'S')) ? OK : KO);
	char	*test2 = (!strcmp(ft_strchr("Salut lol", 'a'), strchr("Salut lol", 'a')) ? OK : KO);
	char	*test3 = (!strcmp(ft_strchr("Salut lol", 't'), strchr("Salut lol", 't')) ? OK : KO);
	char	*test4 = (!strcmp(ft_strchr("Salut lol", ' '), strchr("Salut lol", ' ')) ? OK : KO);
	char	*test5 = (!strcmp(ft_strchr("Salut lol\t\n", '\t'), strchr("Salut lol\t\n", '\t')) ? OK : KO);
	char	*test6 = (!strcmp(ft_strchr("S", 'S'), strchr("S", 'S')) ? OK : KO);
	char	*test7 = (!strcmp(ft_strchr("", '\0'), strchr("", '\0')) ? OK : KO);
	char	*test8 = (!strcmp(ft_strchr("Yo", '\0'), strchr("Yo", '\0')) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strchr :\t%s\t", all_tests);
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

static void	test_strrchr()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_strrchr("Salut lol", 'S'), strrchr("Salut lol", 'S')) ? OK : KO);
	char	*test2 = (!strcmp(ft_strrchr("Salut lol", 'a'), strrchr("Salut lol", 'a')) ? OK : KO);
	char	*test3 = (!strcmp(ft_strrchr("Salut lol", 't'), strrchr("Salut lol", 't')) ? OK : KO);
	char	*test4 = (!strcmp(ft_strrchr("Salut lol", ' '), strrchr("Salut lol", ' ')) ? OK : KO);
	char	*test5 = (!strcmp(ft_strrchr("Salut lol\t\n", '\t'), strrchr("Salut lol\t\n", '\t')) ? OK : KO);
	char	*test6 = (!strcmp(ft_strrchr("S", 'S'), strrchr("S", 'S')) ? OK : KO);
	char	*test7 = (!strcmp(ft_strrchr("", '\0'), strrchr("", '\0')) ? OK : KO);
	char	*test8 = (!strcmp(ft_strrchr("Yo", '\0'), strrchr("Yo", '\0')) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strrchr :\t%s\t", all_tests);
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

static void	test_strncmp()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_strncmp("Salut", "Salut", 5) == strncmp("Salut", "Salut", 5) ? OK : KO);
	char	*test2 = (ft_strncmp("Salut", "Salut", 2) == strncmp("Salut", "Salut", 2) ? OK : KO);
	char	*test3 = (ft_strncmp("Salut mon pote", "Salut ma pote", 7) == strncmp("Salut mon pote", "Salut ma pote", 7) ? OK : KO);
	char	*test4 = (ft_strncmp("Salut mon pote", "Salut ma pote", 12) == 14 ? OK : KO);
	char	*test5 = (ft_strncmp("Salut", "Salut", 13) == strncmp("Salut", "Salut", 13) ? OK : KO);
	char	*test6 = (ft_strncmp("Salut", "Salut", 0) == strncmp("Salut", "Salut", 0) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strncmp :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s", test6);
	sep();
}

static void	test_memchr()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!memcmp(ft_memchr("Salut lol", 'S', 5), memchr("Salut lol", 'S', 5), 10) ? OK : KO);
	char	*test2 = (!memcmp(ft_memchr("Salut lol", 'a', 3), memchr("Salut lol", 'a', 3), 10) ? OK : KO);
	char	*test3 = (!memcmp(ft_memchr("Salut lol", 't', 15), memchr("Salut lol", 't', 15), 10) ? OK : KO);
	char	*test4 = (!memcmp(ft_memchr("Salut lol", ' ', 7), memchr("Salut lol", ' ', 7), 10) ? OK : KO);
	char	*test5 = (!memcmp(ft_memchr("Salut lol\t\n", '\t', 11), memchr("Salut lol\t\n", '\t', 11), 13) ? OK : KO);
	char	*test6 = (!memcmp(ft_memchr("S", 'S', 1), memchr("S", 'S', 1), 2) ? OK : KO);
	char	*test7 = (!memcmp(ft_memchr("", '\0', 1), memchr("", '\0', 1), 1) ? OK : KO);
	char	*test8 = (!memcmp(ft_memchr("Yo", 'o', 2), memchr("Yo", 'o', 2), 3) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK) && !strcmp(test8, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_memchr :\t%s\t", all_tests);
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

static void	test_memcmp()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_memcmp("Salut", "Salut", 5) == memcmp("Salut", "Salut", 5) ? OK : KO);
	char	*test2 = (ft_memcmp("Salut", "Salut", 2) == memcmp("Salut", "Salut", 2) ? OK : KO);
	char	*test3 = (ft_memcmp("Salut", "Salut", 10) == memcmp("Salut", "Salut", 10) ? OK : KO);
	char	*test4 = (ft_memcmp("Salut", "Salut", 0) == memcmp("Salut", "Salut", 0) ? OK : KO);
	char	*test5 = (ft_memcmp("Salut", "Salulol", 7) == 8 ? OK : KO);
	char	*test6 = (ft_memcmp("Salulol", "Salut", 7) == -8 ? OK : KO);
	char	*test7 = (ft_memcmp("", "", 1) == memcmp("", "", 1) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_memcmp :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s | ", test6);
	printf("Test 7 : %s", test7);
	sep();
}

static void	test_strnstr()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_strnstr("Salut, ceci est un test !", "Salut", 15), strnstr("Salut, ceci est un test !", "Salut", 15)) ? OK : KO);
	char	*test2 = (!strcmp(ft_strnstr("Salut, ceci est un test !", "ceci", 15), strnstr("Salut, ceci est un test !", "ceci", 15)) ? OK : KO);
	char	*test3 = (ft_strnstr("Salut, ceci est un test !", "test", 7) == NULL ? OK : KO);
	char	*test4 = (!strcmp(ft_strnstr("Salut, ceci est un test !", " ", 20), strnstr("Salut, ceci est un test !", " ", 20)) ? OK : KO);
	char	*test5 = (ft_strnstr("Salut, ceci est un test !", "Yoshi", 20) == NULL ? OK : KO);
	char	*test6 = (ft_strnstr("Salut, ceci est un test !", "Salut", 0) == NULL ? OK : KO);
	char	*test7 = (!strcmp(ft_strnstr("Salut, ceci est un test !", "\0", 25), strnstr("Salut, ceci est un test !", "\0", 25)) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK) && !strcmp(test7, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strnstr :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s | ", test6);
	printf("Test 7 : %s", test7);
	sep();
}

static void	test_atoi()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (ft_atoi("      +99845abcdf93") == atoi("      +99845abcdf93") ? OK : KO);
	char	*test2 = (ft_atoi("  +   889312") == atoi("  +   889312") ? OK : KO);
	char	*test3 = (ft_atoi("  \t\n  -2387reuhk990") == atoi("  \t\n  -2387reuhk990") ? OK : KO);
	char	*test4 = (ft_atoi("") == atoi("") ? OK : KO);
	char	*test5 = (ft_atoi("  abbc2147483647") == atoi("  abbc2147483647") ? OK : KO);
	char	*test6 = (ft_atoi("\t\t\n\n      2147483647\t\n") == atoi("\t\t\n\n      2147483647\t\n") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK) && !strcmp(test6, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_atoi :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s | ", test5);
	printf("Test 6 : %s", test6);
	sep();
}

static void	test_calloc()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (memcmp(ft_calloc(30, 1), calloc(30, 1), 500) ? OK : KO);
	char	*test2 = (memcmp(ft_calloc(20, 42), calloc(20, 42), 1500) ? OK : KO);
	char	*test3 = (memcmp(ft_calloc(800, 800), calloc(800, 800), 650000) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_calloc :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s", test3);
	sep();
}

static void	test_strdup()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_strdup("Salut"), strdup("Salut")) ? OK : KO);
	char	*test2 = (!strcmp(ft_strdup("Salut mon pote"), strdup("Salut mon pote")) ? OK : KO);
	char	*test3 = (!strcmp(ft_strdup(" "), strdup(" ")) ? OK : KO);
	char	*test4 = (!strcmp(ft_strdup(""), strdup("")) ? OK : KO);
	char	*test5 = (!strcmp(ft_strdup("\0"), strdup("\0")) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK) &&\
		!strcmp(test5, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strdup :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s\n", test4);
	printf("\t\t\tTest 5 : %s", test5);
}

/******************************/
/*********  PART 2  ***********/
/******************************/

static void	test_substr()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*sub1 = "Salut ceci";
	char	*sub2 = " ceci est ";
	char	*sub3 = "";
	char	*test1 = (!strcmp(ft_substr("Salut ceci est un test", 0, 10), sub1) ? OK : KO);
	char	*test2 = (!strcmp(ft_substr("Salut ceci est un test", 5, 10), sub2) ? OK : KO);
	char	*test3 = (!strcmp(ft_substr("Salut ceci est un test", 30, 10), sub3) ? OK : KO);
	char	*test4 = (!strcmp(ft_substr("Salut ceci est un test", 5, 0), sub3) ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_substr :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s", test4);
	sep();
}

static void	test_strjoin()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_strjoin("Salut ceci ", "est un test"), "Salut ceci est un test") ? OK : KO);
	char	*test2 = (!strcmp(ft_strjoin("Salut", "lol"), "Salutlol") ? OK : KO);
	char	*test3 = (!strcmp(ft_strjoin("Salut", ""), "Salut") ? OK : KO);
	char	*test4 = (!strcmp(ft_strjoin("", "Salut"), "Salut") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strjoin :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s", test4);
	sep();
}

static void	test_strtrim()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_strtrim("Salut ceci ", "Sa "), "lut ceci") ? OK : KO);
	char	*test2 = (!strcmp(ft_strtrim("Salut", "Salut"), "") ? OK : KO);
	char	*test3 = (!strcmp(ft_strtrim("Salut", "oiu"), "Salut") ? OK : KO);
	char	*test4 = (!strcmp(ft_strtrim("", "Salut"), "") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_strtrim :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s", test4);
	sep();
}

static void	test_split()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_split("Salut ceci", ' ')[0], "Salut") && !strcmp(ft_split("Salut ceci", ' ')[1], "ceci") ? OK : KO);
	char	*test2 = (!strcmp(ft_split("...abc...def..ghi.", '.')[0], "abc") && !strcmp(ft_split("...abc...def..ghi.", '.')[1], "def") && !strcmp(ft_split("...abc...def..ghi.", '.')[2], "ghi") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_split :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s", test2);
	sep();
}

static void	test_itoa()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	*test1 = (!strcmp(ft_itoa(1984), "1984") ? OK : KO);
	char	*test2 = (!strcmp(ft_itoa(-28562), "-28562") ? OK : KO);
	char	*test3 = (!strcmp(ft_itoa(2147483647), "2147483647") ? OK : KO);
	char	*test4 = (!strcmp(ft_itoa(-2147483648), "-2147483648") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK) && !strcmp(test3, OK) && !strcmp(test4, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_itoa :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s | ", test2);
	printf("Test 3 : %s | ", test3);
	printf("Test 4 : %s", test4);
	sep();
}

static char	f_mapi(unsigned int i, char c)
{
	c -= i;
	return (c);
}

static void	test_mapi()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	str1[] = "abcdefghijklmnopqrstuvwxyz";
	char	*test1 = (!strcmp(ft_strmapi(str1, f_mapi), "aaaaaaaaaaaaaaaaaaaaaaaaaa") ? OK : KO);
	char	str2[] = "";
	char	*test2 = (!strcmp(ft_strmapi(str2, f_mapi), "") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_mapi :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s", test2);
	sep();
}

static void	f_iteri(unsigned int i, char *c)
{
	*c -= i;
}

static void	test_striteri()
{
	char	*OK = "\033[92mOK\033[0m";
	char	*KO = "\033[91mKO\033[0m";
	char	str1[] = "abcdefghijklmnopqrstuvwxyz";
	ft_striteri(str1, f_iteri);
	char	*test1 = (!strcmp(str1, "aaaaaaaaaaaaaaaaaaaaaaaaaa") ? OK : KO);
	char	str2[] = "";
	ft_striteri(str2, f_iteri);
	char	*test2 = (!strcmp(str2, "") ? OK : KO);
	char	*all_tests;

	if (!strcmp(test1, OK) && !strcmp(test2, OK))
		all_tests = OK;
	else
		all_tests = KO;
	printf("ft_striteri :\t%s\t", all_tests);
	printf("Test 1 : %s | ", test1);
	printf("Test 2 : %s", test2);
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
	test_strlcpy();
	test_strlcat();
	test_toupper();
	test_tolower();
	test_strchr();
	test_strrchr();
	test_strncmp();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();
	test_calloc();
	test_strdup();
	printf("\n\n\n\t\t\t || \033[94mPART 2: additional functions\033[0m ||");
	sep();
	test_substr();
	test_strjoin();
	test_strtrim();
	test_split();
	test_itoa();
	test_mapi();
	test_striteri();
	printf("\n\n\n\t\t\033[96mBon... Et pour le reste, y'a la francinette !!\033[0m 😝😝😝\n\n");

	return (0);
}