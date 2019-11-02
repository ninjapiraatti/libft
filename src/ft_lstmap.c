/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:41:55 by tlouekar          #+#    #+#             */
/*   Updated: 2019/11/02 17:40:19 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new = ft_lstnew((f(lst))->content, (f(lst))->content_size);
	tmp = new;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = ft_lstnew((f(lst))->content, (f(lst))->content_size);
		tmp = tmp->next;
	}
	return (new);
}
