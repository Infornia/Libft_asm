/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 16:33:33 by mwilk             #+#    #+#             */
/*   Updated: 2015/05/31 14:50:37 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "inc/libfts.h"

int		main(int ac, char **av)
{
(void)ac;
	char s[] = "Yo my name is Fuck You";
	char t[] = "Yo my name is Like You";
	char *ret;
	int fd=1;

	fd = open(av[1], O_RDONLY);
	ft_puts("YOOOOOOOOOOOOOO");
	ft_puts("54367829302485476878219981687829194");
	ft_puts("®´ß∂†ƒ¨∫ˆ˜µø≤πµˆø¨∫ˆ†¨ç†¨√∫ˆ");
	ft_puts(NULL);
	ft_memset(s, 'c', 3);
	ft_cat(fd);
	ft_puts(s);
	ft_memcpy(t, s , 2);
	ft_puts(t);
	ret = ft_strdup("CMON");
	ft_puts(ret);
	ft_cat(fd);
	return (0);
}
