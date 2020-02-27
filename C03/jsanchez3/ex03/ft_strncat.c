/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:23:49 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/20 12:55:59 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int z;

	i = 0;
	z = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (z < nb && src[z] != '\0')
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
