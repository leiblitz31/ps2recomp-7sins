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

// Function: sub_002F3030
// Address: 0x2f3030 - 0x2f3080
void sub_002F3030_0x2f3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3030_0x2f3030");
#endif

    switch (ctx->pc) {
        case 0x2f3058u: goto label_2f3058;
        case 0x2f3068u: goto label_2f3068;
        case 0x2f3074u: goto label_2f3074;
        default: break;
    }

    ctx->pc = 0x2f3030u;

label_2f3030:
    // 0x2f3030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f3030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f3034: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f3034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f3038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f303c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f303cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3040: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f3040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3044: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2f3044u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f3048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f304c: 0x80bc846  j           func_2F2118
    ctx->pc = 0x2F304Cu;
    ctx->pc = 0x2F3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F304Cu;
    // 0x2f3050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2118u;
    entry_2f2118_0x2f3030(rdram, ctx, runtime); return;
    ctx->pc = 0x2F3054u;
    // 0x2f3054: 0x0  nop
    ctx->pc = 0x2f3054u;
    // NOP
label_2f3058:
    // 0x2f3058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f3058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f305c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f3060: 0xc0bcc0c  jal         func_2F3030
    ctx->pc = 0x2F3060u;
    SET_GPR_U32(ctx, 31, 0x2F3068u);
    ctx->pc = 0x2F3030u;
    goto label_2f3030;
    ctx->pc = 0x2F3068u;
label_2f3068:
    // 0x2f3068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f3068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f306c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2F306Cu;
    SET_GPR_U32(ctx, 31, 0x2F3074u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2F306Cu, 0x2F3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3074u;
label_2f3074:
    // 0x2f3074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3078: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3078u;
        // 0x2f307c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3080u;
}
