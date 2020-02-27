/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 20:05:38 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/25 21:05:12 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int z;

	z = 2;
	if (nb <= 1)
		return (0);
	while (z <= nb / z)
	{
		if (nb % z == 0)
			return (0);
		z++;
	}
	return (1);
}