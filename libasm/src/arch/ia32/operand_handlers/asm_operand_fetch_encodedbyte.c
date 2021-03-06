/**
* @file libasm/src/arch/ia32/operand_handlers/asm_operand_fetch_encodedbyte.c
 *
 * @ingroup IA32_operands
 * $Id: asm_operand_fetch_encodedbyte.c 1397 2009-09-13 02:19:08Z may $
 */

#include <libasm.h>
#include <libasm-int.h>

/**
 *
 * @ingroup IA32_operands
 * Decode data for operand type ASM_OTYPE_ENCODEDBYTE
 * @param operand Pointer to operand structure to fill.
 * @param opcode Pointer to operand data
 * @param otype
 * @param ins Pointer to instruction structure.
 * @return Operand length
 */

#if WIP
int     asm_operand_fetch_encodedbyte(asm_operand *operand, u_char *opcode, int otype, 
				asm_instr *ins, int opt)
#else
int     asm_operand_fetch_encodedbyte(asm_operand *operand, u_char *opcode, 
				      int otype, asm_instr *ins)
#endif
{ 
  int	len;
  
  operand->type = ASM_OTYPE_ENCODED;
  len = operand_rmb(operand, opcode, 5, ins->proc);
  operand->sbaser = get_reg_intel(operand->baser, operand->regset);
  operand->sindex = get_reg_intel(operand->indexr, operand->regset);
  return (len);
}
