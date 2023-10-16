/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:29:39 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/02 19:37:12 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	if (size > 0 && dlen < size - 1)
	{
		while (src[i] && dlen + i < size - 1)
		{
			dest[dlen + i] = src[i];
			i++;
		}
		dest[dlen + i] = 0;
	}
	if (dlen >= size)
		dlen = size;
	return (slen + dlen);
}
