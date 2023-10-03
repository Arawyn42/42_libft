/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:08:31 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/03 13:31:39 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	if (!find)
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == find[j] && i + j < n && str[i + j] && find[j])
			j++;
		if (!find[j])
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
