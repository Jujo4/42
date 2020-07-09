/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:28:06 by jsanchez          #+#    #+#             */
/*   Updated: 2020/07/07 13:32:16 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 97 && (unsigned char)c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
