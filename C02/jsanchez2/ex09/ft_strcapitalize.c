/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 19:48:48 by jsanchez          #+#    #+#             */
/*   Updated: 2020/02/19 14:45:49 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_upcase(char *str)
{
	int i;
	int z;

	i = 0;
	z = i + 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) && (str[z] < 123 && str[z] > 96))
			str[z] = str[z] - 32;
		if ((str[i] > 57 && str[i] < 65) && (str[z] < 123 && str[z] > 96))
			str[z] = str[z] - 32;
		if ((str[i] > 90 && str[i] < 97) && (str[z] < 123 && str[z] > 96))
			str[z] = str[z] - 32;
		if ((str[i] > 122) && (str[z] < 123 && str[z] > 96))
			str[z] = str[z] - 32;
		i++;
		z++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 91 && str[i] > 64)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] > 96 && str[i] < 123)
	{
		str[i] = str[i] - 32;
	}
	ft_upcase(str);
	return (str);
}
