/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:03:28 by jsanchez          #+#    #+#             */
/*   Updated: 2020/07/28 13:40:04 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	z;
	char	*s;

	z = strlen(s1) - 1;
	while (i < strlen(set))
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
	if (!(s = malloc(sizeof(char) * strlen(s1) + 1)))
		return (NULL);
	return (s);
}

int main()
{
	char st1[49] = "aeropuerto";
	char st2[40] = "aeiou";

	printf("%s", ft_strtrim(st1, st2));
}
