/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:25:28 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/22 20:42:20 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0 && str[i] != c)
		i--;
	if (str[i] == (unsigned char)c)
		return ((char *)str + i);
	return (NULL);
}
