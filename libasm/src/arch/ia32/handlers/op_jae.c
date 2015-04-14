/*
** $Id: op_jae.c 1413 2010-05-21 03:41:25Z figueredo $
**
*/
#include <libasm.h>
#include <libasm-int.h>

/*
  <instruction func="op_jae" opcode="0x73"/>
*/


int  op_jae(asm_instr *new, u_char *opcode, u_int len, asm_processor *proc)
{
  new->len += 1;
  new->type = ASM_TYPE_BRANCH | ASM_TYPE_CONDCONTROL;
  new->instr = ASM_BRANCH_U_GREATER_EQUAL;
  new->ptr_instr = opcode;

#if WIP
  new->len += asm_operand_fetch(&new->op[0], opcode + 1, ASM_OTYPE_SHORTJUMP,                                new, 0);
#else
  new->len += asm_operand_fetch(&new->op[0], opcode + 1, ASM_OTYPE_SHORTJUMP,                                new);
#endif

  return (new->len);
}
