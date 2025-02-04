/*****************************************************************************/
/*     Generator - Sega Genesis emulation - (c) James Ponder 1997-2001       */
/*****************************************************************************/
/*                                                                           */
/* cpu68k-8.c                                                                */
/*                                                                           */
/*****************************************************************************/

#include <cpu68k-inline.h>



static uint8 b1,b2,b3,b4; static uint16 w1,w2,w3,w4; static uint32 l1, l2, l3, l4;

void cpu_op_1065a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8000, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1065b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8000, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1066a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8010, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:2 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1066b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8010, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:2 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1067a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8018, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:3 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1067b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8018, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
  uint32 srcaddr_tmp = (ADDRREG(srcreg)+= (srcreg == 7 ? 2 : 1), 0);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:3 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1068a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8020, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:4 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1068b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8020, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:4 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1069a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8028, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:5 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1069b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8028, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:5 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1070a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8030, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:6 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1070b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8030, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:6 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1071a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8038, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:7 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1071b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8038, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:7 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1072a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8039, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:8 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1072b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8039, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:8 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1073a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 803a, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:9 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1073b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 803a, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:9 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1074a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 803b, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:10 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1074b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 803b, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:10 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1075a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 803c, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 11, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
  uint8 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:11 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:11
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1075b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 803c, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 11, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
//type:0 datatype: 11, iib->dtype:0, iib->stype:11
  uint8 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:11
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:11 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:11
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1076a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8040, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1076b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8040, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1077a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8050, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:2 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1077b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8050, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:2 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1078a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8058, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:3 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1078b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8058, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:3 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1079a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8060, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:4 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1079b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8060, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:4 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1080a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8068, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:5 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1080b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8068, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:5 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1081a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8070, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:6 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1081b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8070, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:6 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1082a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8078, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:7 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1082b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8078, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:7 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1083a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8079, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:8 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1083b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8079, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:8 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1084a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 807a, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:9 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1084b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 807a, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:9 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1085a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 807b, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:10 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1085b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 807b, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
//iib->dtype:0, iib->stype:10 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1086a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 807c, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  uint16 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:12 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:12
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1086b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 807c, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  uint16 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:12 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:12
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xffff) | outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1087a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8080, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1087b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8080, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1088a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8090, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:2 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1088b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8090, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg);
//type:0 datatype: 2, iib->dtype:0, iib->stype:2
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:2
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:2 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:2
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1089a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8098, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:3 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1089b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8098, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)+=4, ADDRREG(srcreg)-4);
//type:0 datatype: 3, iib->dtype:0, iib->stype:3
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:3
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:3 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:3
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1090a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 80a0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:4 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1090b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 80a0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = ADDRREG(srcreg)-=4;
//type:0 datatype: 4, iib->dtype:0, iib->stype:4
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:4
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:4 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:4
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1091a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 80a8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:5 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1091b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 80a8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + (sint32)(sint16)ipc->src;
//type:0 datatype: 5, iib->dtype:0, iib->stype:5
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:5
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:5 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:5
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1092a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 80b0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:6 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1092b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 80b0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (sint32)ADDRREG(srcreg) + idxval_src(ipc);
//type:0 datatype: 6, iib->dtype:0, iib->stype:6
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:6
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:6 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:6
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1093a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80b8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:7 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1093b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80b8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:7 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:7
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1094a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80b9, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:8 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1094b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80b9, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:8 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:8
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1095a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80ba, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:9 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1095b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80ba, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:9 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:9
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1096a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80bb, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:10 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1096b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80bb, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcdata = fetchlong(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:10 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:10
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1097a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80bc, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 13, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
  uint32 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:13 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:13
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1097b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 80bc, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 13, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
//type:0 datatype: 13, iib->dtype:0, iib->stype:13
  uint32 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:13
  uint32 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:13 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:13
  DATAREG(dstreg) = outdata;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1098a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8110, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:2, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1098b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8110, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:2, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1099a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8118, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint32 dstaddr_tmp = (ADDRREG(dstreg)+= (dstreg == 7 ? 2 : 1), 0);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:3, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1099b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8118, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
  uint32 dstaddr_tmp = (ADDRREG(dstreg)+= (dstreg == 7 ? 2 : 1), 0);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:3, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1100a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8120, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1100b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8120, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1101a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8128, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:5, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1101b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8128, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:5, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1102a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8130, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:6, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1102b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8130, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:6, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1103a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8138, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:7, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1103b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8138, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:7, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1104a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8139, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:8, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1104b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8139, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 1, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:8, iib->stype:0 init:dstdata
  uint8 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint8)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1105a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8150, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:2, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1105b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8150, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:2, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1106a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8158, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=2, ADDRREG(dstreg)-2);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:3, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1106b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8158, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=2, ADDRREG(dstreg)-2);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:3, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1107a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8160, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=2;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1107b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8160, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=2;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1108a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8168, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:5, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1108b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8168, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:5, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1109a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8170, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:6, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1109b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8170, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:6, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1110a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8178, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:7, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1110b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8178, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:7, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1111a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8179, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:8, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1111b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 8179, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint16 dstdata = fetchword(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:8, iib->stype:0 init:dstdata
  uint16 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storeword(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint16)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1112a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8190, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:2, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1112b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8190, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 2, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:2, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg);
//type:1 datatype: 2, iib->dtype:2, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:2, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:2, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1113a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8198, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=4, ADDRREG(dstreg)-4);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:3, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1113b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 8198, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 3, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:3, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)+=4, ADDRREG(dstreg)-4);
//type:1 datatype: 3, iib->dtype:3, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:3, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:3, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1114a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 81a0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=4;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1114b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 81a0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 4, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:4, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = ADDRREG(dstreg)-=4;
//type:1 datatype: 4, iib->dtype:4, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1115a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 81a8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:5, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1115b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 81a8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 5, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:5, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + (sint32)(sint16)ipc->dst;
//type:1 datatype: 5, iib->dtype:5, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:5, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:5, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1116a(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 81b0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:6, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1116b(t_ipc *ipc) /* OR */ {
  /* mask f1f8, bits 81b0, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 6, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:6, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  int dstreg = (ipc->opcode >> 0) & 7;
  uint32 dstaddr = (sint32)ADDRREG(dstreg) + idxval_dst(ipc);
//type:1 datatype: 6, iib->dtype:6, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:6, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:6, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1117a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 81b8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:7, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1117b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 81b8, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 7, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:7, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 7, iib->dtype:7, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:7, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:7, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1118a(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 81b9, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:8, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1118b(t_ipc *ipc) /* OR */ {
  /* mask f1ff, bits 81b9, mnemonic 1, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 3, stype 0, dtype 8, sbitpos 9, dbitpos 0, immvalue 0 */
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  int srcreg = (ipc->opcode >> 9) & 7;
//type:0 datatype: 0, iib->dtype:8, iib->stype:0
  uint32 srcdata = DATAREG(srcreg);
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstaddr = ipc->dst;
//type:1 datatype: 8, iib->dtype:8, iib->stype:0
  uint32 dstdata = fetchlong(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:8, iib->stype:0 init:dstdata
  uint32 outdata = dstdata;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  outdata|= srcdata;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:8, iib->stype:0
  storelong(dstaddr, outdata);

ABORT_OPCODE_CHK();

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  NFLAG = ((sint32)outdata) < 0;
  ZFLAG = !outdata;
  VFLAG = 0;
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1119a(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80c0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1119b(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80c0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1120a(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80d0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1120b(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80d0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1121a(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80d8, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1121b(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80d8, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1122a(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80e0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1122b(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80e0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1123a(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80e8, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1123b(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80e8, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1124a(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80f0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1124b(t_ipc *ipc) /* DIVU */ {
  /* mask f1f8, bits 80f0, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1125a(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80f8, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1125b(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80f8, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1126a(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80f9, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+6,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1126b(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80f9, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+6,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1127a(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80fa, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1127b(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80fa, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1128a(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80fb, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1128b(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80fb, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1129a(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80fc, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
  }
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1129b(t_ipc *ipc) /* DIVU */ {
  /* mask f1ff, bits 80fc, mnemonic 64, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstdata = DATAREG(dstreg);
  uint32 quotient;

#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif

  if (srcdata == 0) {
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / srcdata;
  if ((quotient & 0xffff0000) == 0) {
    DATAREG(dstreg) = quotient |     (((uint16)(dstdata % srcdata))<<16);
    VFLAG = 0;
  ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
  NFLAG = !!((quotient & 0x80000));
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1130a(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81c0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1130b(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81c0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint16 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1131a(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81d0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1131b(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81d0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 2, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1132a(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81d8, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1132b(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81d8, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 3, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1133a(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81e0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1133b(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81e0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 4, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+2,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1134a(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81e8, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1134b(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81e8, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 5, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1135a(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81f0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1135b(t_ipc *ipc) /* DIVS */ {
  /* mask f1f8, bits 81f0, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 6, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
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
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1136a(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81f8, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1136b(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81f8, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 7, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint32 srcaddr = ipc->src;
//type:0 datatype: 7, iib->dtype:0, iib->stype:7
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:7
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1137a(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81f9, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+6,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1137b(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81f9, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 8, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint32 srcaddr = ipc->src;
//type:0 datatype: 8, iib->dtype:0, iib->stype:8
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:8
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+6,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 6;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1138a(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81fa, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1138b(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81fa, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 9, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint32 srcaddr = ipc->src;
//type:0 datatype: 9, iib->dtype:0, iib->stype:9
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:9
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1139a(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81fb, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1139b(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81fb, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 10, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint32 srcaddr = idxval_src(ipc);
//type:0 datatype: 10, iib->dtype:0, iib->stype:10
  uint16 srcdata = fetchword(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 0, iib->dtype:0, iib->stype:10
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1140a(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81fc, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1140b(t_ipc *ipc) /* DIVS */ {
  /* mask f1ff, bits 81fc, mnemonic 65, priv 0, endblk 0, imm_notzero 0, used 0     set 30, size 2, stype 12, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
//type:0 datatype: 12, iib->dtype:0, iib->stype:12
  uint16 srcdata = ipc->src;
//type:1 datatype: 0, iib->dtype:0, iib->stype:12
  int dstreg = (ipc->opcode >> 9) & 7;
  sint32 dstdata = DATAREG(dstreg);
  sint32 quotient;
  sint16 remainder;

ABORT_OPCODE_CHK();

  if (srcdata == 0) {
    ALERT_LOG(0,"DIVIDE_BY_ZERO @ %08lx src:%08lx dest:%08lx",(long)PC,(long)srcdata,(long)dstdata);
    ZFLAG=0; NFLAG=0;    reg68k_internal_vector(V_ZERO, PC+4,0);
    return;
  }
  quotient = dstdata / (sint16)srcdata;
  remainder = dstdata % (sint16)srcdata;
  if (((quotient & 0xffff8000) == 0) ||
      ((quotient & 0xffff8000) == 0xffff8000)) {
    if ((dstdata < 0) != (remainder < 0))
      remainder = -remainder;
    DATAREG(dstreg) = ((uint16)quotient) | (((uint16)(remainder))<<16);
    VFLAG = 0;
    NFLAG = ((sint16)quotient) < 0;
    ZFLAG = !((uint16)quotient);
  } else {
    VFLAG = 1;
    NFLAG = 1;
  }
  CFLAG = 0;
  PC+= 4;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1141a(t_ipc *ipc) /* SBCD */ {
  /* mask f1f8, bits 8100, mnemonic 36, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:(null)
  uint8 outdata;
int vflagcpy=VFLAG;
int nflagcpy=NFLAG;

  sint8 outdata_low = (dstdata & 0xF) - (srcdata & 0xF) - XFLAG;
  sint16 precalc = dstdata - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
VFLAG=vflagcpy;
NFLAG=nflagcpy;
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1141b(t_ipc *ipc) /* SBCD */ {
  /* mask f1f8, bits 8100, mnemonic 36, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 0, dtype 0, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  int srcreg = (ipc->opcode >> 0) & 7;
//type:0 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 srcdata = DATAREG(srcreg);
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  int dstreg = (ipc->opcode >> 9) & 7;
//type:1 datatype: 0, iib->dtype:0, iib->stype:0
  uint8 dstdata = DATAREG(dstreg);
//iib->dtype:0, iib->stype:0 init:(null)
  uint8 outdata;
int vflagcpy=VFLAG;
int nflagcpy=NFLAG;

  sint8 outdata_low = (dstdata & 0xF) - (srcdata & 0xF) - XFLAG;
  sint16 precalc = dstdata - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    NFLAG = 1;
  } else {
    NFLAG = 0;
  }
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:0, iib->stype:0
  DATAREG(dstreg) = (DATAREG(dstreg) & ~0xff) | outdata;
VFLAG=vflagcpy;
NFLAG=nflagcpy;
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1142a(t_ipc *ipc) /* SBCD */ {
  /* mask f1f8, bits 8108, mnemonic 36, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:4 init:(null)
  uint8 outdata;
int vflagcpy=VFLAG;
int nflagcpy=NFLAG;

  sint8 outdata_low = (dstdata & 0xF) - (srcdata & 0xF) - XFLAG;
  sint16 precalc = dstdata - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
  } else {
  }
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
  } else {
  }
  outdata = outdata_tmp;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
VFLAG=vflagcpy;
NFLAG=nflagcpy;
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1142b(t_ipc *ipc) /* SBCD */ {
  /* mask f1f8, bits 8108, mnemonic 36, priv 0, endblk 0, imm_notzero 0, used 5     set 31, size 1, stype 4, dtype 4, sbitpos 0, dbitpos 9, immvalue 0 */
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  int srcreg = (ipc->opcode >> 0) & 7;
  uint32 srcaddr = (ADDRREG(srcreg)-= (srcreg == 7 ? 2 : 1));
//type:0 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 srcdata = fetchbyte(srcaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  int dstreg = (ipc->opcode >> 9) & 7;
  uint32 dstaddr = (ADDRREG(dstreg)-= (dstreg == 7 ? 2 : 1));
//type:1 datatype: 4, iib->dtype:4, iib->stype:4
  uint8 dstdata = fetchbyte(dstaddr);

#ifndef CHK_ABRT_OPC
  #define CHK_ABRT_OPC  
#endif
//iib->dtype:4, iib->stype:4 init:(null)
  uint8 outdata;
int vflagcpy=VFLAG;
int nflagcpy=NFLAG;

  sint8 outdata_low = (dstdata & 0xF) - (srcdata & 0xF) - XFLAG;
  sint16 precalc = dstdata - srcdata - XFLAG;
  sint16 outdata_tmp = precalc;


#ifdef  CHK_ABRT_OPC
  ABORT_OPCODE_CHK();   
#endif
  if (outdata_tmp < 0) {
    outdata_tmp-= 0x60;
    NFLAG = 1;
  } else {
    NFLAG = 0;
  }
  if (outdata_low < 0)
    outdata_tmp-= 0x06;
  if (outdata_tmp < 0) {
    CFLAG = 1;
    XFLAG = 1;
  } else {
    CFLAG = 0;
    XFLAG = 0;
  }
  outdata = outdata_tmp;
  if (outdata) ZFLAG = 0;
ABORT_OPCODE_CHK();
//type:1  iib->dtype:4, iib->stype:4
  storebyte(dstaddr, outdata);

ABORT_OPCODE_CHK();
VFLAG=vflagcpy;
NFLAG=nflagcpy;
  ALERT_LOG(0,"BCD  @ %lx", (long)PC);
  PC+= 2;

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

