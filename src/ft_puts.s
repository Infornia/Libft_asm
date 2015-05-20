# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilk <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/16 20:51:13 by mwilk             #+#    #+#              #
#    Updated: 2015/05/20 13:44:58 by mwilk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



%define STDOUT 1
%define WRITE 0x2000004

global _ft_puts

section .data
		msg:
			db		'(null)\n'
		.len: equ $ - msg
		endl:
			db		'\n'

section .text
		extern _ft_strlen

_ft_puts:
		cmp			rdi, 0
		je			end_null

		mov			rsi, rdi
		call		_ft_strlen

		mov			rdi, STDOUT
		mov			rdx, rax
		mov			rax, WRITE
		syscall

		mov			rdi, STDOUT
		mov			rsi, endl
		mov			rdx, 1
		mov			rax, WRITE
		syscall
		jmp			ret_

end_null:
		mov		rax, WRITE
		mov			rdi, STDOUT
		mov			rsi, msg
		mov			rdx, msg.len
		syscall

ret_:
		ret
