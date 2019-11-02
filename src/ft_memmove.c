/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:09:54 by tlouekar          #+#    #+#             */
/*   Updated: 2019/10/28 10:11:08 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;
	char	temp[n];

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	if (!src && !dst)
		return (dst);
	while (i < n)
	{
		temp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cdst[i] = temp[i];
		i++;
	}
	return (dst);
	free(temp);
}
