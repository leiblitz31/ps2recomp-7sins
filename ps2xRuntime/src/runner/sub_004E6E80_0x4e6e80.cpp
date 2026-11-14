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

// Function: sub_004E6E80
// Address: 0x4e6e80 - 0x4e6ea0
void sub_004E6E80_0x4e6e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6E80_0x4e6e80");
#endif

    ctx->pc = 0x4e6e80u;

    // 0x4e6e80: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6E80u;
    {
        const bool branch_taken_0x4e6e80 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6e80) {
            ctx->pc = 0x4E6E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E80u;
            // 0x4e6e84: 0x4d414c46  .word       0x4D414C46                   # INVALID     $t2, $at, 0x4C46 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6E84 raw=0x4D414C46");
            ctx->in_delay_slot = false;
            ctx->pc = 0x502428u;
            return;
        }
    }
    ctx->pc = 0x4E6E88u;
    // 0x4e6e88: 0x545f5942  bnel        $v0, $ra, . + 4 + (0x5942 << 2)
    ctx->pc = 0x4E6E88u;
    {
        const bool branch_taken_0x4e6e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x4e6e88) {
            ctx->pc = 0x4E6E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6E88u;
            // 0x4e6e8c: 0x4c494152  .word       0x4C494152                   # INVALID     $v0, $t1, 0x4152 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6E8C raw=0x4C494152");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD394u;
            return;
        }
    }
    ctx->pc = 0x4E6E90u;
    // 0x4e6e90: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x4e6e90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6e94: 0x0  nop
    ctx->pc = 0x4e6e94u;
    // NOP
    // 0x4e6e98: 0x0  nop
    ctx->pc = 0x4e6e98u;
    // NOP
    // 0x4e6e9c: 0x0  nop
    ctx->pc = 0x4e6e9cu;
    // NOP
    ctx->pc = 0x4e6ea0u;
}
