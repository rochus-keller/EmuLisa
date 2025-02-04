/*****************************************************************************/
/*     Generator - Sega Genesis emulation - (c) James Ponder 1997-2001       */
/*****************************************************************************/
/*                                                                           */
/* cpu68k-6.c                                                                */
/*                                                                           */
/*****************************************************************************/

#include <cpu68k-inline.h>



static uint8 b1,b2,b3,b4; static uint16 w1,w2,w3,w4; static uint32 l1, l2, l3, l4;

void cpu_op_1032a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6000, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = 1;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1033a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6200, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !(CFLAG || ZFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1034a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6300, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = CFLAG || ZFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1035a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6400, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !CFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1036a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6500, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = CFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1037a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6600, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !ZFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1038a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6700, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = ZFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1039a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6800, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !VFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1040a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6900, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = VFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1041a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6a00, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !NFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1042a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6b00, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = NFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1043a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6c00, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = (NFLAG == VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1044a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6d00, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = (NFLAG != VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1045a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6e00, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !ZFLAG && (NFLAG == VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1046a(t_ipc *ipc) /* Bcc */ {
  /* mask ffff, bits 6f00, mnemonic 62, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = ZFLAG || (NFLAG != VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 4;                       }

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1047a(t_ipc *ipc) /* BSR */ {
  /* mask ffff, bits 6100, mnemonic 63, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 2, stype 12, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+4);

ABORT_OPCODE_CHK();
  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff);

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1048a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6000, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = 1;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1049a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6200, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !(CFLAG || ZFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1050a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6300, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = CFLAG || ZFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1051a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6400, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !CFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1052a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6500, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = CFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1053a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6600, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !ZFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1054a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6700, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = ZFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1055a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6800, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !VFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1056a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6900, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = VFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1057a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6a00, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !NFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1058a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6b00, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = NFLAG;

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1059a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6c00, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = (NFLAG == VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1060a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6d00, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = (NFLAG != VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1061a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6e00, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = !ZFLAG && (NFLAG == VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1062a(t_ipc *ipc) /* Bcc */ {
  /* mask ff00, bits 6f00, mnemonic 62, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;
  uint8 cc = ZFLAG || (NFLAG != VFLAG);

  uint32 oldpc=PC;
  if (cc) {
    {  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff); cpu68k_clocks+=(10-8);}
        if (oldpc==PC) {
            cpu68k_clocks+=10000; }
  } else
    {PC+= 2; cpu68k_clocks+=(12-8);}

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

void cpu_op_1063a(t_ipc *ipc) /* BSR */ {
  /* mask ff00, bits 6100, mnemonic 63, priv 0, endblk 1, imm_notzero 1, used 31     set 0, size 1, stype 17, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */
  uint32 srcdata = ipc->src;

  ADDRREG(7)-= 4;
  storelong(ADDRREG(7), PC+2);

ABORT_OPCODE_CHK();
  PC = (PC & 0xff000000) | (srcdata & 0x00ffffff);

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

