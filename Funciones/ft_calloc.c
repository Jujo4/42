/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:17:32 by jsanchez          #+#    #+#             */
/*   Updated: 2020/07/14 12:41:21 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void	*calloc(size_t count, size_t size)
{
	void *vector;

	vector = NULL;
	if (!(vector = malloc(count * size)))
		return (NULL);
	ft_bzero(vector, count * size);
	return (vector);
}
