/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:12:41 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/25 20:47:13 by jsanchez         ###   ########.fr       */
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
		if ((nb % z == 0)
			return (0);
		z++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
