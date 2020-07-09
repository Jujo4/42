/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:01:37 by jsanchez          #+#    #+#             */
/*   Updated: 2020/07/07 13:23:44 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (((unsigned char)c >= 65 && (unsigned char)c <= 90) ||
	((unsigned char)c >= 97 && (unsigned char)c <= 122) ||
	((unsigned char)c >= 48 && (unsigned char)c <= 57))
	{
		return (24);
	}
	return (0);
}
