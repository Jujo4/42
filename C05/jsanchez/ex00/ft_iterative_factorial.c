/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:53:25 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/25 20:08:38 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int z;

	i = 1;
	z = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		z = z * i;
		i++;
	}
	return (z);
}
