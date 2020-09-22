/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:00:45 by jsanchez          #+#    #+#             */
/*   Updated: 2020/09/22 13:12:41 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	len;

	i = 0;
	len = strlen(s1) + strlen(s2);

	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (*s1 != '\0')
		s[i++] = *s1++;
	while (*s2 != '\0')
		s[i++] = *s2++;
	s[i] = '\0';
	return (s);
}
