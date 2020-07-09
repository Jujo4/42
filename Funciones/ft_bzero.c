/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:55:50 by jsanchez          #+#    #+#             */
/*   Updated: 2020/07/09 11:36:48 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void	ft_bzero(void *str, size_t n)
{
	size_t i;

	i = 0;
	while (n--)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}
