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

// Function: sub_004E2F10
// Address: 0x4e2f10 - 0x4e2f20
void sub_004E2F10_0x4e2f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2F10_0x4e2f10");
#endif

    switch (ctx->pc) {
        case 0x4e2f14u: goto label_4e2f14;
        case 0x4e2f18u: goto label_4e2f18;
        default: break;
    }

    ctx->pc = 0x4e2f10u;

    // 0x4e2f10: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e2f14:
    if (ctx->pc == 0x4E2F14u) {
        ctx->pc = 0x4E2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2F10u;
        // 0x4e2f14: 0x666e6973  daddiu      $t6, $s3, 0x6973 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)26995);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2F18u;
        goto label_4e2f18;
    }
    ctx->pc = 0x4E2F10u;
    {
        const bool branch_taken_0x4e2f10 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e2f10) {
            ctx->pc = 0x4E2F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2F10u;
            // 0x4e2f14: 0x666e6973  daddiu      $t6, $s3, 0x6973 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)26995);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE4B8u;
            return;
        }
    }
    ctx->pc = 0x4E2F18u;
label_4e2f18:
    // 0x4e2f18: 0x6873616c  ldl         $s3, 0x616C($v1)
    ctx->pc = 0x4e2f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4e2f1c: 0x0  nop
    ctx->pc = 0x4e2f1cu;
    // NOP
    ctx->pc = 0x4e2f20u;
}
