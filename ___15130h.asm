cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e84h
	extern 	___1a1ef8h
	extern 	___1a01fch
	extern 	___1a0210h
	extern 	___188992h
	extern 	___13094h_cdecl
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl
	
section .text

__GDECL(___15130h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     edx, 21h
		mov     ebp, 83h
		push    byte 1
		mov     ecx, 0e6h
		mov     eax, 21h
		xor     ebx, ebx
		mov     [esp+8], edx
		mov     [esp+4], ebx
		mov     ebx, 1e2h
		mov     edx, ebp
		call    near ___13248h
		mov     ecx, 80h
		mov     edx, 68h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e84h]
		add     ebx, 1a42dh
___1518bh:
		mov     edi, edx
___1518dh:
		mov     al, [esi]
		or      al, al
		je      short ___15195h
		mov     [ebx], al
___15195h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___1518dh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___1518bh
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     ecx, [eax+___1a01fch]
		cmp     ecx, byte 5
		jne     short ___151dch
		mov     edi, [eax+___1a0210h]
		add     edi, 1770h
		mov     [esp], ecx
		mov     [eax+___1a0210h], edi
___151dch:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     edx, [eax+___1a01fch]
		cmp     edx, byte 4
		jne     short ___15213h
		mov     ecx, [eax+___1a0210h]
		add     ecx, 1194h
		mov     [esp], edx
		mov     [eax+___1a0210h], ecx
___15213h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     esi, [eax+___1a01fch]
		cmp     esi, byte 3
		jne     short ___1524ah
		mov     edx, [eax+___1a0210h]
		add     edx, 0bb8h
		mov     [esp], esi
		mov     [eax+___1a0210h], edx
___1524ah:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     ebx, [eax+___1a01fch]
		cmp     ebx, byte 2
		jne     short ___15281h
		mov     esi, [eax+___1a0210h]
		add     esi, 5dch
		mov     [esp], ebx
		mov     [eax+___1a0210h], esi
___15281h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     edi, [eax+___1a01fch]
		cmp     edi, byte 1
		jne     short ___152b8h
		mov     ebx, [eax+___1a0210h]
		add     ebx, 2eeh
		mov     [esp], edi
		mov     [eax+___1a0210h], ebx
___152b8h:
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		shl     eax, 2
		mov     ecx, [eax+___1a01fch]
		test    ecx, ecx
		jne     short ___152eeh
		mov     edi, [eax+___1a0210h]
		add     edi, 15eh
		mov     [esp], ecx
		mov     [eax+___1a0210h], edi
___152eeh:
		lea     edx, [ebp+5]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+4]
		shl     eax, 7
		add     eax, edx
		mov     edx, [esp]
		lea     ecx, [eax+80h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, edx
		mov     ebx, ___188992h
		shl     eax, 5
		add     ebx, eax
		mov     edx, ecx
		mov     eax, ebx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     eax, [ebp+15h]
		lea     edx, [eax*4+0]
		add     edx, eax
		mov     ecx, [esp+4]
		shl     edx, 7
		add     edx, ecx
		lea     eax, [ebx+50h]
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+25h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ecx
		lea     edx, [eax+80h]
		lea     eax, [ebx+0a0h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+35h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ecx+eax*1+80h]
		lea     eax, [ebx+0f0h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+45h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ecx+eax*1+80h]
		lea     eax, [ebx+140h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+55h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ecx+eax*1+80h]
		lea     eax, [ebx+190h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+65h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ecx
		lea     edx, [eax+80h]
		lea     eax, [ebx+1e0h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+75h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ecx
		lea     edx, [eax+80h]
		lea     eax, [ebx+230h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+85h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ecx
		lea     edx, [eax+80h]
		lea     eax, [ebx+280h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+95h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ecx
		lea     edx, [eax+80h]
		lea     eax, [ebx+2d0h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+0b9h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___180694h
		lea     ecx, [eax+0c0h]
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
