/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 11:54:19 by jsanchez          #+#    #+#             */
/*   Updated: 2020/06/30 12:25:40 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	aux[n - 1];

	i = 0;
	while (i < n)
	{
		aux[i] = ((char *)src)[i];
		i++;
	}

	aux[i] = '\0';
	i = 0;
	while (aux[i] != '\0')
	{
		((char *)dest)[i] = aux[i];
		i++;
	}
	return (dest);
}
