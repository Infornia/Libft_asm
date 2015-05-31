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

_ft_strdup:
		push	rbx
		mov			rbx, rdi
		call	_ft_strlen
		inc			rax
		mov			rcx, rax
		mov			rdi, rax

		push	rcx
		call	_malloc
		pop				rcx
		test	rax, rax
		jz				ret_
		mov				rsi, rbx
		mov				rdi, rax
		repnz movsb

ret_:
		pop			rbx
		ret
