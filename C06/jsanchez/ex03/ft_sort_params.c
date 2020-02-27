/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 13:34:50 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/26 18:09:08 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_swap(char **argv)
{
	
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i][j])
	{
		while (argv[i][j] == argv[i + 1][j])
		{
			if (argv[i][j] > argv[i + 1][j])
				ft_swap();
			j++;
		}
		i++;
	}
}