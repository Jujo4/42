/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:29:04 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/13 20:20:03 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char a;
	char z;

	a = 'a';
	z = 'z';
	while (z >= a)
	{
		write(1, &z, 1);
		z--;
	}
}
