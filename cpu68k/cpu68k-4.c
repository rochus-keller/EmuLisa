/*****************************************************************************/
/*     Generator - Sega Genesis emulation - (c) James Ponder 1997-2001       */
/*****************************************************************************/
/*                                                                           */
/* cpu68k-4.c                                                                */
/*                                                                           */
/*****************************************************************************/

#include <cpu68k-inline.h>



static uint8 b1,b2,b3,b4; static uint16 w1,w2,w3,w4; static uint32 l1, l2, l3, l4;

void cpu_op_535a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4000, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_535b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4000, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_536a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4010, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_536b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4010, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_537a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4018, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_537b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4018, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_538a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4020, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_538b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4020, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_539a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4028, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_539b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4028, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_540a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4030, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_540b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4030, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_541a(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4038, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_541b(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4038, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_542a(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4039, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_542b(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4039, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0 - (sint8)srcdata - XFLAG
  uint8 outdata = 0 - (sint8)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint8)srcdata < 0) && ((sint8)outdata < 0);
  XFLAG = CFLAG = ((sint8)srcdata < 0) || ((sint8)outdata < 0);
  NFLAG = ((sint8)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_543a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4040, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_543b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4040, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_544a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4050, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_544b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4050, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_545a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4058, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_545b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4058, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_546a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4060, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_546b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4060, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_547a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4068, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_547b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4068, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_548a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4070, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_548b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4070, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_549a(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4078, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_549b(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4078, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_550a(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4079, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_550b(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 4079, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0 - (sint16)srcdata - XFLAG
  uint16 outdata = 0 - (sint16)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint16)srcdata < 0) && ((sint16)outdata < 0);
  XFLAG = CFLAG = ((sint16)srcdata < 0) || ((sint16)outdata < 0);
  NFLAG = ((sint16)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_551a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4080, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_551b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4080, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_552a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4090, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_552b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4090, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_553a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4098, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_553b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 4098, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_554a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 40a0, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_554b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 40a0, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_555a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 40a8, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_555b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 40a8, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_556a(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 40b0, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_556b(t_ipc *ipc) /* NEGX */ {
  /* mask fff8, bits 40b0, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_557a(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 40b8, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_557b(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 40b8, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_558a(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 40b9, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_558b(t_ipc *ipc) /* NEGX */ {
  /* mask ffff, bits 40b9, mnemonic 32, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0 - (sint32)srcdata - XFLAG
  uint32 outdata = 0 - (sint32)srcdata - XFLAG;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = ((sint32)srcdata < 0) && ((sint32)outdata < 0);
  XFLAG = CFLAG = ((sint32)srcdata < 0) || ((sint32)outdata < 0);
  NFLAG = ((sint32)outdata) < 0;
  if (outdata) ZFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_559a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4200, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_559b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4200, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_560a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4210, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_560b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4210, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_561a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4218, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_561b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4218, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_562a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4220, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_562b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4220, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_563a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4228, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_563b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4228, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_564a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4230, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_564b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4230, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_565a(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4238, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_565b(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4238, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_566a(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4239, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_566b(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4239, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0
  uint8 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_567a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4240, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_567b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4240, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_568a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4250, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_568b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4250, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_569a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4258, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_569b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4258, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_570a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4260, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_570b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4260, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_571a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4268, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_571b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4268, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_572a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4270, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_572b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4270, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_573a(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4278, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_573b(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4278, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_574a(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4279, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_574b(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 4279, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0
  uint16 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_575a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4280, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_575b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4280, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_576a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4290, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_576b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4290, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_577a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4298, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_577b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 4298, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_578a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 42a0, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_578b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 42a0, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_579a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 42a8, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_579b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 42a8, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_580a(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 42b0, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_580b(t_ipc *ipc) /* CLR */ {
  /* mask fff8, bits 42b0, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_581a(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 42b8, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_581b(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 42b8, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_582a(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 42b9, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_582b(t_ipc *ipc) /* CLR */ {
  /* mask ffff, bits 42b9, mnemonic 33, priv 0, endblk 0, imm_notzero 0, used 30     set 31, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:0
  uint32 outdata = 0;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = 0;
  ZFLAG = 1;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_583a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4400, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:0 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_583b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4400, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:0 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_584a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4410, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:2 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_584b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4410, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:2 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_585a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4418, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:3 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_585b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4418, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:3 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_586a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4420, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:4 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_586b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4420, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:4 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_587a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4428, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:5 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_587b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4428, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:5 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_588a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4430, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:6 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_588b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4430, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:6 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_589a(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4438, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:7 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_589b(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4438, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:7 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_590a(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4439, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:8 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_590b(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4439, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:8 init:0 - (sint8)srcdata
  uint8 outdata = 0 - (sint8)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<7));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_591a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4440, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:0 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_591b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4440, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:0 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_592a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4450, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:2 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_592b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4450, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:2 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_593a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4458, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:3 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_593b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4458, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:3 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_594a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4460, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:4 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_594b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4460, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:4 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_595a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4468, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:5 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_595b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4468, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:5 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_596a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4470, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:6 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_596b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4470, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:6 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_597a(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4478, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:7 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_597b(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4478, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:7 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_598a(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4479, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:8 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_598b(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 4479, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:8 init:0 - (sint16)srcdata
  uint16 outdata = 0 - (sint16)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<15));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_599a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4480, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:0 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_599b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4480, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:0 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_600a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4490, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:2 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_600b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4490, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:2 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_601a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4498, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:3 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_601b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 4498, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:3 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_602a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 44a0, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:4 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_602b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 44a0, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:4 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_603a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 44a8, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:5 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_603b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 44a8, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:5 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_604a(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 44b0, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:6 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_604b(t_ipc *ipc) /* NEG */ {
  /* mask fff8, bits 44b0, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:6 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_605a(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 44b8, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:7 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_605b(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 44b8, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:7 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_606a(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 44b9, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:8 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_606b(t_ipc *ipc) /* NEG */ {
  /* mask ffff, bits 44b9, mnemonic 31, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

ABORT_OPCODE_CHK();
//iib->dtype:20, iib->stype:8 init:0 - (sint32)srcdata
  uint32 outdata = 0 - (sint32)srcdata;

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = (srcdata == (1u<<31));
  XFLAG = CFLAG = srcdata ? 1 : 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_607a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4600, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_607b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4600, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_608a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4610, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_608b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4610, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_609a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4618, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_609b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4618, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_610a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4620, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_610b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4620, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_611a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4628, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_611b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4628, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_612a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4630, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_612b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4630, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_613a(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4638, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_613b(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4638, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_614a(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4639, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_614b(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4639, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:~srcdata
  uint8 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_615a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4640, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_615b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4640, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_616a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4650, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_616b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4650, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_617a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4658, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_617b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4658, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_618a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4660, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_618b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4660, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_619a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4668, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_619b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4668, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_620a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4670, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_620b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4670, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_621a(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4678, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_621b(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4678, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_622a(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4679, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_622b(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 4679, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:~srcdata
  uint16 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_623a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4680, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_623b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4680, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_624a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4690, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_624b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4690, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_625a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4698, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_625b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 4698, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_626a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 46a0, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_626b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 46a0, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_627a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 46a8, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_627b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 46a8, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_628a(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 46b0, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_628b(t_ipc *ipc) /* NOT */ {
  /* mask fff8, bits 46b0, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_629a(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 46b8, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_629b(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 46b8, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_630a(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 46b9, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_630b(t_ipc *ipc) /* NOT */ {
  /* mask ffff, bits 46b9, mnemonic 34, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:~srcdata
  uint32 outdata = ~srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storelong(srcaddr, outdata);

ABORT_OPCODE_CHK();

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_631a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask fff8, bits 40c0, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//iib->dtype:20, iib->stype:0 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_632a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask fff8, bits 40d0, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//iib->dtype:20, iib->stype:2 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_633a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask fff8, bits 40d8, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//iib->dtype:20, iib->stype:3 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_634a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask fff8, bits 40e0, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//iib->dtype:20, iib->stype:4 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_635a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask fff8, bits 40e8, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//iib->dtype:20, iib->stype:5 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_636a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask fff8, bits 40f0, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//iib->dtype:20, iib->stype:6 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_637a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask ffff, bits 40f8, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//iib->dtype:20, iib->stype:7 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_638a(t_ipc *ipc) /* MOVEFSR */ {
  /* mask ffff, bits 40f9, mnemonic 25, priv 0, endblk 0, imm_notzero 0, used 31     set 0, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//iib->dtype:20, iib->stype:8 init:(null)
  uint16 outdata;

  outdata = SR;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storeword(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_639a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44c0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_639b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44c0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_640a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44d0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_640b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44d0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_641a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44d8, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_641b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44d8, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_642a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44e0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_642b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44e0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_643a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44e8, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_643b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44e8, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_644a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44f0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_644b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 44f0, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_645a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44f8, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_645b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44f8, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_646a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44f9, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_646b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44f9, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_647a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44fa, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 9, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_647b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44fa, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 9, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_648a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44fb, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 10, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_648b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44fb, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 10, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_649a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44fc, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 11, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 11, iib->dtype:20, iib->stype:11
//type:0 datatype: 11, iib->dtype:20, iib->stype:11
  uint8 srcdata = ipc->src;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_649b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 44fc, mnemonic 26, priv 0, endblk 0, imm_notzero 0, used 0     set 31, size 1, stype 11, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 11, iib->dtype:20, iib->stype:11
//type:0 datatype: 11, iib->dtype:20, iib->stype:11
  uint8 srcdata = ipc->src;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  SR = (SR & ~0xFF) | srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_650a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46c0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_650b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46c0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_651a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46d0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_651b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46d0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_652a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46d8, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_652b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46d8, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_653a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46e0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_653b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46e0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_654a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46e8, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_654b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46e8, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_655a(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46f0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_655b(t_ipc *ipc) /* MOVETSR */ {
  /* mask fff8, bits 46f0, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_656a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46f8, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_656b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46f8, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_657a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46f9, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+6,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_657b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46f9, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+6,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_658a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46fa, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 9, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_658b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46fa, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 9, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_659a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46fb, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 10, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_659b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46fb, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 10, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_660a(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46fc, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
  uint16 srcdata = ipc->src;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_660b(t_ipc *ipc) /* MOVETSR */ {
  /* mask ffff, bits 46fc, mnemonic 26, priv 1, endblk 0, imm_notzero 0, used 0     set 31, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
  uint16 srcdata = ipc->src;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  unsigned int sr = SFLAG;
  int oim=IMASK;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+4,0);return;}



ABORT_OPCODE_CHK();
  SR = srcdata;
  if (sr != SFLAG) {SR_CHANGE();}
  if (oim>IMASK)   {IRQMASKLOWER();}
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_661a(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4800, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_661b(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4800, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_662a(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4810, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_662b(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4810, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_663a(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4818, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_663b(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4818, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_664a(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4820, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_664b(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4820, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_665a(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4828, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_665b(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4828, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_666a(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4830, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_666b(t_ipc *ipc) /* NBCD */ {
  /* mask fff8, bits 4830, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_667a(t_ipc *ipc) /* NBCD */ {
  /* mask ffff, bits 4838, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_667b(t_ipc *ipc) /* NBCD */ {
  /* mask ffff, bits 4838, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_668a(t_ipc *ipc) /* NBCD */ {
  /* mask ffff, bits 4839, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_668b(t_ipc *ipc) /* NBCD */ {
  /* mask ffff, bits 4839, mnemonic 37, priv 0, endblk 0, imm_notzero 0, used 1     set 31, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:(null)
  uint8 outdata;

  sint8 outdata_low = - (srcdata & 0xF) - XFLAG;
  sint16 precalc = - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_669a(t_ipc *ipc) /* SWAP */ {
  /* mask fff8, bits 4840, mnemonic 38, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:(srcdata>>16) | (srcdata<<16)
  uint32 outdata = (srcdata>>16) | (srcdata<<16);


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_669b(t_ipc *ipc) /* SWAP */ {
  /* mask fff8, bits 4840, mnemonic 38, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:(srcdata>>16) | (srcdata<<16)
  uint32 outdata = (srcdata>>16) | (srcdata<<16);


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_670a(t_ipc *ipc) /* PEA */ {
  /* mask fff8, bits 4850, mnemonic 39, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);

ABORT_OPCODE_CHK();

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), srcaddr);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_671a(t_ipc *ipc) /* PEA */ {
  /* mask fff8, bits 4868, mnemonic 39, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;

ABORT_OPCODE_CHK();

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), srcaddr);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_672a(t_ipc *ipc) /* PEA */ {
  /* mask fff8, bits 4870, mnemonic 39, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);

ABORT_OPCODE_CHK();

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), srcaddr);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_673a(t_ipc *ipc) /* PEA */ {
  /* mask ffff, bits 4878, mnemonic 39, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;

ABORT_OPCODE_CHK();

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), srcaddr);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_674a(t_ipc *ipc) /* PEA */ {
  /* mask ffff, bits 4879, mnemonic 39, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;

ABORT_OPCODE_CHK();

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), srcaddr);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_675a(t_ipc *ipc) /* PEA */ {
  /* mask ffff, bits 487a, mnemonic 39, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 9, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint32 srcaddr = ipc->src;

ABORT_OPCODE_CHK();

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), srcaddr);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_676a(t_ipc *ipc) /* PEA */ {
  /* mask ffff, bits 487b, mnemonic 39, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 10, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);

ABORT_OPCODE_CHK();

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), srcaddr);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_677a(t_ipc *ipc) /* EXT */ {
  /* mask fff8, bits 4880, mnemonic 41, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:20, iib->stype:0 init:(sint16)(sint8)(srcdata)
  uint16 outdata = (sint16)(sint8)(srcdata);
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_677b(t_ipc *ipc) /* EXT */ {
  /* mask fff8, bits 4880, mnemonic 41, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:20, iib->stype:0 init:(sint16)(sint8)(srcdata)
  uint16 outdata = (sint16)(sint8)(srcdata);
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xffff) | outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_678a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 4890, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 2, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 2, iib->dtype:2, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storeword(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.W written to (%08x)<-%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    storeword(dstaddr, ADDRREG(movem_bit[addrmask]));
    DEBUG_LOG(5,"reg A%d.W written to (%08x)<-%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_679a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 48a0, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 4, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:4, iib->stype:12
//type:0 datatype: 12, iib->dtype:4, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 4, iib->dtype:4, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 datamask = (srcdata & 0xFF00) >> 8;
  uint8 addrmask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (addrmask) {
    dstaddr-= 2;
    storeword(dstaddr, ADDRREG((7-movem_bit[addrmask])));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W written to %08x<-%04x  SRC:",7-movem_bit[addrmask],dstaddr,ADDRREG((7-movem_bit[addrmask])));
    addrmask&= ~(1<<movem_bit[addrmask]);
  }
  while (datamask) {
    dstaddr-= 2;
    storeword(dstaddr, DATAREG((7-movem_bit[datamask])));
    DEBUG_LOG(5,"reg D%d.W written to %08x <-%04x  SRC:",7-movem_bit[datamask],dstaddr,DATAREG((7-movem_bit[datamask])));

ABORT_OPCODE_CHK();
    datamask&= ~(1<<movem_bit[datamask]);
  }
  ADDRREG(dstreg) = dstaddr;  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_680a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 48a8, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 5, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 5, iib->dtype:5, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storeword(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.W written to (%08x)<-%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    storeword(dstaddr, ADDRREG(movem_bit[addrmask]));
    DEBUG_LOG(5,"reg A%d.W written to (%08x)<-%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_681a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 48b0, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 6, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 6, iib->dtype:6, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storeword(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.W written to (%08x)<-%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    storeword(dstaddr, ADDRREG(movem_bit[addrmask]));
    DEBUG_LOG(5,"reg A%d.W written to (%08x)<-%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_682a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask ffff, bits 48b8, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 7, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 7, iib->dtype:7, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storeword(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.W written to (%08x)<-%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    storeword(dstaddr, ADDRREG(movem_bit[addrmask]));
    DEBUG_LOG(5,"reg A%d.W written to (%08x)<-%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_683a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask ffff, bits 48b9, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 8, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 8, iib->dtype:8, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storeword(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.W written to (%08x)<-%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    storeword(dstaddr, ADDRREG(movem_bit[addrmask]));
    DEBUG_LOG(5,"reg A%d.W written to (%08x)<-%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 8;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_684a(t_ipc *ipc) /* EXT */ {
  /* mask fff8, bits 48c0, mnemonic 41, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:20, iib->stype:0 init:(sint32)(sint16)(srcdata)
  uint32 outdata = (sint32)(sint16)(srcdata);
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_684b(t_ipc *ipc) /* EXT */ {
  /* mask fff8, bits 48c0, mnemonic 41, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
//iib->dtype:20, iib->stype:0 init:(sint32)(sint16)(srcdata)
  uint32 outdata = (sint32)(sint16)(srcdata);
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = outdata;

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_685a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 48d0, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 2, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 2, iib->dtype:2, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storelong(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.L written to (%08x)<-%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    storelong(dstaddr, ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.L written to (%08x)<-%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_686a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 48e0, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 4, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:4, iib->stype:12
//type:0 datatype: 12, iib->dtype:4, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 4, iib->dtype:4, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 datamask = (srcdata & 0xFF00) >> 8;
  uint8 addrmask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (addrmask) {
    dstaddr-= 4;
    storelong(dstaddr, ADDRREG((7-movem_bit[addrmask])));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.L written to %08x<-%08x  SRC:",7-movem_bit[addrmask],dstaddr,ADDRREG((7-movem_bit[addrmask])));
    addrmask&= ~(1<<movem_bit[addrmask]);
  }
  while (datamask) {
    dstaddr-= 4;
    storelong(dstaddr, DATAREG((7-movem_bit[datamask])));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.L written to %08x<-%08x  SRC:",7-movem_bit[datamask],dstaddr,DATAREG((7-movem_bit[datamask])));
    datamask&= ~(1<<movem_bit[datamask]);
  }
  ADDRREG(dstreg) = dstaddr;  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_687a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 48e8, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 5, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 5, iib->dtype:5, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storelong(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.L written to (%08x)<-%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    storelong(dstaddr, ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.L written to (%08x)<-%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_688a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask fff8, bits 48f0, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 6, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 6, iib->dtype:6, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storelong(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.L written to (%08x)<-%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    storelong(dstaddr, ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.L written to (%08x)<-%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_689a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask ffff, bits 48f8, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 7, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 7, iib->dtype:7, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storelong(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.L written to (%08x)<-%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    storelong(dstaddr, ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.L written to (%08x)<-%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_690a(t_ipc *ipc) /* MOVEMRM */ {
  /* mask ffff, bits 48f9, mnemonic 27, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 8, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 8, iib->dtype:8, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    storelong(dstaddr, DATAREG(movem_bit[datamask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg D%d.L written to (%08x)<-%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    storelong(dstaddr, ADDRREG(movem_bit[addrmask]));

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.L written to (%08x)<-%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 8;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_691a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a00, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_691b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a00, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_692a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a10, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_692b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a10, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_693a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a18, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_693b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a18, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_694a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a20, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_694b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a20, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_695a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a28, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_695b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a28, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_696a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a30, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_696b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a30, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_697a(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a38, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_697b(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a38, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_698a(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a39, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_698b(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a39, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_699a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a40, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_699b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a40, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_700a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a50, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_700b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a50, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_701a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a58, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_701b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a58, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_702a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a60, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_702b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a60, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_703a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a68, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_703b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a68, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_704a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a70, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_704b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a70, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_705a(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a78, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_705b(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a78, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_706a(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a79, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_706b(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4a79, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint16 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_707a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a80, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_707b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a80, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_708a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a90, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_708b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a90, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_709a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a98, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_709b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4a98, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_710a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4aa0, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_710b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4aa0, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_711a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4aa8, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_711b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4aa8, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_712a(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4ab0, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_712b(t_ipc *ipc) /* TST */ {
  /* mask fff8, bits 4ab0, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_713a(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4ab8, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_713b(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4ab8, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_714a(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4ab9, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_714b(t_ipc *ipc) /* TST */ {
  /* mask ffff, bits 4ab9, mnemonic 43, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint32 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif


ABORT_OPCODE_CHK();
  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_715a(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ac0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_715b(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ac0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:20, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//iib->dtype:20, iib->stype:0 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:0
  DATAREG(srcreg) = (DATAREG(srcreg) & ~0xff) | outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_716a(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ad0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_716b(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ad0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:2 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:2
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_717a(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ad8, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_717b(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ad8, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:20, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:3 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:3
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_718a(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ae0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_718b(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ae0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:20, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:4 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:4
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_719a(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ae8, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_719b(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4ae8, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:5 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:5
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_720a(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4af0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_720b(t_ipc *ipc) /* TAS */ {
  /* mask fff8, bits 4af0, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:6 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:6
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_721a(t_ipc *ipc) /* TAS */ {
  /* mask ffff, bits 4af8, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_721b(t_ipc *ipc) /* TAS */ {
  /* mask ffff, bits 4af8, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:7 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:7
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_722a(t_ipc *ipc) /* TAS */ {
  /* mask ffff, bits 4af9, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_722b(t_ipc *ipc) /* TAS */ {
  /* mask ffff, bits 4af9, mnemonic 44, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:20, iib->stype:8 init:srcdata
  uint8 outdata = srcdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  VFLAG = 0;
  CFLAG = 0;
  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  outdata|= 1<<7;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:8
  storebyte(srcaddr, outdata);

ABORT_OPCODE_CHK();
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_723a(t_ipc *ipc) /* ILLEGAL */ {
  /* mask ffff, bits 4afc, mnemonic 0, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  if (ipc->opcode==0x4e7a) PC+=4; else PC+=2;
  printf("Illegal instruction @ %x\n", PC);
  reg68k_internal_vector(4, PC,0);

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_724a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4c90, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 2, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 2, iib->dtype:2, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_725a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4c98, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 3, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:3, iib->stype:12
//type:0 datatype: 12, iib->dtype:3, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 3, iib->dtype:3, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  ADDRREG(dstreg) = dstaddr;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_726a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4ca8, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 5, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 5, iib->dtype:5, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_727a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4cb0, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 6, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 6, iib->dtype:6, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_728a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cb8, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 7, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 7, iib->dtype:7, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_729a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cb9, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 8, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 8, iib->dtype:8, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 8;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_730a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cba, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 9, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:9, iib->stype:12
//type:0 datatype: 12, iib->dtype:9, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 9, iib->dtype:9, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_731a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cbb, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 2, stype 12, dtype 10, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:10, iib->stype:12
//type:0 datatype: 12, iib->dtype:10, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 10, iib->dtype:10, iib->stype:12
  uint32 dstaddr = idxval_dst(ipc);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    w1=fetchword(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = (sint32)(sint16)w1;
    DEBUG_LOG(5,"reg D%d.W read from (%08x)->%04x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 2;
  }
  while (addrmask) {
    ADDRREG(movem_bit[addrmask]) = (sint32)(sint16)fetchword(dstaddr);

ABORT_OPCODE_CHK();
    DEBUG_LOG(5,"reg A%d.W read from (%08x)->%04x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 2;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_732a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4cd0, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 2, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
//type:0 datatype: 12, iib->dtype:2, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 2, iib->dtype:2, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_733a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4cd8, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 3, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:3, iib->stype:12
//type:0 datatype: 12, iib->dtype:3, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 3, iib->dtype:3, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  ADDRREG(dstreg) = dstaddr;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_734a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4ce8, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 5, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
//type:0 datatype: 12, iib->dtype:5, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 5, iib->dtype:5, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_735a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask fff8, bits 4cf0, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 6, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
//type:0 datatype: 12, iib->dtype:6, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 6, iib->dtype:6, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_736a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cf8, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 7, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
//type:0 datatype: 12, iib->dtype:7, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 7, iib->dtype:7, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_737a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cf9, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 8, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
//type:0 datatype: 12, iib->dtype:8, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 8, iib->dtype:8, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 8;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_738a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cfa, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 9, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:9, iib->stype:12
//type:0 datatype: 12, iib->dtype:9, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 9, iib->dtype:9, iib->stype:12
  uint32 dstaddr = ipc->dst;
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_739a(t_ipc *ipc) /* MOVEMMR */ {
  /* mask ffff, bits 4cfb, mnemonic 28, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 10, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:10, iib->stype:12
//type:0 datatype: 12, iib->dtype:10, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 10, iib->dtype:10, iib->stype:12
  uint32 dstaddr = idxval_dst(ipc);
  uint8 addrmask = (srcdata & 0xFF00) >> 8;
  uint8 datamask = srcdata & 0xFF;

ABORT_OPCODE_CHK();
  while (datamask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    DATAREG(movem_bit[datamask]) = l1;
    DEBUG_LOG(5,"reg D%d.L read from (%08x)->%08x  SRC:",movem_bit[datamask],dstaddr,DATAREG(movem_bit[datamask]));
    datamask&= ~(1<<movem_bit[datamask]);
    dstaddr+= 4;
  }
  while (addrmask) {
    l1=fetchlong(dstaddr);
ABORT_OPCODE_CHK();
    ADDRREG(movem_bit[addrmask]) = l1;
    DEBUG_LOG(5,"reg A%d.L read from (%08x)->%08x  SRC:",movem_bit[addrmask],dstaddr,ADDRREG(movem_bit[addrmask]));
    addrmask&= ~(1<<movem_bit[addrmask]);
    dstaddr+= 4;
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_740a(t_ipc *ipc) /* TRAP */ {
  /* mask fff0, bits 4e40, mnemonic 47, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 0, stype 16, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 16, iib->dtype:20, iib->stype:16
//type:0 datatype: 16, iib->dtype:20, iib->stype:16
  unsigned int srcdata = ipc->src;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

   #ifdef DEBUG
   trap_opcode(srcdata);
   #endif
  reg68k_internal_vector(V_TRAP+srcdata, PC+2,0);

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_741a(t_ipc *ipc) /* LINK */ {
  /* mask fff8, bits 4e50, mnemonic 51, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 12, dtype 1, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:1, iib->stype:12
//type:0 datatype: 12, iib->dtype:1, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 1, iib->dtype:1, iib->stype:12
  int dstreg = (ipc->opcode >> 0) & 7;
//type:1 datatype: 1, iib->dtype:1, iib->stype:12
  uint32 dstdata = ADDRREG(dstreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), dstdata);

ABORT_OPCODE_CHK();
  ADDRREG(dstreg) = ADDRREG(7);
  ADDRREG(7)+= (sint16)srcdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_742a(t_ipc *ipc) /* UNLK */ {
  /* mask fff8, bits 4e58, mnemonic 52, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 1, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 1, iib->dtype:20, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:20, iib->stype:1
  uint32 srcdata = ADDRREG(srcreg);

  l1=fetchlong(srcdata);
ABORT_OPCODE_CHK();
  ADDRREG(srcreg) =l1;
  ADDRREG(7) = srcdata+4;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_743a(t_ipc *ipc) /* MOVETUSP */ {
  /* mask fff8, bits 4e60, mnemonic 29, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 1, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 1, iib->dtype:20, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 1, iib->dtype:20, iib->stype:1
  uint32 srcdata = ADDRREG(srcreg);

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}

  SP = srcdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_744a(t_ipc *ipc) /* MOVEFUSP */ {
  /* mask fff8, bits 4e68, mnemonic 30, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 1, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 1, iib->dtype:20, iib->stype:1
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 outdata;

  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}

  outdata = SP;
ABORT_OPCODE_CHK();
//type:0  iib->dtype:20, iib->stype:1
  ADDRREG(srcreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_745a(t_ipc *ipc) /* RESET */ {
  /* mask ffff, bits 4e70, mnemonic 48, priv 1, endblk 1, imm_notzero 0, used 0     set 0, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  /* printf("RESET opcode executed @ %x\n", PC);*/ 
  if (!SFLAG)
  {ALERT_LOG(0,"RESET opcode executed @ %lx WITHOUT SUPERVISOR ON! Entering V_PRIVILEGE exception\n", (long)PC);
    reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}

  mc68k_reset();
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_746a(t_ipc *ipc) /* NOP */ {
  /* mask ffff, bits 4e71, mnemonic 49, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_747a(t_ipc *ipc) /* STOP */ {
  /* mask ffff, bits 4e72, mnemonic 50, priv 1, endblk 1, imm_notzero 0, used 0     set 31, size 0, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
  uint16 srcdata = ipc->src;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (regs.stop)
    return;
  if (!(SFLAG && (srcdata & 1<<13))) {
    reg68k_internal_vector(V_PRIVILEGE, PC+4,0);
    PC+= 4;
  } else {
    SR = srcdata;
    STOP = 1;
  }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_747b(t_ipc *ipc) /* STOP */ {
  /* mask ffff, bits 4e72, mnemonic 50, priv 1, endblk 1, imm_notzero 0, used 0     set 31, size 0, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
//type:0 datatype: 12, iib->dtype:20, iib->stype:12
  uint16 srcdata = ipc->src;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (regs.stop)
    return;
  if (!(SFLAG && (srcdata & 1<<13))) {
    reg68k_internal_vector(V_PRIVILEGE, PC+4,0);
    PC+= 4;
  } else {
    SR = srcdata;
    STOP = 1;
  }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_748a(t_ipc *ipc) /* RTE */ {
  /* mask ffff, bits 4e73, mnemonic 53, priv 1, endblk 1, imm_notzero 0, used 0     set 31, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}

w1=fetchword(ADDRREG(7));w2=SFLAG;w3=IMASK;
l1=fetchlong(ADDRREG(7)+2);
ABORT_OPCODE_CHK();
  ADDRREG(7)+= 6;
  SR = w1;
  if (w2!=SFLAG) {SR_CHANGE();}
  if (w3>IMASK)  {IRQMASKLOWER();}
fetchword(l1);
ABORT_OPCODE_CHK();
  PC = l1;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_748b(t_ipc *ipc) /* RTE */ {
  /* mask ffff, bits 4e73, mnemonic 53, priv 1, endblk 1, imm_notzero 0, used 0     set 31, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  if (!SFLAG)
    {reg68k_internal_vector(V_PRIVILEGE, PC+2,0);return;}

w1=fetchword(ADDRREG(7));w2=SFLAG;w3=IMASK;
l1=fetchlong(ADDRREG(7)+2);
ABORT_OPCODE_CHK();
  ADDRREG(7)+= 6;
  SR = w1;
  if (w2!=SFLAG) {SR_CHANGE();}
  if (w3>IMASK)  {IRQMASKLOWER();}
fetchword(l1);
ABORT_OPCODE_CHK();
  PC = l1;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_749a(t_ipc *ipc) /* RTS */ {
  /* mask ffff, bits 4e75, mnemonic 54, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
l1=fetchlong(ADDRREG(7));  ADDRREG(7)+= 4;

ABORT_OPCODE_CHK();
  PC = l1;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_750a(t_ipc *ipc) /* TRAPV */ {
  /* mask ffff, bits 4e76, mnemonic 46, priv 0, endblk 1, imm_notzero 0, used 8     set 0, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  if (VFLAG) {
    reg68k_internal_vector(V_TRAPV, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_751a(t_ipc *ipc) /* RTR */ {
  /* mask ffff, bits 4e77, mnemonic 55, priv 0, endblk 1, imm_notzero 0, used 0     set 31, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
w1=fetchword(ADDRREG(7));l1=fetchlong(ADDRREG(7)+2);
ABORT_OPCODE_CHK();
  SR = (SR & ~0xFF) | (w1 & 0xFF);
  PC = l1;
  ADDRREG(7)+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_751b(t_ipc *ipc) /* RTR */ {
  /* mask ffff, bits 4e77, mnemonic 55, priv 0, endblk 1, imm_notzero 0, used 0     set 31, size 0, stype 20, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
w1=fetchword(ADDRREG(7));l1=fetchlong(ADDRREG(7)+2);
ABORT_OPCODE_CHK();
  SR = (SR & ~0xFF) | (w1 & 0xFF);
  PC = l1;
  ADDRREG(7)+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_752a(t_ipc *ipc) /* JSR */ {
  /* mask fff8, bits 4e90, mnemonic 56, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+2);

ABORT_OPCODE_CHK();
  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_753a(t_ipc *ipc) /* JSR */ {
  /* mask fff8, bits 4ea8, mnemonic 56, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+4);

ABORT_OPCODE_CHK();
  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_754a(t_ipc *ipc) /* JSR */ {
  /* mask fff8, bits 4eb0, mnemonic 56, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+4);

ABORT_OPCODE_CHK();
  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_755a(t_ipc *ipc) /* JSR */ {
  /* mask ffff, bits 4eb8, mnemonic 56, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+4);

ABORT_OPCODE_CHK();
  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_756a(t_ipc *ipc) /* JSR */ {
  /* mask ffff, bits 4eb9, mnemonic 56, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+6);

ABORT_OPCODE_CHK();
  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_757a(t_ipc *ipc) /* JSR */ {
  /* mask ffff, bits 4eba, mnemonic 56, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 9, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint32 srcaddr = ipc->src;

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+4);

ABORT_OPCODE_CHK();
  PC = (PC & 0xff000000) | (srcaddr & 0x00ffffff) ;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_758a(t_ipc *ipc) /* JSR */ {
  /* mask ffff, bits 4ebb, mnemonic 56, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 10, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+4);

ABORT_OPCODE_CHK();
  PC = (PC & 0xff000000) | (srcaddr & 0x00ffffff) ;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_759a(t_ipc *ipc) /* JMP */ {
  /* mask fff8, bits 4ed0, mnemonic 57, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 2, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 2, iib->dtype:20, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);

  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_760a(t_ipc *ipc) /* JMP */ {
  /* mask fff8, bits 4ee8, mnemonic 57, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 5, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 5, iib->dtype:20, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;

  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_761a(t_ipc *ipc) /* JMP */ {
  /* mask fff8, bits 4ef0, mnemonic 57, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 6, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 6, iib->dtype:20, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);

  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_762a(t_ipc *ipc) /* JMP */ {
  /* mask ffff, bits 4ef8, mnemonic 57, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 7, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 7, iib->dtype:20, iib->stype:7
  uint32 srcaddr = ipc->src;

  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_763a(t_ipc *ipc) /* JMP */ {
  /* mask ffff, bits 4ef9, mnemonic 57, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 8, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 8, iib->dtype:20, iib->stype:8
  uint32 srcaddr = ipc->src;

  PC = srcaddr;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_764a(t_ipc *ipc) /* JMP */ {
  /* mask ffff, bits 4efa, mnemonic 57, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 9, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 9, iib->dtype:20, iib->stype:9
  uint32 srcaddr = ipc->src;

  PC = (PC & 0xff000000) | (srcaddr & 0x00ffffff) ;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_765a(t_ipc *ipc) /* JMP */ {
  /* mask ffff, bits 4efb, mnemonic 57, priv 0, endblk 1, imm_notzero 0, used 0     set 0, size 3, stype 10, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
//type:0 datatype: 10, iib->dtype:20, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);

  PC = (PC & 0xff000000) | (srcaddr & 0x00ffffff) ;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_766a(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 4180, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_766b(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 4180, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_767a(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 4190, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_767b(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 4190, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_768a(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 4198, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_768b(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 4198, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=2, ADDRREG(srcreg)-2);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_769a(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 41a0, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_769b(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 41a0, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=2;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+2,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+2,0);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_770a(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 41a8, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_770b(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 41a8, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_771a(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 41b0, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_771b(t_ipc *ipc) /* CHK */ {
  /* mask f1f8, bits 41b0, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_772a(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41b8, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_772b(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41b8, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_773a(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41b9, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+6,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+6,0);
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_773b(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41b9, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+6,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+6,0);
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_774a(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41ba, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_774b(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41ba, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_775a(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41bb, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_775b(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41bb, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_776a(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41bc, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_776b(t_ipc *ipc) /* CHK */ {
  /* mask f1ff, bits 41bc, mnemonic 45, priv 0, endblk 0, imm_notzero 0, used 0     set 2, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  uint16 dstdata = DATAREG(dstreg);

ABORT_OPCODE_CHK();

  ZFLAG=(!dstdata); //RA2020.07.12
  if ((sint16)srcdata < 0) {
    NFLAG = 1;
    reg68k_internal_vector(V_CHK, PC+4,0);
  } else if (dstdata > srcdata) {
    NFLAG = 0;
    reg68k_internal_vector(V_CHK, PC+4,0);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_777a(t_ipc *ipc) /* LEA */ {
  /* mask f1f8, bits 41d0, mnemonic 40, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 2, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:1, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:1 datatype: 1, iib->dtype:1, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//iib->dtype:1, iib->stype:2 init:srcaddr
  uint32 outdata = srcaddr;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:1  iib->dtype:1, iib->stype:2
  ADDRREG(dstreg) = outdata;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_778a(t_ipc *ipc) /* LEA */ {
  /* mask f1f8, bits 41e8, mnemonic 40, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 5, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:1, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:1 datatype: 1, iib->dtype:1, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//iib->dtype:1, iib->stype:5 init:srcaddr
  uint32 outdata = srcaddr;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:1  iib->dtype:1, iib->stype:5
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_779a(t_ipc *ipc) /* LEA */ {
  /* mask f1f8, bits 41f0, mnemonic 40, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 6, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:1, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:1 datatype: 1, iib->dtype:1, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//iib->dtype:1, iib->stype:6 init:srcaddr
  uint32 outdata = srcaddr;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:1  iib->dtype:1, iib->stype:6
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_780a(t_ipc *ipc) /* LEA */ {
  /* mask f1ff, bits 41f8, mnemonic 40, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 7, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:1, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:1 datatype: 1, iib->dtype:1, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//iib->dtype:1, iib->stype:7 init:srcaddr
  uint32 outdata = srcaddr;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:1  iib->dtype:1, iib->stype:7
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_781a(t_ipc *ipc) /* LEA */ {
  /* mask f1ff, bits 41f9, mnemonic 40, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 8, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:1, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:1 datatype: 1, iib->dtype:1, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//iib->dtype:1, iib->stype:8 init:srcaddr
  uint32 outdata = srcaddr;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:1  iib->dtype:1, iib->stype:8
  ADDRREG(dstreg) = outdata;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_782a(t_ipc *ipc) /* LEA */ {
  /* mask f1ff, bits 41fa, mnemonic 40, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 9, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:1, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:1 datatype: 1, iib->dtype:1, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//iib->dtype:1, iib->stype:9 init:srcaddr
  uint32 outdata = srcaddr;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:1  iib->dtype:1, iib->stype:9
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_783a(t_ipc *ipc) /* LEA */ {
  /* mask f1ff, bits 41fb, mnemonic 40, priv 0, endblk 0, imm_notzero 0, used 0     set 0, size 3, stype 10, dtype 1, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:1, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:1 datatype: 1, iib->dtype:1, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//iib->dtype:1, iib->stype:10 init:srcaddr
  uint32 outdata = srcaddr;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
ABORT_OPCODE_CHK();
//type:1  iib->dtype:1, iib->stype:10
  ADDRREG(dstreg) = outdata;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

