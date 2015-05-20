# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilk <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/16 20:51:13 by mwilk             #+#    #+#              #
#    Updated: 2015/05/20 13:44:58 by mwilk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_strlen

section .text
_ft_strlen:
		mov		rax, 0

while:
		cmp			[byte] rdi, 0
		je			_ret
		inc			rdi
		inc			rax
		jmp			while

ret_:
		ret
