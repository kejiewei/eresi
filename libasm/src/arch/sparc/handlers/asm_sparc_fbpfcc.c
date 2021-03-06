/**
* @file libasm/src/arch/sparc/handlers/asm_sparc_fbpfcc.c
** @ingroup SPARC_instrs
*/
/*
**
** $Id: asm_sparc_fbpfcc.c 1413 2010-05-21 03:41:25Z figueredo $
**
*/
#include "libasm.h"

int
asm_sparc_fbpfcc(asm_instr * ins, u_char * buf, u_int len,
		 asm_processor * proc)
{
  struct s_decode_pbranch opcodep;
  struct s_asm_proc_sparc *inter;
  sparc_convert_pbranch(&opcodep, buf);

  inter = proc->internals;

  ins->instr = inter->fbcc_table[opcodep.cond];

  if (ins->instr == ASM_SP_FBA)
    ins->type = ASM_TYPE_BRANCH;
  else if (ins->instr == ASM_SP_FBN)
    ins->type = ASM_TYPE_NOP;
  else
    ins->type = ASM_TYPE_BRANCH | ASM_TYPE_CONDCONTROL;

  /* Removed during flags cleanup. */
  /* ins->type = ASM_TYPE_BRANCH | ASM_TYPE_CONDCONTROL; */
  ins->nb_op = 2;
  ins->op[0].imm = opcodep.imm;
  ins->op[1].baser = opcodep.cc;
  ins->annul = opcodep.a;
  ins->prediction = opcodep.p;
  asm_sparc_op_fetch(&ins->op[0], buf, ASM_SP_OTYPE_DISPLACEMENT, ins);
  asm_sparc_op_fetch(&ins->op[1], buf, ASM_SP_OTYPE_CC, ins);
  
  return 4;
}
