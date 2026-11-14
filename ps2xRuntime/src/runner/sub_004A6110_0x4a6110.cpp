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

// Function: sub_004A6110
// Address: 0x4a6110 - 0x4a6140
void sub_004A6110_0x4a6110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6110_0x4a6110");
#endif

    ctx->pc = 0x4a6110u;

    // 0x4a6110: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a6110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6114: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x4a6114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4a6118: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4a611c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x4a611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x4a6120: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x4a6120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a6124: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A6124u;
    {
        const bool branch_taken_0x4a6124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6124u;
        // 0x4a6128: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6124) {
            ctx->pc = 0x4A6134u;
            goto label_4a6134;
        }
    }
    ctx->pc = 0x4A612Cu;
    // 0x4a612c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4a612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4a6130: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4a6130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4a6134:
    // 0x4a6134: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6134u;
        // 0x4a6138: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A613Cu;
    // 0x4a613c: 0x0  nop
    ctx->pc = 0x4a613cu;
    // NOP
    ctx->pc = 0x4a6140u;
}
