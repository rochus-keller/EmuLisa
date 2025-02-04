/*****************************************************************************/
/*     Generator - Sega Genesis emulation - (c) James Ponder 1997-2001       */
/*****************************************************************************/
/*                                                                           */
/* cpu68k-7.c                                                                */
/*                                                                           */
/*****************************************************************************/

#include <cpu68k-inline.h>



static uint8 b1,b2,b3,b4; static uint16 w1,w2,w3,w4; static uint32 l1, l2, l3, l4;

void cpu_op_1064a(t_ipc *ipc) /* MOVE */ {
  /* mask f100, bits 7000, mnemonic 21, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 18, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 18, iib->dtype:0, iib->stype:18
//type:0 datatype: 18, iib->dtype:0, iib->stype:18
  signed int srcdata = ipc->src;

//type:1 datatype: 0, iib->dtype:0, iib->stype:18
  int dstreg = (ipc->opcode >> 9) & 7;

//iib->dtype:0, iib->stype:18 init:srcdata
  uint32 outdata = srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:18
  DATAREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1064b(t_ipc *ipc) /* MOVE */ {
  /* mask f100, bits 7000, mnemonic 21, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 18, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 18, iib->dtype:0, iib->stype:18
//type:0 datatype: 18, iib->dtype:0, iib->stype:18
  signed int srcdata = ipc->src;

//type:1 datatype: 0, iib->dtype:0, iib->stype:18
  int dstreg = (ipc->opcode >> 9) & 7;

//iib->dtype:0, iib->stype:18 init:srcdata
  uint32 outdata = srcdata;

ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:18
  DATAREG(dstreg) = outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

