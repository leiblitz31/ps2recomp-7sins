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

// Function: sub_0010E140
// Address: 0x10e140 - 0x10e180
void sub_0010E140_0x10e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E140_0x10e140");
#endif

    switch (ctx->pc) {
        case 0x10e158u: goto label_10e158;
        case 0x10e16cu: goto label_10e16c;
        default: break;
    }

    ctx->pc = 0x10e140u;

    // 0x10e140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e148: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10e148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10e14c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x10e14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x10e150: 0xc0438e0  jal         func_10E380
    ctx->pc = 0x10E150u;
    SET_GPR_U32(ctx, 31, 0x10E158u);
    ctx->pc = 0x10E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E380u, 0x10E150u, 0x10E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E158u;
label_10e158:
    // 0x10e158: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e15c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x10e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10e160: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10e160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e164: 0xc043860  jal         func_10E180
    ctx->pc = 0x10E164u;
    SET_GPR_U32(ctx, 31, 0x10E16Cu);
    ctx->pc = 0x10E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E180u, 0x10E164u, 0x10E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E16Cu;
label_10e16c:
    // 0x10e16c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e174: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e178: 0x3e00008  jr          $ra
    ctx->pc = 0x10E178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E180u;
}
