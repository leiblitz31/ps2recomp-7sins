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

// Function: sub_001C2720
// Address: 0x1c2720 - 0x1c2770
void sub_001C2720_0x1c2720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2720_0x1c2720");
#endif

    switch (ctx->pc) {
        case 0x1c2758u: goto label_1c2758;
        default: break;
    }

    ctx->pc = 0x1c2720u;

    // 0x1c2720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c2728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c272c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c272cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c2730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2734: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c2734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1c2738: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c273c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1c273cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c2740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2744: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c2744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c2748: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c2748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c274c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c274cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2750: 0xc0709dc  jal         func_1C2770
    ctx->pc = 0x1C2750u;
    SET_GPR_U32(ctx, 31, 0x1C2758u);
    ctx->pc = 0x1C2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2770u, 0x1C2750u, 0x1C2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2758u;
label_1c2758:
    // 0x1c2758: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c275c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c275cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2760: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c2760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c2764: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C276Cu;
    // 0x1c276c: 0x0  nop
    ctx->pc = 0x1c276cu;
    // NOP
    ctx->pc = 0x1c2770u;
}
