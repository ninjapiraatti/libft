/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:04:10 by tlouekar          #+#    #+#             */
/*   Updated: 2019/11/02 17:49:34 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft/libft.h"

/*
ft_putstri(void *s, size_t fd)
	{
		char	*str;
		int		len;
		int i;

		str = (char *)s;
		len = (int)fd;
		i = 0;
		puts("Y\n");
		while (i < 5)
		{
			puts("Z\n");
			i++;
		}
	}
*/

t_list *hello(t_list *elem)
{
	t_list *new;

	new = elem;
	new = ft_lstnew("hello", 6);
	return (new);
}

int main(void) {

	int		demomode;

	demomode = 0;
	
	char	anykey[59] = "\033[1;32m-----------------------------\nPress any key.\n\n\033[0m";
	char	str_memset[22] = "DollarDollarBillYaall";
	char	str_bzero[9] = "Suurpone";
	char	str_memcpy_dst[9] = "Suurpone";
	char	str_memcpy_src[9] = "PienXXXX";
	char	str_memccpy_dst[13] = "Vaaranuudele";
	char	str_memccpy_src[10] = "TurvaXXXX";
	char	str_memmove_dst[11] = "Kylpynalle";
	char	str_memmove_src[7] = "Pyllyp";
	char	str_memchr[14] = "Behm ja börh\0";
	//char	str_lstnew[11] = "Listakoiro";
	t_list	*node_lstnew;
	
	if (demomode == 1)
	{
		printf("\033[1;32mOk, here we go! Press any key! What is the 'any' key?:\n\n\033[0m");
		getchar();
	}

	/* ft_memset */

	printf("FT_MEMSET\nSets size_t len characters to int c starting from the beginning of the string.\n\n");
	printf("str_memset before ft_memset: \t\t\t\t\t\t|%s|\n", str_memset);
	ft_memset(str_memset, '$', 6);
	printf("str_memset after ft_memset(str_memset, '$', 6): \t\t\t|%s|\n", str_memset);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}
	
	/* ft_bzero */

	printf("FT_BZERO\nErases size_t n bytes of data starting from void *s (pointer to the memory).\n\n");
	printf("str_bzero before ft_bzero: \t\t\t\t\t\t|%s|\n", str_bzero);
	ft_bzero(str_bzero, 2);
	printf("str_bzero after ft_bzero(str_bzero, 2): \t\t\t\t|%s|\n", str_bzero);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memcpy */

	printf("FT_MEMCPY\nCopies the values of num bytes from the location pointed to by source directly to the memory block pointed to by destination.\n\n");
	printf("str_memcpy_dst before ft_memcpy: \t\t\t\t\t|%s|\n", str_memcpy_dst);
	ft_memcpy(str_memcpy_dst, str_memcpy_src, 4);
	printf("str_memcpy_dst after ft_memcpy('Suurpone', 'PienXXXX', 4): \t\t|%s|\n", str_memcpy_dst);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}
	
	/* ft_memccpy */

	printf("FT_MEMCCPY\nLike memcpy but stops at designated character.\n\n");
	printf("str_memccpy_dst before ft_memccpy: \t\t\t\t\t|%s|\n", str_memccpy_dst);
	ft_memccpy(str_memccpy_dst, str_memccpy_src, 'r', 8);
	printf("str_memccpy_dst after ft_memccpy('Vaaranuudele', 'TurvaXXXX', 'r', 8): \t|%s|\n", str_memccpy_dst);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memmove */

	printf("FT_MEMMOVE\nCopies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().\n\n");
	printf("str_memmove_dst before ft_memmove: \t\t\t\t\t|%s|\n", str_memmove_dst);
	ft_memmove(str_memmove_dst, str_memmove_src, 6);
	printf("str_memmove_dst after ft_memmove('Kylpynalle', 'Pyllyp', 6): \t\t|%s|\n", str_memmove_dst);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memchr */

	printf("FT_MEMCHR\nLike memcpy but stops at designated character.\n\n");
	printf("str_memchr before ft_memchr: \t\t\t\t\t\t|%s|\n", str_memchr);
	ft_memchr(str_memchr, 'b', 10);
	printf("str_memchr_dst after ft_memchr('Behm ja börh', 'b', 10): \t\t|%s|\n", str_memchr);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memcmp */
	/* ft_strlen */
	/* ft_strdup */
	/* ft_strcpy */
	/* ft_strncpy */
	/* ft_strcat */
	/* ft_strncat */
	/* ft_strlcat */
	/* ft_strchr */
	/* ft_strrchr */
	/* ft_strstr */
	/* ft_strnstr */
	/* ft_strcmp */
	/* ft_strncmp */
	/* ft_atoi */
	/* ft_isalpha */
	/* ft_isdigit */
	/* ft_isalnum */
	/* ft_isascii */
	/* ft_isprint */
	/* ft_toupper */
	/* ft_tolower */


	/* ft_memalloc */
	/* ft_memdel */
	/* ft_strnew */
	/* ft_strdel */
	/* ft_strclr */
	/* ft_striter */
	/* ft_striteri */
	/* ft_strmap */
	/* ft_strmapi */
	/* ft_strequ */
	/* ft_strnequ */
	/* ft_strsub */
	/* ft_strjoin */
	/* ft_strtrim */
	/* ft_strtrim */

	printf("FT_STRTRIM\nTrims.\n\n");
	printf("Strtrim of '  koiro  ' \t\t\t\t\t\t\t|%s|\n", ft_strtrim(ft_strdup("  koiro  ")));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}
	/* ft_strsplit */
	/* ft_itoa */
	/* ft_putchar */
	/* ft_putstr */
	/* ft_putendl */
	/* ft_putnbr */
	/* ft_putchar_fd */
	/* ft_putstr_fd */
	/* ft_putendl_fd */	
	/* ft_putnbr_fd */


	/* ft_lstnew */

	printf("FT_LSTNEW\nCreate a brand new linked list.\n\n");
	node_lstnew = ft_lstnew(strdup("Listakoiro"), 11);
	printf("ft_lstnew returns: \t\t\t\t\t\t\t|%s|\n", node_lstnew->content);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_lstdelone */

	/*printf("FT_LSTDELONE\nDelete content from list 'node' with chosen function.\n\n");
	ft_lstdelone(&node_lstnew, ft_putstri);
	printf("Deleted the previously created content so this should be empty: \t\t|%lu|\n", ft_strlen(node_lstnew->content));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}*/

	/* ft_lstdel */
	/* ft_lstadd */
	/* ft_lstiter */
	/* ft_lstmap */

	printf("FT_LSTMAP\nIterates a list lst and applies the function f to each link to create a 'fresh' list using malloc resulting from the successive applications of f. If the allocation fails, the function returns null.\n\n");
	t_list *first;
	t_list *second;
	t_list *third;
	t_list **ret;

	first = ft_lstnew("first", 6);
	second = ft_lstnew("second", 7);
	third = ft_lstnew("third", 6);
	t_list *(*f)(t_list *elem);
	f = hello;
	ret = &first;

	ft_lstadd(ret, second);
	second = ft_lstmap(first, f);
	printf("ft_lstmap returns: \t\t\t\t\t\t\t|%s|\n", second->content);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_isupper */
	/* ft_islower */
	/* ft_nbrlen */
	return (0);
}
