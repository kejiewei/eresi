/**
* @file libasm/src/arch/ia32/handlers/op_sub_rmv_rv.c
 *
 * @ingroup IA32_instrs
** $Id: op_sub_rmv_rv.c 1397 2009-09-13 02:19:08Z may $
**
*/
#include <libasm.h>
#include <libasm-int.h>

/**
 * @brief Handler for instruction sub rmv,rv opcode 0x29
 * @param instr Pointer to instruction structure.
 * @param opcode Pointer to data to disassemble.
 * @param len Length of data to disassemble.
 * @param proc Pointer to processor structure.
 * @return Length of instruction.
 */

int op_sub_rmv_rv(asm_instr *new, u_char *opcode, u_int len, 
                  asm_processor *proc)
{
  new->len += 1;
  new->ptr_instr = opcode;
  new->instr = ASM_SUB;
  new->type = ASM_TYPE_ARITH | ASM_TYPE_WRITEFLAG;
  new->flagswritten = ASM_FLAG_AF | ASM_FLAG_CF | ASM_FLAG_PF |
                        ASM_FLAG_OF | ASM_FLAG_SF | ASM_FLAG_ZF;

#if WIP
  new->len += asm_operand_fetch(&new->op[0], opcode + 1, ASM_OTYPE_ENCODED,
                                new, 0);
  new->len += asm_operand_fetch(&new->op[1], opcode + 1,
                                ASM_OTYPE_GENERAL, new, 0);
#else
  new->len += asm_operand_fetch(&new->op[0], opcode + 1, ASM_OTYPE_ENCODED,
                                new);
  new->len += asm_operand_fetch(&new->op[1], opcode + 1,
                                ASM_OTYPE_GENERAL, new);
#endif

  return (new->len);
}
