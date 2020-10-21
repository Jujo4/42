/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:19:58 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/22 00:19:58 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_cont(const char *s, char c)
{
	size_t	i;
	size_t	sc;

	i = 0;
	sc = 0;
	if (s[i] == c)
		sc--;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			sc++;
		i++;
	}
	sc++;
	return (sc);
}

static char	*cpy(const char *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	num;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	num = str_cont(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (num + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = cpy(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = '\0';
	return (tab);
}
