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

// Function: sub_004E6E60
// Address: 0x4e6e60 - 0x4e6e80
void sub_004E6E60_0x4e6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6E60_0x4e6e60");
#endif

    ctx->pc = 0x4e6e60u;

    // 0x4e6e60: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6E60u;
    {
        const bool branch_taken_0x4e6e60 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6e60) {
            ctx->pc = 0x4E6E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E60u;
            // 0x4e6e64: 0x4d414c46  .word       0x4D414C46                   # INVALID     $t2, $at, 0x4C46 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6E64 raw=0x4D414C46");
            ctx->in_delay_slot = false;
            ctx->pc = 0x502408u;
            return;
        }
    }
    ctx->pc = 0x4E6E68u;
    // 0x4e6e68: 0x545f5942  bnel        $v0, $ra, . + 4 + (0x5942 << 2)
    ctx->pc = 0x4E6E68u;
    {
        const bool branch_taken_0x4e6e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x4e6e68) {
            ctx->pc = 0x4E6E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E68u;
            // 0x4e6e6c: 0x4c494152  .word       0x4C494152                   # INVALID     $v0, $t1, 0x4152 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6E6C raw=0x4C494152");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD374u;
            return;
        }
    }
    ctx->pc = 0x4E6E70u;
    // 0x4e6e70: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x4e6e70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6e74: 0x0  nop
    ctx->pc = 0x4e6e74u;
    // NOP
    // 0x4e6e78: 0x0  nop
    ctx->pc = 0x4e6e78u;
    // NOP
    // 0x4e6e7c: 0x0  nop
    ctx->pc = 0x4e6e7cu;
    // NOP
    ctx->pc = 0x4e6e80u;
}
