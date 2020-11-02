/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:01:21 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/30 12:35:23 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_emnt;

	if (!f || !lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (!(new_emnt = ft_lstnew(f(lst->content))))
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, new_emnt);
		lst = lst->next;
	}
	return (new_lst);
}
