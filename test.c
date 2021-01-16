/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:04:10 by tlouekar          #+#    #+#             */
/*   Updated: 2020/09/30 22:13:08 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "includes/libft.h"

void stringfucker(char *str)
{
	ft_toupper(*str);
}

int main(int argc, char **argv)
{
	char *str;

	str = argv[1];
	ft_striter(str, stringfucker);
	ft_putstr(str);
	return (0);
}