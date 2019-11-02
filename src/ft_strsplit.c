/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:34:01 by tlouekar          #+#    #+#             */
/*   Updated: 2019/11/03 00:13:15 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	count = 0;
	while (i < len)
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && i < len)
				i++;
		}
		i++;
	}
	return ((int)count);
}

static int	wordlen(char *s, char c, int start)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[start + i] != c && s[start + i])
	{
		i++;
		len++;
	}
	i = 0;
	return (len);
}

static char	**make_dull_null(char **s, int i)
{
	if (i == 0 && !s[1])
		return (s);
	if (i == 0)
		s[i + 1] = NULL;
	else
		s[i] = NULL;
	return (s);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**splits;

	i = -1;
	j = 0;
	if ((splits = (char **)malloc((sizeof(char *) * count((char *)s, c) + 1))))
	{
		while ((i++ < count((char *)s, c) - 1) || (i == 0))
		{
			while (s[j] == c)
				j++;
			if ((splits[i] = ft_strnew(wordlen((char *)s, c, j))))
			{
				k = 0;
				while (k < wordlen((char *)s, c, (j - k)))
					splits[i][k++] = s[j++];
			}
		}
	}
	else
		return (NULL);
	return (make_dull_null(splits, i));
}
