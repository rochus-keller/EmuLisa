/*****************************************************************************/
/*     Generator - Sega Genesis emulation - (c) James Ponder 1997-2001       */
/*****************************************************************************/
/*                                                                           */
/* cpu68k-a.c                                                                */
/*                                                                           */
/*****************************************************************************/

#include <cpu68k-inline.h>



static uint8 b1,b2,b3,b4; static uint16 w1,w2,w3,w4; static uint32 l1, l2, l3, l4;

void cpu_op_1613a(t_ipc *ipc) /* LINE10 */ {
  /* mask f000, bits a000, mnemonic 74, priv 0, endblk 1, imm_notzero 0, used 31     set 0, size 0, stype 19, dtype 20, sbitpos 0, dbitpos 0, immvalue 0 */

#ifdef DEBUG
a_line();
#endif
reg68k_internal_vector(V_LINE10, PC,0);

#ifdef  CHK_ABRT_OPC
  #undef CHK_ABRT_OPC   
#endif
}

