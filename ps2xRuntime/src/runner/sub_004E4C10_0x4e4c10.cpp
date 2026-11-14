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

// Function: sub_004E4C10
// Address: 0x4e4c10 - 0x4e4c20
void sub_004E4C10_0x4e4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C10_0x4e4c10");
#endif

    switch (ctx->pc) {
        case 0x4e4c1cu: goto label_4e4c1c;
        default: break;
    }

    ctx->pc = 0x4e4c10u;

    // 0x4e4c10: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4C10u;
    {
        const bool branch_taken_0x4e4c10 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4c10) {
            ctx->pc = 0x4E4C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4C10u;
            // 0x4e4c14: 0x616c6572  daddi       $t4, $t3, 0x6572 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8CACu;
            return;
        }
    }
    ctx->pc = 0x4E4C18u;
    // 0x4e4c18: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e4c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_4e4c1c:
    // 0x4e4c1c: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x4e4c1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e4c20u;
}
