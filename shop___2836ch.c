#include "drally.h"

	extern byte ___1a1ec4h[];
	extern byte ___1854b0h[];
	extern byte ___24cc54h[];


void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___25a74h(void);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);

void shop___2836ch(void){

	if(D(___1a1ec4h) == 1){

		dRally_Sound_pushEffect(1, 0x1a, 0, D(___24cc54h), D(___1854b0h), 0x8000);
		D(___1a1ec4h) = 0;
		___25a74h();
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0, 0x73, 0x80, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
	}
}
