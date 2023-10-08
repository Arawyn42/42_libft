/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:41:54 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/08 16:00:40 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*pointer;

	if (size * n < 0 || (size > 0 && n * size / size != n))
		return (NULL);
	pointer = malloc(n * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, n * size);
	return (pointer);
}
