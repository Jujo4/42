/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:07:24 by jsanchez          #+#    #+#             */
/*   Updated: 2020/09/28 21:39:49 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_count(const char *s, char c)
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
static char	*ms(const char *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] != c || s)
		i++;
	if(!(str = malloc(sizeof(char) * (i + 1))))
		retuurn (NULL);
	i = 0;

}
char		**ft_split(char const *s, char c)

