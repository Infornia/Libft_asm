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
		je		error_
		push	rsi
		push	rdi
		call	_ft_strlen
		add		rax, 1
		push	rax
		mov		rdi, rax
		call	_malloc
		cmp		rax, 0
		je		error_
		mov		rdi, rax
		pop		rdx
		pop		rsi
		call	_ft_memcpy
		pop		rsi
		ret

error_:
		mov		rax, 0
		ret
