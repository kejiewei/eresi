/*
** $Id: i386_emms.c 1311 2009-01-14 20:36:48Z may $
**
*/
#include <libasm.h>
#include <libasm-int.h>

/*
  <i386 func="i386_emms" opcode="0x77"/>
 */

int     i386_emms(asm_instr *new, u_char *opcode, u_int len,
		  asm_processor *proc)
{
  new->len += 1;
  new->ptr_instr = opcode;
  new->instr = ASM_MOVQ;

  return (new->len);
}
