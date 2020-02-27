/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:13:25 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/20 12:56:40 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size != '\0')
	{
		while (z < size && src[z] != '\0')
		{
			dest[i] = src[z];
			z++;
			i++;
		}
	}
	dest[i] = '\0';
	return (i);
}
