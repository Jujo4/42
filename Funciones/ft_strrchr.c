/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:56:04 by jsanchez          #+#    #+#             */
/*   Updated: 2020/09/23 13:34:40 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0 && str[i] != c)
	{
		i--;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)str + i);
	return (NULL);
}
