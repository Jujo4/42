/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:01:09 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/27 20:41:05 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pr;

	if (lst && new)
	{
		pr = *lst;
		if (pr == NULL)
			*lst = new;
		else
		{
			while (pr->next)
				pr = pr->next;
			pr->next = new;
		}
	}
}
