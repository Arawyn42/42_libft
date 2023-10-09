/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:55:24 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/09 21:19:27 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_word_dup(const char *src, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (src[len] && src[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (*src && *src != c)
		word[i++] = *src++;
	word[i] = '\0';
	return (word);
}

static void	ft_free_words(char **words, int count)
{
	while (count >= 0)
	{
		free(words[count]);
		count--;
	}
	free(words);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	res = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		res[i] = ft_word_dup(s, c);
		if (!res[i])
		{
			ft_free_words(res, i - 1);
			return (NULL);
		}
		s += ft_strlen(res[i++]);
	}
	res[i] = NULL;
	return (res);
}
