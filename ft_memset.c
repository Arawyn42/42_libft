/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:24:08 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/02 17:56:09 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest)
		return (NULL);
	while (i < n)
	{
		*(unsigned char*)(dest + i) = (unsigned char)value;
		i++;
	}
	return (dest);
}
