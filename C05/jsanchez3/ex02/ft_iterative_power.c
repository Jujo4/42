/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 10:56:37 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/25 11:03:16 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int z;

	z = 1;
	if (power < 0)
		return (0);
	while (power != 0)
	{
		z = z * nb;
		power--;
	}
	return (z);
}
