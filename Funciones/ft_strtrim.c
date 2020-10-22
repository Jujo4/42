/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:26:03 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/22 20:19:56 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	if (s1 == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
		len--;
	s = ft_substr(s1, 0, len + 1);
	return (s);
}
