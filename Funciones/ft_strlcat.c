/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:21:54 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/22 00:21:54 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t z;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	z = i;
	while (src[i - z] && i + 1 < dstsize)
	{
		dst[i] = src[i - z];
		i++;
	}
	if (z < dstsize)
		dst[i] = '\0';
	return (z + ft_strlen(src));
}
