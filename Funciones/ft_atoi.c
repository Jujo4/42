/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:02:04 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/22 20:00:52 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	signal;
	int		nb;

	signal = 1;
	i = 0;
	nb = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') ||
	(str[i] == '\r') || (str[i] == '\f') || (str[i] == ' '))
		i++;
	if ((str[i] == 45) || (str[i] == 43))
	{
		if (str[i] == 45)
			signal *= -1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * signal);
}
