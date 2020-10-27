/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:01:21 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/27 20:49:10 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lista;
	t_list	*e;

	if (!f || !lst)
		return (NULL);
	lista = NULL;
	while (lst)
	{
		if (!(e = ft_lstnew(f(lst->content))))
			ft_lstclear(&lista, del);
		ft_lstadd_back(&lista, e);
		lst = lst->next;
	}
	return (lista);
}
