/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:04:15 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/20 12:56:20 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int z;

	i = 0;
	if (to_find[z] == '\0')
		return (str);
	while (str[i])
	{
        z = 0;
		while ((str[i + z] == to_find[z]) && (to_find[z] != '\0'))
		{
			z++;
			if (to_find[z] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
