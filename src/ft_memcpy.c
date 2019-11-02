/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:26:55 by tlouekar          #+#    #+#             */
/*   Updated: 2019/10/29 19:18:05 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;

	i = 0;
	if (!n || dst == src)
		return (dst);
	cdst = (char *)dst;
	csrc = (char *)src;
	if (cdst && csrc)
	{
		while (i < n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
