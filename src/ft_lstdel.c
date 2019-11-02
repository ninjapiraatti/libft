/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:13:35 by tlouekar          #+#    #+#             */
/*   Updated: 2019/10/30 19:43:05 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates through the links? */

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*next;

	list = *alst;
	while (list)
	{
		next = list->next;
		del(list->content, list->content_size);
		free(list);
		list = NULL;
		list = next;
	}
	*alst = NULL;
}
