#include "drally.h"

	extern byte ___3f1f0h[];
	extern byte ___3f3d0h[];
	extern byte ___3f5b0h[];
	extern byte ___3f610h[];
	extern byte ___3f670h[];
	extern byte ___3f6c0h[];

	extern byte ___182effh[];
	extern byte ___182edfh[];
	extern byte ___243898h[];
	extern byte ___1de818h[];
	extern byte ___243cf4h[];
	extern byte ___2438b0h[];
	extern byte ___196dach[];
	extern byte ___2438b4h[];
	extern byte ___1de7d0h[];
	extern byte ___1de800h[];
	extern byte ___1de814h[];
	extern byte ___1de580h[];
	extern byte ___1de7e4h[];
	extern byte ___1de7e8h[];
	extern byte ___182ee7h[];
	extern byte ___182eefh[];
	extern byte ___1de7ech[];
	extern byte ___1de584h[];
	extern byte ___1de588h[];
	extern byte ___1de58ch[];
	extern byte ___1de594h[];
	extern byte ___243ce8h[];
	extern byte ___1de59ch[];
	extern byte ___182ed4h[];
	extern byte ___182ef7h[];
	extern byte ___1de7e0h[];
	extern byte ___1de598h[];
	extern byte ___1de7f0h[];
	extern byte ___1de5a0h[];
	extern byte ___1de7f4h[];
	extern byte ___1de5a4h[];
	extern byte ___1de7f8h[];
	extern byte ___1de5a8h[];
	extern byte ___1de7fch[];
	extern byte ___1de5ach[];
	extern byte ___1de5b0h[];
	extern byte ___1de5b4h[];
	extern byte ___1de5d0h[];
	extern byte ___1de5d8h[];
	extern byte ___1de590h[];
	extern byte ___1de5e0h[];
	extern byte ___1de5dch[];
	extern byte ___1de5e4h[];
	extern byte ___1de5f4h[];
	extern byte ___1de604h[];
	extern byte ___1de5e8h[];
	extern byte ___1de5f8h[];
	extern byte ___1de608h[];
	extern byte ___19bd60h[];
	extern byte ___1de868h[];
	extern byte ___1de838h[];
	extern byte ___1de804h[];
	extern byte ___1de5b8h[];
	extern byte ___1de808h[];
	extern byte ___1de5bch[];
	extern byte ___1de80ch[];
	extern byte ___1de5c0h[];
	extern byte ___1de858h[];
	extern byte ___1de64ch[];
	extern byte ___1de85ch[];
	extern byte ___1de650h[];
	extern byte ___1de860h[];
	extern byte ___1de654h[];
	extern byte ___1de8ach[];
	extern byte ___1de6e0h[];
	extern byte ___1de8b0h[];
	extern byte ___1de6e4h[];
	extern byte ___1de8b4h[];
	extern byte ___1de6e8h[];
	extern byte ___1de900h[];
	extern byte ___1de774h[];
	extern byte ___1de904h[];
	extern byte ___1de778h[];
	extern byte ___1de908h[];
	extern byte ___1de5c4h[];
	extern byte ___1de77ch[];
	extern byte ___1de824h[];
	extern byte ___1de658h[];
	extern byte ___1de878h[];
	extern byte ___1de6ech[];
	extern byte ___1de8cch[];
	extern byte ___1de780h[];
	extern byte ___24389ch[];

void race___3f970h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x4fc];

	ecx = 0x78;
	edi = esp+0x1e0;
	esi = ___3f1f0h;
	while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
	ecx = 0x78;
	edi = esp;
	esi = ___3f3d0h;
	while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
	ecx = 0x18;
	edi = esp+0x3c0;
	esi = ___3f5b0h;
	while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
	ecx = 0x18;
	edi = esp+0x420;
	esi = ___3f610h;
	while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
	ecx = 0x14;
	edi = esp+0x480;
	esi = ___3f670h;
	while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
	edx = 0;
	ecx = 6;
	edi = esp+0x4d0;
	esi = ___3f6c0h;
	eax = 0;
	D(esp+0x4f8) = edx;
	while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }

	while(1){

		F32(eax+___24389ch) = (float)(0.15*(double)D(esp+0x4f8)+0.2);
		eax += 4;

		D(esp+0x4f8)++;
		if((int)D(esp+0x4f8) >= 6) break;
	}

	eax = D(___1de818h);
	esi = D(___243cf4h);
	edi = 0;
	D(___196dach) = eax;
	F32(___2438b4h) = F32(___2438b0h);

	if((int)esi > 0){

		esi = ___1de7d0h;
		ecx = 0;
		ebx = 0;

		while(1){

			eax = D(ecx+___1de800h);
			edx = D(ecx+___1de814h);
			D(ebx+___1de580h) = eax;
			eax = 0x78*edx;
			edx = 0x14*D(ebx+___1de580h);
			edx += eax;
			D(esp+0x4f4) = edx;
			edx = D(ecx+___1de7e4h);
			edx <<= 2;
			D(esp+0x4f0) = edx;
			edx = D(esp+0x4f4);
			edx += D(esp+0x4f0);
			FPUSH(F32(esp+edx+0x1e0));
			edx = 0x14*D(ebx+___1de580h);
			edx += eax;
			eax = D(ecx+___1de7e8h);
			eax <<= 2;
			eax += edx;
			edx = D(ecx+___1de814h);
			FPUSH(F32(esp+eax));
			eax = 0x18*edx;
			edx = D(ebx+___1de580h);
			edx <<= 2;
			edx += eax;
			FPUSH(F32(esp+edx+0x3c0));
			FPUSH(D(ecx+___1de7e4h));
			ST(0) = ST(0)*F64(___182ee7h);
			ST(1) = ST(1)-ST(0); FPOP();
			ST(0) = F64(___182eefh)/ST(0);
			edx = 0x14*D(ecx+___1de814h);
			D(esp+0x4f4) = edx;
			edx = D(ecx+___1de7ech);
			edx <<= 2;
			D(esp+0x4f0) = edx;
			edx = D(esp+0x4f4);
			edx += D(esp+0x4f0);
			D(esp+0x4f0) = edx;
			edx = D(ebx+___1de580h);
			d_tmp = ST(0); ST(0) = ST(2); ST(2) = d_tmp;
			F32(ebx+___1de584h) = (float)FPOP();
			edx <<= 2;
			FPUSH(F32(ebx+___1de584h));
			eax += edx;
			F32(ebx+___1de588h) = (float)FPOP();
			eax = D(esp+eax+0x420);
			F32(ebx+___1de58ch) = (float)FPOP();
			D(esp+0x4f4) = eax;
			eax = D(esp+0x4f0);
			edx = D(esp+0x4f4);
			eax = D(esp+eax+0x480);
			F32(ebx+___1de594h) = (float)FPOP();
			edx += eax;
			eax = D(___243ce8h);
			D(ebx+___1de59ch) = edx;

			if(edi == eax){

				edx += 0x64;
				D(ebx+___1de59ch) = edx;
			}

			edx = ___182ed4h;
			eax = esi;
			eax = strcmp(eax, edx);

			if(eax == 0){

				FPUSH(D(ebx+___1de59ch));
				FPUSH(ST(0));
				ST(0) = ST(0)*F64(___182ef7h);
				ST(1) = ST(1)+ST(0); FPOP();
				ST(0) = (int)ST(0);
				D(ebx+___1de59ch) = (int)FPOP();
			}

			if((int)D(ebx+___1de59ch) > 0x384) D(ebx+___1de59ch) = 0x384;
			eax = D(ebx+___1de580h);
			edx = D(ecx+___1de7e0h);
			FPUSH(F32(esp+4*eax+0x4d0));
			eax = 0x64;
			eax -= edx;
			eax <<= 0xa;
			D(ebx+___1de598h) = eax;
			eax = D(ecx+___1de7f0h);
			D(ebx+___1de5a0h) = eax;
			eax = D(ecx+___1de7f4h);
			D(ebx+___1de5a4h) = eax;
			eax = D(ecx+___1de7f8h);
			D(ebx+___1de5a8h) = eax;
			eax = D(ecx+___1de7fch);
			D(ebx+___1de5ach) = eax;
			eax = 0x19000;
			D(ebx+___1de5b0h) = eax;
			D(ebx+___1de5b4h) = eax;
			eax = 0;
			D(ebx+___1de5d0h) = eax;
			D(ebx+___1de5d8h) = eax;
			F32(ebx+___1de590h) = (float)FPOP();
			edx = D(ebx+___1de580h);
			D(ebx+___1de5e0h) = eax;

			if(edx == 0){
					
				eax = 1;
				edx = 0x16;
				D(ebx+___1de5dch) = eax;
				D(ebx+___1de5e4h) = edx;
				eax = 8;
				edx = 0;
				D(ebx+___1de5f4h) = eax;
				D(ebx+___1de604h) = edx;
			}

			eax = D(ebx+___1de580h);

			if(eax == 1){

				edx = 0x11;
				D(ebx+___1de5dch) = eax;
				eax = 0xffffffee;
				D(ebx+___1de5f4h) = edx;
				D(ebx+___1de5e4h) = eax;
				D(ebx+___1de604h) = 1;
			}

			if(D(ebx+___1de580h) == 2){

				eax = 1;
				edx = 0xffffffd8;
				D(ebx+___1de5dch) = eax;
				D(ebx+___1de5e4h) = edx;
				eax = 7;
				edx = 2;
				D(ebx+___1de5f4h) = eax;
				D(ebx+___1de604h) = edx;
			}

			if(D(ebx+___1de580h) == 3){

				edx = 2;
				eax = 0x10;
				D(ebx+___1de5dch) = edx;
				D(ebx+___1de5e4h) = eax;
				edx = 0x14;
				eax = 3;
				D(ebx+___1de5f4h) = edx;
				D(ebx+___1de604h) = eax;
				edx = 0xffffffef;
				eax = 0x14;
				D(ebx+___1de5e8h) = edx;
				D(ebx+___1de5f8h) = eax;
				D(ebx+___1de608h) = 3;
			}

			if(D(ebx+___1de580h) == 4){

				edx = 2;
				eax = 0x10;
				D(ebx+___1de5dch) = edx;
				D(ebx+___1de5e4h) = eax;
				edx = 0x13;
				eax = 4;
				D(ebx+___1de5f4h) = edx;
				D(ebx+___1de604h) = eax;
				edx = 0xffffffef;
				eax = 0x13;
				D(ebx+___1de5e8h) = edx;
				D(ebx+___1de5f8h) = eax;
				D(ebx+___1de608h) = 4;
			}

			if(D(ebx+___1de580h) == 5){

				edx = 2;
				eax = 0x10;
				D(ebx+___1de5dch) = edx;
				D(ebx+___1de5e4h) = eax;
				edx = 0x14;
				eax = 5;
				D(ebx+___1de5f4h) = edx;
				D(ebx+___1de604h) = eax;
				edx = 0xffffffef;
				eax = 0x14;
				D(ebx+___1de5e8h) = edx;
				D(ebx+___1de5f8h) = eax;
				D(ebx+___1de608h) = 5;
			}

			eax = D(___243cf4h);
			esi += 0x54;
			ecx += 0x54;
			edi++;
			ebx += 0x94;

			if((int)edi >= (int)eax) break;
		}
	}

	if((D(___1de580h) == 6)&&(D(___19bd60h) == 0)){

		ebx = D(___243ce8h);
		eax = 8*ebx;
		eax += ebx;
		eax <<= 2;
		eax += ebx;
		if(D(eax*4+___1de5ach) == 0){

			if(D(___1de814h) == 0) D(___1de584h) = 0x4089999a;
			if(D(___1de814h) == 1) D(___1de584h) = 0x408ccccd;
			if(D(___1de814h) == 2) D(___1de584h) = 0x40900000;
		}
		else {

			if(D(___1de814h) == 0) D(___1de584h) = 0x40900000;
			if(D(___1de814h) == 1) D(___1de584h) = 0x40933333;
			if(D(___1de814h) == 2) D(___1de584h) = 0x40966666;
		}

		ebx = D(___1de868h);
		eax = 4*ebx;
		eax -= ebx;
		ebx = 8*eax;
		FPUSH(F32(esp+ebx+0x3c4));
		FPUSH(D(___1de838h));
		ST(0) = ST(0)*F64(___182ee7h);
		ST(1) = ST(1)-ST(0); FPOP();
		ST(0) = F64(___182eefh)/ST(0);
		edi = D(___1de7e0h);
		eax = 0x64;
		eax -= edi;
		eax <<= 0xa;
		ecx = D(___1de868h);
		D(___1de868h) = eax;
		eax = 4*ecx;
		FPUSH(F32(___1de584h));
		ecx += eax;
		F32(___1de588h) = (float)FPOP();
		ecx <<= 2;
		eax = D(esp+ebx+0x434);
		edx = D(esp+ecx+0x490);
		esi = 0;
		eax += edx;
		D(___1de58ch) = esi;
		D(___1de59ch) = eax;
		F32(___1de594h) = (float)FPOP();
		if((int)eax > 0x384) D(___1de59ch) = 0x384;
		eax = D(esp+0x4dc);
		esi = 0x19000;
		edx = 2;
		ebx = 0x1e;
		ecx = 0x13;
		edi = 0xffffffe2;
		D(___1de590h) = eax;
		D(___1de5b0h) = esi;
		D(___1de5b4h) = esi;
		D(___1de5dch) = edx;
		D(___1de5e4h) = ebx;
		D(___1de5f4h) = ecx;
		eax = D(___1de7f0h);
		D(___1de5e8h) = edi;
		D(___1de5a0h) = eax;
		eax = D(___1de7f4h);
		D(___1de5f8h) = ecx;
		D(___1de5a4h) = eax;
		eax = D(___1de7f8h);
		esi = 4;
		D(___1de5a8h) = eax;
		eax = D(___1de7fch);
		D(___1de604h) = esi;
		D(___1de5ach) = eax;
		eax = 0;
		D(___1de608h) = esi;
		D(___1de5d0h) = eax;
	}

	eax = D(___1de804h);
	D(___1de5b8h) = eax;
	eax = D(___1de808h);
	D(___1de5bch) = eax;
	eax = D(___1de80ch);
	D(___1de5c0h) = eax;
	eax = D(___1de858h);
	D(___1de64ch) = eax;
	eax = D(___1de85ch);
	D(___1de650h) = eax;
	eax = D(___1de860h);
	D(___1de654h) = eax;
	eax = D(___1de8ach);
	D(___1de6e0h) = eax;
	eax = D(___1de8b0h);
	D(___1de6e4h) = eax;
	eax = D(___1de8b4h);
	D(___1de6e8h) = eax;
	eax = D(___1de900h);
	D(___1de774h) = eax;
	eax = D(___1de904h);
	esi = ___1de7d0h;
	D(___1de778h) = eax;
	eax = D(___1de908h);
	edi = ___1de5c4h;
	D(___1de77ch) = eax;
	strcpy(edi, esi);
	esi = ___1de824h;
	edi = ___1de658h;
	strcpy(edi, esi);
	esi = ___1de878h;
	edi = ___1de6ech;
	strcpy(edi, esi);
	esi = ___1de8cch;
	edi = ___1de780h;
	strcpy(edi, esi);   
}
