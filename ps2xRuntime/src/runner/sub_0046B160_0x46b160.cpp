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

// Function: sub_0046B160
// Address: 0x46b160 - 0x46b1b0
void sub_0046B160_0x46b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B160_0x46b160");
#endif

    switch (ctx->pc) {
        case 0x46b180u: goto label_46b180;
        case 0x46b198u: goto label_46b198;
        default: break;
    }

    ctx->pc = 0x46b160u;

    // 0x46b160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46b164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46b168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46b168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46b16c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46b170: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46b170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b174: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46b174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b178: 0xc042844  jal         func_10A110
    ctx->pc = 0x46B178u;
    SET_GPR_U32(ctx, 31, 0x46B180u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x46B178u, 0x46B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B180u;
label_46b180:
    // 0x46b180: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b188: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x46b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x46b18c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x46b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46b190: 0xc11a918  jal         func_46A460
    ctx->pc = 0x46B190u;
    SET_GPR_U32(ctx, 31, 0x46B198u);
    ctx->pc = 0x46A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A460u, 0x46B190u, 0x46B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B198u;
label_46b198:
    // 0x46b198: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b19c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46b19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b1a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46b1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x46B1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B1ACu;
    // 0x46b1ac: 0x0  nop
    ctx->pc = 0x46b1acu;
    // NOP
    ctx->pc = 0x46b1b0u;
}
