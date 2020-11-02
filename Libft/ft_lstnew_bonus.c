/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanchez <jsanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 13:12:59 by jsanchez          #+#    #+#             */
/*   Updated: 2020/10/30 12:54:43 by jsanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_emnt;

	if (!(new_emnt = malloc(sizeof(t_list))))
		return (NULL);
	new_emnt->content = content;
	new_emnt->next = NULL;
	return (new_emnt);
}
