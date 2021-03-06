/*
** $Id: i386_rdtsc.c 1311 2009-01-14 20:36:48Z may $
**
*/
#include <libasm.h>
#include <libasm-int.h>

/*
  <i386 func="i386_rdtsc" opcode="0x31"/>
 */

int     i386_rdtsc(asm_instr *new, u_char *opcode, u_int len,
		   asm_processor *proc)
{
  new->ptr_instr = opcode;
  new->len += 1;
  new->instr = ASM_RDTSC;
  return (new->len);
}
