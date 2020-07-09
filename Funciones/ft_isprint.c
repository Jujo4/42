/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:22:30 by jsanchez          #+#    #+#             */
/*   Updated: 2020/07/07 13:24:05 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if ((unsigned char)c >= 32 && (unsigned char)c <= 126)
	{
		return (24);
	}
	return (0);
}
