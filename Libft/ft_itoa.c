/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 00:11:55 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/22 19:49:13 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(long nb)
{
	size_t cnt;

	cnt = 0;
	if (nb == 0)
	{
		cnt++;
		return (cnt);
	}
	if (nb < 0)
	{
		nb *= -1;
		cnt++;
	}
	while (nb > 0)
	{
		nb /= 10;
		cnt++;
	}
	return (cnt);
}

char			*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = count(num);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len] = num % 10 + 48;
		num /= 10;
		len--;
	}
	return (str);
}
