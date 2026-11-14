#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECF40
// Address: 0x4ecf40 - 0x4ecf50
void sub_004ECF40_0x4ecf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF40_0x4ecf40");
#endif

    ctx->pc = 0x4ecf40u;

    // 0x4ecf40: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECF40u;
    {
        const bool branch_taken_0x4ecf40 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ecf40) {
            ctx->pc = 0x4ECF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECF40u;
            // 0x4ecf44: 0x69727453  ldl         $s2, 0x7453($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE460u;
            return;
        }
    }
    ctx->pc = 0x4ECF48u;
    // 0x4ecf48: 0x656b  .word       0x0000656B                   # sltu        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecf48u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x4ecf4c: 0x0  nop
    ctx->pc = 0x4ecf4cu;
    // NOP
    ctx->pc = 0x4ecf50u;
}
