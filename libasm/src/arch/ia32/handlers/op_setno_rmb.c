/**
* @file libasm/src/arch/ia32/handlers/op_setno_rmb.c
 *
 * @ingroup IA32_instrs
 * $Id: op_setno_rmb.c 1397 2009-09-13 02:19:08Z may $
 *
 */
#include <libasm.h>
#include <libasm-int.h>

/**
 * Handler for instruction setno, opcode 0x0f 0x91
 * @param new Pointer to instruction structure.
 * @param opcode Pointer to data to disassemble.
 * @param len Length of data to disassemble.
 * @param proc Pointer to processor structure.
 * @return Length of instruction.
*/

int op_setno_rmb(asm_instr *new, u_char *opcode, u_int len, 
		 asm_processor *proc)
{
  new->len += 1;
  new->instr = ASM_SET_NOT_OVERFLOW;
#if WIP
  new->len += asm_operand_fetch(&new->op[0], opcode + 1, 
				ASM_OTYPE_ENCODEDBYTE, new, 0);
#else
  new->len += asm_operand_fetch(&new->op[0], opcode + 1, 
				ASM_OTYPE_ENCODEDBYTE, new);
#endif
  return (new->len);
}

