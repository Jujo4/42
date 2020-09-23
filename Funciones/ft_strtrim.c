/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:03:28 by jsanchez          #+#    #+#             */
/*   Updated: 2020/09/23 12:15:42 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	z;
	char	*s;

	z = ft_strlen(s1) - 1;
	while (i < ft_strlen(set))
	{
		if (s1[z] == set[i])
		{
			((char *)s1)[z] = '\0';
			i = 0;
		}
		else if (s[0] == set[i])
		{
			((char *)s1)[0] = '\0';
			i = 0;
		}
		i++;
	}
	if (!(s = malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	return (s);
}

int main()
{
	char st1[49] = "aeropuerto";
	char st2[40] = "aeiou";

	printf("%s", ft_strtrim(st1, st2));
}
