/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 09:00:50 by tlouekar          #+#    #+#             */
/*   Updated: 2019/11/03 09:26:53 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordlen(char *s, char c, int start)
{
	int		i;

	i = 0;
	while (s[start + i] != c && s[start + i])
		i++;
	return (i);
}
