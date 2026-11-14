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

// Function: sub_004E6EA0
// Address: 0x4e6ea0 - 0x4e6eb8
void sub_004E6EA0_0x4e6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6EA0_0x4e6ea0");
#endif

    switch (ctx->pc) {
        case 0x4e6ea8u: goto label_4e6ea8;
        default: break;
    }

    ctx->pc = 0x4e6ea0u;

    // 0x4e6ea0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6EA0u;
    {
        const bool branch_taken_0x4e6ea0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6ea0) {
            ctx->pc = 0x4E6EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6EA0u;
            // 0x4e6ea4: 0x4d414c46  .word       0x4D414C46                   # INVALID     $t2, $at, 0x4C46 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6EA4 raw=0x4D414C46");
            ctx->in_delay_slot = false;
            ctx->pc = 0x502448u;
            return;
        }
    }
    ctx->pc = 0x4E6EA8u;
label_4e6ea8:
    // 0x4e6ea8: 0x545f5942  bnel        $v0, $ra, . + 4 + (0x5942 << 2)
    ctx->pc = 0x4E6EA8u;
    {
        const bool branch_taken_0x4e6ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x4e6ea8) {
            ctx->pc = 0x4E6EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6EA8u;
            // 0x4e6eac: 0x4c494152  .word       0x4C494152                   # INVALID     $v0, $t1, 0x4152 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6EAC raw=0x4C494152");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD3B4u;
            return;
        }
    }
    ctx->pc = 0x4E6EB0u;
    // 0x4e6eb0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4e6eb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6eb4: 0x0  nop
    ctx->pc = 0x4e6eb4u;
    // NOP
    ctx->pc = 0x4e6eb8u;
}
