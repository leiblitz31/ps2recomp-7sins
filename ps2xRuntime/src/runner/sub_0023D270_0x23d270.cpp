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

// Function: sub_0023D270
// Address: 0x23d270 - 0x23d2d0
void sub_0023D270_0x23d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D270_0x23d270");
#endif

    switch (ctx->pc) {
        case 0x23d28cu: goto label_23d28c;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2b0u: goto label_23d2b0;
        default: break;
    }

    ctx->pc = 0x23d270u;

    // 0x23d270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23d27c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23d280: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d284: 0xc08f550  jal         func_23D540
    ctx->pc = 0x23D284u;
    SET_GPR_U32(ctx, 31, 0x23D28Cu);
    ctx->pc = 0x23D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D540u, 0x23D284u, 0x23D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D28Cu;
label_23d28c:
    // 0x23d28c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d290: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d294: 0xc08f548  jal         func_23D520
    ctx->pc = 0x23D294u;
    SET_GPR_U32(ctx, 31, 0x23D29Cu);
    ctx->pc = 0x23D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D520u, 0x23D294u, 0x23D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D29Cu;
label_23d29c:
    // 0x23d29c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d2a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23d2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2a8: 0xc08f4b4  jal         func_23D2D0
    ctx->pc = 0x23D2A8u;
    SET_GPR_U32(ctx, 31, 0x23D2B0u);
    ctx->pc = 0x23D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2D0u, 0x23D2A8u, 0x23D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2B0u;
label_23d2b0:
    // 0x23d2b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23d2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d2b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23d2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x23D2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D2C4u;
    // 0x23d2c4: 0x0  nop
    ctx->pc = 0x23d2c4u;
    // NOP
    // 0x23d2c8: 0x0  nop
    ctx->pc = 0x23d2c8u;
    // NOP
    // 0x23d2cc: 0x0  nop
    ctx->pc = 0x23d2ccu;
    // NOP
    ctx->pc = 0x23d2d0u;
}
