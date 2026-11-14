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

// Function: sub_004E5DC8
// Address: 0x4e5dc8 - 0x4e5dd8
void sub_004E5DC8_0x4e5dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5DC8_0x4e5dc8");
#endif

    switch (ctx->pc) {
        case 0x4e5dccu: goto label_4e5dcc;
        default: break;
    }

    ctx->pc = 0x4e5dc8u;

    // 0x4e5dc8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e5dcc:
    if (ctx->pc == 0x4E5DCCu) {
        ctx->pc = 0x4E5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5DC8u;
        // 0x4e5dcc: 0x666c6f63  daddiu      $t4, $s3, 0x6F63 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5DD0u;
        goto label_fallthrough_0x4e5dc8;
    }
    ctx->pc = 0x4E5DC8u;
    {
        const bool branch_taken_0x4e5dc8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5dc8) {
            ctx->pc = 0x4E5DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5DC8u;
            // 0x4e5dcc: 0x666c6f63  daddiu      $t4, $s3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x501370u;
            return;
        }
    }
label_fallthrough_0x4e5dc8:
    ctx->pc = 0x4E5DD0u;
    // 0x4e5dd0: 0x68746165  ldl         $s4, 0x6165($v1)
    ctx->pc = 0x4e5dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4e5dd4: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5dd4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4e5dd8u;
}
