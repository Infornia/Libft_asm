/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 16:33:33 by mwilk             #+#    #+#             */
/*   Updated: 2015/05/20 13:47:37 by mwilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "inc/libfts.h"

int		main(void)
{
	int i = -100;

	while (i < 300)
	{
		printf("Pour %i:\n alpha:%i\n digit:%i\n alnum:%i\n",
			i, ft_isalpha(i), ft_isdigit(i), ft_isalnum(i));
		i++;
	}
	char s[] = "Yo";

	printf("%s", ft_strcat(s, "HELLO"));
	printf("%i", ft_isalpha('a'));
	printf("%i", ft_isalpha('\\'));
	printf("%i", ft_isalpha('t'));
	printf("%i", ft_isalpha('0'));
	return (0);
}
