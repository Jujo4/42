/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:39:54 by jsanchez          #+#    #+#             */
/*   Updated: 2020/07/07 13:23:38 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if (((unsigned char)c >= 65 && (unsigned char)c <= 90) ||
	((unsigned char)c >= 97 && (unsigned char)c <= 122))
	{
		return (8);
	}
	return (0);
}
