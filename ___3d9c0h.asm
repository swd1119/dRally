cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___3d154h
	extern	___180144h
	extern	___1a54d0h
	extern	bpa_read
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	bpk_decode2
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___3d1f0h
	extern	__VRETRACE_WAIT_FOR_START
	extern	___5994ch
	extern	___3d2bch

section .text

__GDECL(___3d9c0h_cdecl)
	push 	ebx
	mov 	eax, [esp+8]
	mov 	edx, [esp+0ch]
	mov 	ebx, [esp+10h]
	call 	___3d9c0h
	pop 	ebx
	retn


__GDECL(___3d9c0h)
		push    14h
		call    near __CHK
		push    ecx
		push    esi
		mov     esi, ebx

	push 	edx
	push 	ecx
	push 	eax
		call    ___3d154h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, ___180144h
		mov     ebx, edx
		mov     edx, ___1a54d0h
	
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    bpa_read					;;
	add 	esp, 0ch
	pop 	ecx

		push    ___1a54d0h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		push    edx
		call 	bpk_decode2
		add 	esp, 8

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___3d1f0h
		mov     eax, esi
		shl     esi, 4
		sub     esi, eax
		xor     dl, dl
		shl     esi, 2
___3da0bh:
		test    esi, esi
		jle     short ___3da20h

	push 	edx
	push 	ecx
		call    __VRETRACE_WAIT_FOR_START
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		dec     esi
		mov     dl, al
		test    al, al
		je      short ___3da0bh
___3da20h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___3d2bch
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     dl, 1ch
		je      short ___3da38h
		cmp     dl, 39h
		je      short ___3da38h
		cmp     dl, 9ch
		je      short ___3da38h
		test    dl, dl
		jne     short ___3da3dh
___3da38h:
		xor     eax, eax
		pop     esi
		pop     ecx
		retn    
___3da3dh:
		mov     eax, 1
		pop     esi
		pop     ecx
		retn    
