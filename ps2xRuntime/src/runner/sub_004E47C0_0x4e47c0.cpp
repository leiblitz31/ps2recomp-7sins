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

// Function: sub_004E47C0
// Address: 0x4e47c0 - 0x4e47d8
void sub_004E47C0_0x4e47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E47C0_0x4e47c0");
#endif

    ctx->pc = 0x4e47c0u;

    // 0x4e47c0: 0x544c4226  bnel        $v0, $t4, . + 4 + (0x4226 << 2)
    ctx->pc = 0x4E47C0u;
    {
        const bool branch_taken_0x4e47c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x4e47c0) {
            ctx->pc = 0x4E47C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E47C0u;
            // 0x4e47c4: 0x3230255f  andi        $s0, $s1, 0x255F (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9567);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F505Cu;
            return;
        }
    }
    ctx->pc = 0x4E47C8u;
    // 0x4e47c8: 0x32302564  andi        $s0, $s1, 0x2564
    ctx->pc = 0x4e47c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9572);
    // 0x4e47cc: 0x32302564  andi        $s0, $s1, 0x2564
    ctx->pc = 0x4e47ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9572);
    // 0x4e47d0: 0x6264  .word       0x00006264                   # and         $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e47d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e47d4: 0x0  nop
    ctx->pc = 0x4e47d4u;
    // NOP
    ctx->pc = 0x4e47d8u;
}
