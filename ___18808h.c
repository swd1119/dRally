#include "drally.h"

	extern byte ___1a0f9ch[];

void * ___3f71ch__allocateMemory(dword);

static byte ROL_BYTE(byte b, int n){

    return (b<<n)|(b>>(8-n));
}

void ___18808h_cdecl(dword A1, dword A2){

	FILE * 	fd;
	int 	n;
	byte 	key;


	D(___1a0f9ch) = ___3f71ch__allocateMemory(0x883);
	memset(D(___1a0f9ch), 0, 0x883);
	fd = strupr_fopen(A2, "rb");
	fread(D(___1a0f9ch), 0x883, 1, fd);
	fclose(fd);
	key = B(D(___1a0f9ch));

	n = 0;
	while(++n < 0x883) B(D(___1a0f9ch)+n) = ROL_BYTE(B(D(___1a0f9ch)+n), n%6)+key-0x11*n;

	n = -1;
	while(++n < 0xf) B(A1+n) = B(D(___1a0f9ch)+n+4);
}
