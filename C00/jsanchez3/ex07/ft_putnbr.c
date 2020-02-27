/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 14:18:06 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/17 17:38:32 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char numero;

	if (nb > -2147483648 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			ft_putnbr(nb * (-1));
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			numero = (nb % 10) + 48;
			write(1, &numero, 1);
		}
		else
		{
			numero = nb + 48;
			write(1, &numero, 1);
		}
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}
