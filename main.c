/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 16:33:33 by mwilk             #+#    #+#             */
/*   Updated: 2015/05/29 20:32:25 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "inc/libfts.h"

int		main(void)
{
	char s[] = "Yo my name is Fuck You";
	char t[] = "Yo my name is Like You";
	char *ret;

	ft_puts("YOOOOOOOOOOOOOO");
	ft_puts("54367829302485476878219981687829194");
	ft_puts("®´ß∂†ƒ¨∫ˆ˜µø≤πµˆø¨∫ˆ†¨ç†¨√∫ˆ");
	ft_puts(NULL);
	ft_memset(s, 'c', 3);
	ft_puts(s);
	ft_memcpy(t, s , 3);
	ft_puts(t);
	ret = ft_strdup("CMON");
	ft_puts(ret);
	return (0);
}
