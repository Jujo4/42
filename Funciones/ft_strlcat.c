/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:53:41 by jsanchez          #+#    #+#             */
/*   Updated: 2020/09/24 20:25:28 by jsanchez         ###   ########.fr       */
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






