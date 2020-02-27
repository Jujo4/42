/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:03:33 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/24 13:04:54 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	j = 0;
	while (str[i] == '\t' || str[i] == '\n'
	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		j = j * 10 + (str[i] - 48);
		i++;
	}
	if (count % 2 == 1)
		j = j * (-1);
	return (j);
}
