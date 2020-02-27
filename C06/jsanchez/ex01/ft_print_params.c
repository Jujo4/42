/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:50:13 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/25 21:19:21 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int z;

	z = 1;
	while (z != argc)
	{
		i = 0;
		while (argv[z][i])
		{
			write(1, &argv[z][i], 1);
			i++;
		}
		write(1, "\n", 1);
		z++;
	}
	return (0);
}
