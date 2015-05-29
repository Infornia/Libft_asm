; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mwilk <marvin@42.fr>                       +;+  +:+       +;+         ;
;                                                 +;+;+;+;+;+   +;+            ;
;    Created: 2015/05/29 17:41:29 by mwilk             ;+;    ;+;              ;
;    Updated: 2015/05/29 17:41:29 by mwilk            ;;;   ;;;;;;;;.fr        ;
;                                                                              ;
; **************************************************************************** ;

global _ft_strdup

section .text
		extern _ft_strlen
		extern _malloc
		extern _ft_memcpy

_ft_strdup:
		cmp		rdi, 0
		je		ret_
		push	rsi
		push	rdi
		call	_ft_strlen
		push	rax
		mov		rdi, rax
		add		rdi, 1
		call	_malloc
		cmp		rax, 0
		je		ret_
		mov		rdi, rax
		pop		rdx
		pop		rsi
		call	_ft_memcpy
		pop		rsi
		ret

ret_:
		mov		rax, 0
		ret
