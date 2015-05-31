/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 16:33:33 by mwilk             #+#    #+#             */
/*   Updated: 2015/05/31 14:38:47 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "inc/libfts.h"

int		main(void)
{
	char s[] = "Yo my name is Fuck You";
	char	*t;
	int		fd = 1;

	t = NULL;
	printf("%s", ft_strcat(s, "HELLO"));
	printf("%i", ft_isalpha('a'));
	printf("%i", ft_isalpha('\\'));
	printf("%i", ft_isalpha('t'));
	printf("%i", ft_isalpha('0'));
	printf("%i", ft_strlen("HELLO"));
	ft_puts("YOOOOOOOOOOOOOO");
	ft_puts("54367829302485476878219981687829194");
	ft_puts("®´ß∂†ƒ¨∫ˆ˜µø≤πµˆø¨∫ˆ†¨ç†¨√∫ˆ");
	ft_puts(NULL);
	ft_puts("");
	ft_puts("\0");
	ft_memset(s, 'c', 3);
	ft_cat(fd);
	ft_puts(s);
	t = ft_strdup(s);
		ft_puts(t);
	ft_memcpy(t, s , 3);
	ft_puts(t);
	return (0);
}
