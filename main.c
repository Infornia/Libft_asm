/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 04:27:13 by vchaillo          #+#    #+#             */
/*   Updated: 2015/06/01 18:29:29 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int ac, char **av)
{
	int		c;

	(void)ac;
	(void)av;
/*
**	Test of function ft_isdigit
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_isdigit(c) != isdigit(c))
		{
			printf("ft_isdigit \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_isdigit(c) == isdigit(c))
		printf("ft_isdigit \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_isascii
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_isascii(c) != isascii(c))
		{
			printf("ft_isascii \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_isascii(c) == isascii(c))
		printf("ft_isascii \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_isprint
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_isprint(c) != isprint(c))
		{
			printf("ft_isprint \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_isprint(c) == isprint(c))
		printf("ft_isprint \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_isalpha
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_isalpha(c) != isalpha(c))
		{
			printf("ft_isalpha \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_isalpha(c) == isalpha(c))
		printf("ft_isalpha \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_isalnum
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_isalnum(c) != isalnum(c))
		{
			printf("ft_isalnum \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_isalnum(c) == isalnum(c))
		printf("ft_isalnum \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_islower
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_islower(c) != islower(c))
		{
			printf("ft_islower \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_islower(c) == islower(c))
		printf("ft_islower \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_isupper
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_isupper(c) != isupper(c))
		{
			printf("ft_isupper \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_isupper(c) == isupper(c))
		printf("ft_isupper \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_toupper
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_toupper(c) != toupper(c))
		{
			printf("ft_toupper \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_toupper(c) == toupper(c))
		printf("ft_toupper \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_tolower
*/
	for (c = 0; c < 1000; c++)
	{
		if (ft_tolower(c) != tolower(c))
		{
			printf("ft_tolower \033[31;1mKO\033[0m :(\n");
			break;
		}
	}
	if (ft_tolower(c) == tolower(c))
	printf("ft_tolower \033[32mOK\033[0m :)\n");	
/*
**	Test of function ft_bzero
*/
	char	test[12];
	
	test[6] = '1';
	ft_bzero(test, sizeof(char) * 12);
	if (test[6] != 0)
		printf("ft_bzero   \033[31;1mKO\033[0m :(\n");
	else
		printf("ft_bzero   \033[32mOK\033[0m :)\n");
/*
**	Test of function ft_puts
*/
	ft_puts("ft_puts    \033[32mOK\033[0m :)\n");
	ft_puts("aaa\n(null)\n");
/*
**	Test of function ft_strcat
*/
	char	s1[3]="Hi";
	char	s2[4]=" 42";

	printf("ft_strcat  \033[32mOK\033[0m :)");
	printf("	s1 = %s", s1);
	printf("		s2 = %s", s2);
//	printf("strcat result = %s", strcat(s1, s2));
	printf("				ft_strcat result = %s\n", ft_strcat(s1, s2));
/*
**	Test of function ft_strlen
*/
	char	*s3="Une phrase";
	size_t	a;
	size_t	b;

	a = strlen(s3);
	b = ft_strlen(s3);
	if (a == b)
		printf("ft_strlen  \033[32mOK\033[0m :)");
	printf("	strlen return = %d", (int)a);
	printf("					ft_strlen return = %d\n", (int)b);
/*
**	Test of function ft_memset
*/
	char	str[7]="Coucou";

	printf("ft_memset  \033[32mOK\033[0m :)");
	printf("	str avant memset = %s", str);
	ft_memset(str, 'v', 7);
	printf("				str apres memset 'v'= %s", str);
/*
**	Test of function ft_memcpy
*/
	char	dst[8]="42 42 42";
	char	src[8]="Hellooo";

	printf("ft_memcpy  \033[32mOK\033[0m :)");
	printf("	avant ft_memcpy : src = %s et dst = %s", src, dst);
	ft_memcpy(dst, src, 5);
	printf("		apres ft_memcpy : src = %s et dst = %s\n", src, dst);

	printf("ft_strcpy  \033[32mOK\033[0m :)");
	printf("	avant ft_strcpy : src = %s et dst = %s", src, dst);
	ft_strcpy(dst, src);
	printf("		apres ft_strcpy : src = %s et dst = %s\n", src, dst);

	printf("ft_strncpy  \033[32mOK\033[0m :)");
	printf("	avant ft_strncpy : src = %s et dst = %s", src, dst);
	ft_strncpy(dst, "FUCK YOU", 5);
	printf("		apres ft_strncpy : src = %s et dst = %s\n", src, dst);
/*
**	Test of function ft_strdup
*/
	char * tata = strdup("cool");
	char * toto = ft_strdup(tata);

	printf("ft_strdup  \033[32mOK\033[0m :)");
    printf("	original string : [%p] [%s]", tata, tata);
    printf("		duplicate string : [%p] [%s]\n", toto, toto);
/*
**	Test of function ft_cat
*/
 	for (c = -100; c < 100; c++)
	{
		if (ft_abs(c) != abs(c))
		{
			printf("ft_abs \033[31;1mKO\033[0m :(\n");
			break;
		}
	}   
	if (ft_abs(c) == abs(c))
		printf("ft_abs \033[32mOK\033[0m :)\n");	

	char * caca = strdup("abcdefghijklmnopqrstuvwxyz");
	char * coco = strchr(caca, 'd');
	char * cucu = ft_strchr(caca, 'd');

	printf("ft_strchr  \033[32mOK\033[0m :)\n");
	printf("	ft_strchr d: Mine = %s et Yours = %s\n", coco, cucu);
	coco = strchr(caca, 'u');
	cucu = ft_strchr(caca, 'u');
	printf("	ft_strchr u: Mine = %s et Yours = %s\n", coco, cucu);

	printf("ft_memalloc  \033[32mOK\033[0m :)\n");
	char *popo = (char *)ft_memalloc(5);
	ft_puts(popo);
	popo[0] = 'u';
	popo[4] = 'u';
	ft_puts(popo);
	ft_puts(&popo[3]);
	ft_puts(&popo[4]);

	printf("ft_strnew  \033[32mOK\033[0m :)\n");
	char *papa = ft_strnew(5);
	ft_puts(papa);
	papa[0] = 'v';
	papa[4] = 'v';
	ft_puts(papa);

	printf("ft_putchar  \033[32mOK\033[0m :)\n");
	ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	ft_putchar('\0');
	return (0);
}
