cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e70h
	extern	___13248h
	extern	___28c1ch
	extern	___185a14h
	extern	___185a4ch
	extern	___194da0h
	extern	___13094h
	extern	___194dc8h
	extern	___194df0h
	extern	___194e18h
	extern	___194e40h
	extern	___194e68h
	extern	___194cb0h
	extern	___194cd8h
	extern	___194d00h
	extern	___194d28h
	extern	___194d50h
	extern	___194d78h
	extern	___1865fch
	extern	___1a1ea0h
	extern	___1a1ee8h
	extern	___259e0h

section .text

__GDECL(___26e54h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e70h]
		add     ebx, 27a30h
		mov     edx, ecx
		shr     dl, 2
___26e7eh:
		mov     ch, dl
___26e80h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___26e80h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___26e7eh
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		call    near ___28c1ch
		mov     edx, [___185a14h]
		mov     [___185a4ch], eax
		test    edx, edx
		je      short ___26f2ah
		test    eax, eax
		je      short ___26f2ah
		mov     edx, 136aah
		mov     eax, ___194da0h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___194dc8h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___194df0h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___194e18h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___194e40h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___194e68h
		jmp     short ___26f7fh
___26f2ah:
		mov     edx, 136aah
		mov     eax, ___194cb0h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___194cd8h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___194d00h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___194d28h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___194d50h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___194d78h
___26f7fh:
		call    near ___13094h
		push    ___1865fch
		mov     edx, 10dh
		mov     eax, 1b0h
		mov     ecx, [___1a1ea0h]
		mov     ebx, [___1a1ee8h]
		call    near ___259e0h
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    