cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___13248h
	extern	___190bd8h
	extern	___13094h_cdecl
	extern	___180848h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___1854a4h
	extern	___24cc54h
	extern	dRally_Sound_pushEffect
	extern	___2ab50h
	extern	___5994ch

section .text

__GDECL(___3174ch_cdecl)
	mov 	eax, [esp+4]
	call 	___3174ch
	retn

__GDECL(___3174ch)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, eax
		mov     ecx, 1f400h
		mov     ebx, 244h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		add     esi, 1a900h
		mov     edx, 0b6h
		call 	__MOVS
		push    byte 1
		mov     ecx, 91h
		mov     eax, 21h
		call    near ___13248h
		mov     ecx, ebp
		lea     ebx, [ecx*4+0]
		add     ebx, ecx
		shl     ebx, 2
		mov     ecx, ebx
		shl     ebx, 4
		mov     esi, ___190bd8h
		sub     ebx, ecx
		add     esi, ebx
		mov     ecx, 1ea3ch
		mov     ebx, esi
		add     esi, 12ch
___317c9h:
		mov     edx, ecx
		mov     eax, ebx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		add     ebx, byte 3ch
		add     ecx, 2800h
		cmp     ebx, esi
		jne     short ___317c9h
		mov     ecx, 2e250h
		mov     ebx, ___180848h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		push    8000h
		mov     eax, [___1854a4h]
		mov     edx, 17h
		sub     eax, 1000h
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, 1
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___31824h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___31824h
		mov     ecx, 1f400h
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		add     edi, 1a900h
		call 	__MOVS

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
