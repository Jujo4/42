/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:17:32 by jsanchez          #+#    #+#             */
/*   Updated: 2020/09/22 13:14:16 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *vector;

	vector = NULL;
	if (!(vector = malloc(count * size)))
		return (NULL);
	ft_bzero(vector, count * size);
	return (vector);
}
