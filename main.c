/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:04:10 by tlouekar          #+#    #+#             */
/*   Updated: 2019/12/02 09:27:32 by tlouekar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "src/includes/libft.h"

void ft_putstri(void *s, size_t n)
{
	char	*str;
	size_t	len;
	size_t 	i;

	str = (char *)s;
	len = n;
	i = 0;
	while (i < n - 3)
	{
		str[i] = 'X';
		i++;
	}
}

void		ft_striter_toupper(char *s)
{
	if ((int)*s > 96 && (int)*s < 123)
		*s = *s - 32;
}

void		ft_striteri_toupper(unsigned int i, char *s)
{
	if ((int)*s > 96 && (int)*s < 123)
		*s = *s - 32 - i;
}

char		ft_strmap_toupper(char c)
{
	c = 67;
	return (c);
}

char		ft_strmapi_toupper(unsigned int i, char c)
{
	c = c + i;
	return (c);
}

t_list *hello(t_list *elem)
{
	t_list *new;

	new = elem;
	new = ft_lstnew(elem->content, elem->content_size);
	return (new);
}

void hullo(t_list *elem)
{
	elem->content = "sdf";
}

int main(void) {

	int		demomode;

	demomode = 1;
	
	char	anykey[59] = "\033[1;32m-----------------------------\nPress any key.\n\n\033[0m";
	char	str_memset[22] = "DollarDollarBillYaall";
	char	str_bzero[9] = "Suurpone";
	char	*str_memalloc;
	char	str_memcpy_dst[9] = "Suurpone";
	char	str_memcpy_src[9] = "PienXXXX";
	char	str_memccpy_dst[13] = "Vaaranuudele";
	char	str_memccpy_src[10] = "TurvaXXXX";
	char	str_memmove_dst[11] = "Kylpynalle";
	char	str_memmove_src[7] = "Pyllyp";
	char	str_memchr[13] = "Behm ja borh";
	char	str_memcmp1[5] = "Behm";
	char	str_memcmp2[5] = "Börh";
	char	str_lstnew[11] = "Listakoiro";
	char	str_strrchr[] = "";
	char	str_strstr1[21] = "koirokissekylpynalle";
	char	str_strstr2[6] = "kisse";
	char	str_strnstr1[21] = "koirokissekylpynalle";
	char	str_strnstr2[6] = "kisse";
	char	str_strcmp1[6] = "kisse";
	char	str_strcmp2[6] = "kisse";
	char	str_strncmp1[6] = "koiro";
	char	str_strncmp2[6] = "koiro";
	char	str_strcpy1[13] = "Turvanuudele";
	char	str_strcpy2[6] = "Vaara";
	char	str_strncpy1[13] = "Turvanuudele";
	char	str_strncpy2[6] = "Vaara";
	char	str_strcat1[6] = "Kylpy";
	char	str_strcat2[6] = "nalle";
	char	str_strncat1[6] = "Kylpy";
	char	str_strncat2[6] = "nalle";
	char	str_strlcat1[6] = "Vaara";
	char	str_strlcat2[8] = "nuudele";
	char	str_strchr[9] = "nuuxdele";
	char	str_strsplit[] = "xxx";
	char	**arr_strsplit;
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
	printf("str_memmove_dst after ft_memmove('Kylpynalle', 'Pal', 6): \t\t|%s|\n", str_memmove_dst);
	int memmove_size = 128 * 1024 * 1024;
	printf("Trying to break ft_memmove with really big size.\n");
	char *memmove_dst = (char *)malloc(sizeof(char) * memmove_size);
	char *memmove_data = (char *)malloc(sizeof(char) * memmove_size);
	ft_memmove(memmove_dst, memmove_data, memmove_size);
	printf("Result: \t\t\t\t\t\t\t\t|%s|\n", memmove_dst);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memchr */
	printf("FT_MEMCHR\nLike memcpy but stops at designated character.\n\n");
	printf("str_memchr before ft_memchr: \t\t\t\t\t\t|%s|\n", str_memchr);
	printf("str_memchr_dst after ft_memchr('Behm ja börh', 'b', 10): \t\t|%p|\n", ft_memchr(str_memchr, 'b', 10));
	printf("str_memchr_dst after memchr('Behm ja börh', 'b', 10): \t\t\t|%p|\n", memchr(str_memchr, 'b', 10));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memcmp */
	printf("FT_MEMCMP\nCompares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.\n\n");
	printf("ft_memcmp('Behm', 'Börh', 4): \t\t\t\t\t\t|%d|\n", ft_memcmp(str_memcmp1, str_memcmp2, 4));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strlen */
	printf("FT_STRLEN\nYeah how long is it.\n\n");
	printf("ft_strlen('BehmBörh'): \t\t\t\t\t\t\t|%lu|\n", ft_strlen("BehmBorh"));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strdup */
	printf("FT_STRDUP\nDuplicates a string to new string. And returns pointer and so on.\n\n");
	printf("ft_strdup('BehmBorh'): \t\t\t\t\t\t\t|%s|\n", ft_strdup("BehmBorh"));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strcpy */
	printf("FT_STRCPY\nCopies the string src to dst (including the terminating `\\0' character.)\n\n");
	printf("ft_strcpy('Turvanuudele', 'Vaara'): \t\t\t\t\t|%s|\n", ft_strcpy(str_strcpy1, str_strcpy2));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strncpy */
	printf("FT_STRNCPY\nMuch like ft_strcpy but copies only n chars. If src is less than len characters long, the remainder of dst is filled with `\\0' characters.  Otherwise, dst is not terminated.\n\n");
	printf("ft_strncpy('Turvanuudele', 'Vaara', 3): \t\t\t\t|%s|\n", ft_strncpy(str_strncpy1, str_strncpy2, 3));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strcat */
	printf("FT_STRCAT\nAppends a copy of s2 to the end of s1.\n\n");
	printf("ft_strcat('Kylpy', 'nalle'): \t\t\t\t\t\t|%s|\n", ft_strcat(str_strcat1, str_strcat2));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strncat */
	printf("FT_STRNCAT\nLike ft_strcat but only appends n chars.\n\n");
	printf("ft_strncat('Kylpy', 'nalle', 3): \t\t\t\t\t|%s|\n", ft_strncat(str_strncat1, str_strncat2, 3));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strlcat */
	printf("FT_STRLCAT\nLike ft_strncat but better. returns the length of src + dst.\n\n");
	printf("ft_strlcat('Vaara', 'nuudele', 3): \t\t\t\t\t|%lu|\n", ft_strlcat(str_strlcat1, str_strlcat2, 5));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strchr */
	printf("FT_STRCHR\nLocates the first c and returns pointer.\n\n");
	printf("str_strchr before ft_strchr: \t\t\t\t\t\t|%s|\n", str_strchr);
	printf("str_strchr after ft_strchr(str_strchr, 'x') \t\t\t\t|%s|\n", ft_strchr(str_strchr, 'x'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strrchr */
	printf("FT_STRRCHR\nLike strchr but takes it from behind.\n\n");
	printf("str_strrchr before ft_strrchr: \t\t\t\t\t\t|%s|\n", str_strrchr);
	printf("str_strrchr after ft_strrchr(str_strrchr, '\\0') \t\t\t|%s|\n", ft_strrchr(str_strrchr, '\0'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strstr */
	printf("FT_STRSTR\nLocates the needle in the haystack. Booyah!\n\n");
	printf("ft_strstr 'kisse' from 'koirokissekylpynalle') \t\t\t|%s|\n", ft_strstr(str_strstr1, str_strstr2));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strnstr */
	printf("FT_STRNSTR\nLocates the needle in the haystack. No more than len chars are searched!\n\n");
	printf("ft_strnstr 'kisse' from 'koirokissekylpynalle', 5) \t\t\t|%s|\n", ft_strnstr(str_strnstr1, str_strnstr2, 5));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strcmp */
	printf("FT_STRCMP\nCompares two strings lexiographically.\n\n");
	printf("ft_strcmp 'kisse' and 'kisse') \t\t\t|%d|\n", ft_strcmp(str_strcmp1, str_strcmp2));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strncmp */
	printf("FT_STRNCMP\nCompares two strings lexiographically.\n\n");
	printf("ft_strncmp 'kisse' and 'kisse', 2) \t\t\t|%d|\n", ft_strncmp(str_strncmp1, str_strncmp2, 2));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_atoi */
	printf("FT_ATOI\nOh the good old atoi.\n\n");
	printf("ft_atoi '-2147483648') \t\t\t|%d|\n", ft_atoi("-2147483648"));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_isalpha */
	printf("FT_ISALPHA\nIs the character an alphabet?\n\n");
	printf("ft_isalpha c) \t\t\t|%d|\n", ft_isalpha('c'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_isdigit */
	printf("FT_ISDIGIT\nIs the character a digit?\n\n");
	printf("ft_isdigit c) \t\t\t|%d|\n", ft_isdigit('c'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_isalnum */
	printf("FT_ISALNUM\nIs the character a digit or alphabet?\n\n");
	printf("ft_isalnum c) \t\t\t|%d|\n", ft_isalnum('c'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_isascii */
	printf("FT_ISASCII\nIs the character in ascii range?\n\n");
	printf("ft_isascii c) \t\t\t|%d|\n", ft_isascii('c'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_isprint */
	printf("FT_ISPRINT\nIs the character printable?\n\n");
	printf("ft_isprint c) \t\t\t|%d|\n", ft_isprint('c'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_toupper */
	printf("FT_TOUPPER\nMake the character big. Make the character biggeeeer!\n\n");
	printf("ft_toupper c) \t\t\t|%d|\n", ft_toupper('c'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_tolower */
	printf("FT_TOLOWER\nMake the character lowercase.\n\n");
	printf("ft_tolower c) \t\t\t|%d|\n", ft_tolower('c'));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memalloc */
	printf("FT_MEMALLOC\nAllocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.\n\n");
	str_memalloc = ft_memalloc(20);
	str_memalloc[0] = 'L';
	printf("If memory allocated, you should see an L. \t\t\t|%s|\n", str_memalloc);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_memdel */
	printf("FT_MEMDEL\nTakes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to null.\n\n");
	ft_memdel((void **)&str_memalloc);
	printf("If memory deleted, you should NOT see an L. \t\t\t|%s|\n", str_memalloc);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strnew */
	printf("FT_STRNEW\nAllocates (with malloc(3)) and returns a “fresh” string ending with ’\\0’. Each character of the string is initialized at ’\\0’. If the allocation fails the function returns null.\n\n");
	char *str_strnew;
	str_strnew = ft_strnew(5);
	printf("If strnew went ok, we should get an address: \t\t\t|%p|\n", str_strnew);
	str_strnew = "Liske";
	printf("Now, we put letters in the string to get 'Liske': \t\t\t|%s|\n", str_strnew);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strdel */
	printf("FT_STRDEL\nTakes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to null.\n\n");
	char *str_strdel;
	str_strdel = ft_memalloc(5);
	str_strdel[0] = 'L';
	ft_strdel((char **)&str_strdel);
	if(!str_strdel)
		printf("Successfully deleted Liske\n");
	else
		printf("Liske NOT deleted. FAIL!\n");
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strclr */
	printf("FT_STRCLR\nSets every character of the string to the value ’\\0’.\n\n");
	char *str_strclr;
	str_strclr = ft_memalloc(5);
	str_strclr[0] = 'L';
	printf("Liske before ft_strclr. We should get an L: \t\t\t|%s|\n", str_strclr);
	ft_strclr(str_strclr);
	printf("If strclr went ok, we should get nothing: \t\t\t\t|%s|\n", str_strclr);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_striter */
	printf("FT_STRITER\nApplies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.\n\n");
	char str_striter[18] = "Kaulahuolipaaryne";
	printf("String before ft_striter. We should get 'Kaulahuolipaaryne': \t\t\t|%s|\n", str_striter);
	ft_striter(str_striter, ft_striter_toupper);
	printf("String after ft_striter. We should get 'KAULAHUOLIPAARYNE': \t\t\t|%s|\n", str_striter);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_striteri */
	printf("FT_STRITERI\nApplies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.\n\n");
	char str_striteri[18] = "Kaulahuolipaaryne";
	printf("String before ft_striteri. We should get 'Kaulahuolipaaryne': \t\t\t|%s|\n", str_striteri);
	ft_striteri(str_striteri, ft_striteri_toupper);
	printf("String after ft_striteri. We should get 'K@SI=COHD@F65EK?5': \t\t\t|%s|\n", str_striteri);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}
	
	/* ft_strmap */
	printf("FT_strmap\nApplies the function f to each character of the string given as argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.\n\n");
	char str_strmap[18] = "Suurpone";
	char *str_strmap2;
	printf("String before ft_strmap. We should get 'Suurpone': \t\t\t\t|%s|\n", str_strmap);
	str_strmap2 = ft_strmap(str_strmap, ft_strmap_toupper);
	printf("String after ft_strmap. We should get 'CCCCCCC': \t\t\t|%s|\n", str_strmap2);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strmapi */
	printf("FT_strmapi\nApplies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.\n\n");
	char str_strmapi[13] = "Turvanuudele";
	char *str_strmapi2;
	printf("String before ft_strmapi. We should get 'Turvanuudele': \t\t\t\t|%s|\n", str_strmapi);
	str_strmapi2 = ft_strmapi(str_strmapi, ft_strmapi_toupper);
	printf("String after ft_strmapi. We should get 'Tvtyes{|lnvp': \t\t\t|%s|\n", str_strmapi2);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strequ */
	printf("FT_STREQU\nLexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.\n\n");
	char str_strequ1[13] = "Turvanuudele";
	char str_strequ2[13] = "Vaaranuudele";
	printf("Strings: \t\t\t\t|%s|%s|\n", str_strequ1, str_strequ2);
	printf("Are the strings the same: \t\t\t|%d|\n", ft_strequ(str_strequ1, str_strequ2));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strnequ */
	printf("FT_STRNEQU\nLexicographical comparison between s1 and s2 up to n characters or until a ’\\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.\n\n");
	char str_strnequ1[13] = "VaaranuudeXX";
	char str_strnequ2[13] = "Vaaranuudele";
	printf("Strings: \t\t\t\t|%s|%s|\n", str_strnequ1, str_strnequ2);
	printf("Are the strings the same (up to 8): \t\t\t|%d|\n", ft_strnequ(str_strnequ1, str_strnequ2, 5));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strsub */
	printf("FT_STRSUB\nAllocates (with malloc(3)) and returns a “fresh” substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren’t refering to a valid substring, the behavior is undefined. If the allocation fails, the function returns null.\n\n");
	char str_strsub1[13] = "VaaranuudeXX";
	char *str_strsub2;
	printf("String: \t\t\t\t|%s|\n", str_strsub1);
	str_strsub2 = ft_strsub(str_strsub1, 5, 7);
	printf("Substringed string from 5: \t\t\t|%s|\n", str_strsub2);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strjoin */
	printf("FT_STRJOIN\nAllocates (with malloc(3)) and returns a “fresh” string ending with ’\\0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.\n\n");
	char str_strjoin1[6] = "Kylpy";
	char str_strjoin2[6] = "Nalle";
	char *str_strjoin3;
	printf("Strings: \t\t\t\t|%s|%s|\n", str_strjoin1, str_strjoin2);
	str_strjoin3 = ft_strjoin(str_strjoin1, str_strjoin2);
	printf("I joined them in death: \t\t\t|%s|\n", str_strjoin3);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_strtrim */
	printf("FT_STRTRIM\nTrims.\n\n");
	printf("Strtrim of '  koiro  ' \t\t\t\t\t\t\t|%s|\n", ft_strtrim(ft_strdup("  koiro  ")));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}
	/* ft_strsplit */
	printf("FT_STRSPLIT\nsplits.\n\n");
	arr_strsplit = ft_strsplit(str_strsplit, 'x');
	printf("Strsplit[0]: \t\t\t\t\t\t\t\t|%s|\n", arr_strsplit[0]);
	//printf("Strsplit[1]: \t\t\t\t\t\t\t|%s|\n", arr_strsplit[1]);
	//printf("Strsplit[2]: \t\t\t\t\t\t\t|%s|\n", arr_strsplit[2]);
	//printf("Strsplit[3]: \t\t\t\t\t\t\t|%s|\n", arr_strsplit[3]);
	//printf("Strsplit[4]: \t\t\t\t\t\t\t|%s|\n", arr_strsplit[4]);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_itoa */
	printf("FT_ITOA\nAllocate (with malloc(3)) and returns a “fresh” string ending with ’\\0’ representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns nullllllll.\n\n");
	printf("Min int all itoaed: \t\t\t|%s|\n", ft_itoa(-214783648));
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}
	/* ft_putchar */
	printf("FT_PUTCHAR\nIt's just the ft_putchar baby.\n\n");
	printf("Put an X:\n");
	ft_putchar('X');
	ft_putchar('\n');
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_putstr */
	printf("FT_PUTSTR\nAnd the ft_putstr baby.\n\n");
	printf("Put a string 'Suurnalle':\n");
	ft_putstr("Suurnalle\n");
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_putendl */
	printf("FT_PUTENDL\nLike ft_putstr but now with automatic linebreak! Get yours now for 9.95!\n\n");
	printf("Put strings 'Suur' and  'nalle':\n");
	ft_putendl("Suur");
	ft_putendl("nalle");
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_putnbr */
	printf("FT_PUTNBR\nIt's just the ft_putnbr baby.\n\n");
	printf("Put an 8:\n");
	ft_putnbr(8);
	ft_putchar('\n');
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_putchar_fd */
	printf("FT_PUTCHAR_FD\nIt's just the ft_putchar_fd baby.\n\n");
	printf("Put an X:\n");
	ft_putchar_fd('X', 2);
	ft_putchar('\n');
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}
	/* ft_putstr_fd */
	printf("FT_PUTSTR_FD\nAnd the ft_putstr_fd baby.\n\n");
	printf("Put a string 'Suurnalle':\n");
	ft_putstr_fd("Suurnalle\n", 2);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_putendl_fd */
	printf("FT_PUTENDL_FD\nLike ft_putstr but now with automatic linebreak! Get yours now for 9.95!\n\n");
	printf("Put strings 'Suur' and  'nalle':\n");
	ft_putendl_fd("Suur", 2);
	ft_putendl_fd("nalle", 2);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}	

	/* ft_putnbr_fd */
	printf("FT_PUTNBR_FD\nIt's just the ft_putnbr_fd baby.\n\n");
	printf("Put an 8:\n");
	ft_putnbr_fd(8, 2);
	ft_putchar('\n');
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_lstnew */
	printf("FT_LSTNEW\nCreate a brand new linked list.\n\n");
	node_lstnew = ft_lstnew(str_lstnew, 11);
	printf("ft_lstnew returns: \t\t\t\t\t\t\t|%s|\n", node_lstnew->content);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_lstdelone */
	printf("FT_LSTDELONE\nDelete content from list 'node' with chosen function This function does not test if next was deleted or not.\n\n");
	ft_lstdelone(&node_lstnew, ft_putstri);
	if (!node_lstnew)
		printf("Node deleted\n");
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_lstdel and ft_lstadd */
	printf("FT_LSTDEL\nTakes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to null (quite similar to the function ft_memdel from the mandatory part).\n\n");
	t_list	*lst_lstdel;
	lst_lstdel = NULL;
	int		i;

	i = 0;
	lst_lstdel = ft_lstnew(ft_strdup("koiro"), 5);
	while (i < 6)
	{
		ft_lstadd(&lst_lstdel, ft_lstnew(ft_strdup("Borem"), 5));
		i++;
	}
	ft_lstdel(&lst_lstdel, ft_putstri);
	if (!lst_lstdel)
		printf("Node deleted\n");
	else
		printf("Node NOT deleted\n");
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_lstiter */
	printf("FT_LSTITER\nIterates the list lst and applies the function f to each link.\n\n");
	t_list	*lst_lstiter;
	int		j;
	void (*f_lstiter)(t_list *elem);

	lst_lstiter = NULL;
	j = 0;
	f_lstiter = hullo;	

	while (j < 6)
	{
		ft_lstadd(&lst_lstiter, ft_lstnew(ft_strdup("Borem"), 5));
		j++;
	}
	ft_lstiter(lst_lstiter, f_lstiter);
	printf("ft_lstiter returns: \t\t\t\t\t\t\t|%s|\n", lst_lstiter->content);
	printf("ft_lstiter returns: \t\t\t\t\t\t\t|%s|\n", lst_lstiter->next->content);
	printf("ft_lstiter returns: \t\t\t\t\t\t\t|%s|\n", lst_lstiter->next->next->content);
	if (demomode == 1)
	{
		printf("%s", anykey);
		getchar();
	}

	/* ft_lstmap */
	printf("FT_LSTMAP\nIterates a list lst and applies the function f to each link to create a 'fresh' list using malloc resulting from the successive applications of f. If the allocation fails, the function returns null.\n\n");
	t_list *first;
	t_list *second;
	t_list *(*f)(t_list *elem);

	first = ft_lstnew("first", 6);
	first->next = ft_lstnew("second", 7);
	first->next->next = ft_lstnew("third", 6);
	f = hello;
	second = ft_lstmap(first, f);
	printf("ft_lstmap returns: \t\t\t\t\t\t\t|%s|\n", second->content);
	printf("ft_lstmap returns: \t\t\t\t\t\t\t|%s|\n", second->next->content);
	printf("ft_lstmap returns: \t\t\t\t\t\t\t|%s|\n", second->next->next->content);
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
