/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:41:58 by tlouekar          #+#    #+#             */
/*   Updated: 2019/10/28 14:18:32 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = malloc(sizeof(content_size))))
		return (NULL);
	if (!content)
		node->content = NULL;
	if (node)
	{
		node->content = (void *)content;
		node->next = NULL;
	}
	return (node);
}
