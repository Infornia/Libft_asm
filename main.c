/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 16:33:33 by mwilk             #+#    #+#             */
/*   Updated: 2015/05/22 20:09:39 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "inc/libfts.h"

int		main(void)
{
	char s[] = "Yo my name is Fuck You";

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
	ft_puts(s);
	return (0);
}
