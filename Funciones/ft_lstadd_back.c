/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:01:09 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/30 12:41:13 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_emnt;

	if (lst && new)
	{
		new_emnt = *lst;
		if (new_emnt == NULL)
			*lst = new;
		else
		{
			while (new_emnt->next)
				new_emnt = new_emnt->next;
			new_emnt->next = new;
		}
	}
}
