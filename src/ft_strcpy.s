; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: mwilk <marvin@42.fr>                       +;+  +:+       +;+         ;
;                                                 +;+;+;+;+;+   +;+            ;
;    Created: 2015/06/01 18:04:30 by mwilk             ;+;    ;+;              ;
;    Updated: 2015/06/01 18:04:30 by mwilk            ;;;   ;;;;;;;;.fr        ;
;                                                                              ;
; **************************************************************************** ;

global _ft_strcpy
section .text
	extern _ft_strlen

_ft_strcpy:
		xor		al, al

		push	rsi
		push	rdi

		mov		rdi, rsi
		call	_ft_strlen
		mov		rcx, rax
		pop		rdi
		pop		rsi
		cld
		rep		movsb
		ret
