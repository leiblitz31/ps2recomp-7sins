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

// Function: sub_001E2FA0
// Address: 0x1e2fa0 - 0x1e3040
void sub_001E2FA0_0x1e2fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2FA0_0x1e2fa0");
#endif

    switch (ctx->pc) {
        case 0x1e2fccu: goto label_1e2fcc;
        case 0x1e2fe0u: goto label_1e2fe0;
        case 0x1e2ff0u: goto label_1e2ff0;
        case 0x1e3008u: goto label_1e3008;
        case 0x1e301cu: goto label_1e301c;
        case 0x1e302cu: goto label_1e302c;
        default: break;
    }

    ctx->pc = 0x1e2fa0u;

    // 0x1e2fa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e2fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2fac: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e2facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e2fb0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1e2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1e2fb4: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1e2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1e2fb8: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x1e2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x1e2fbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2fc0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e2fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e2fc4: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2FC4u;
    SET_GPR_U32(ctx, 31, 0x1E2FCCu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2FC4u, 0x1E2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FCCu;
label_1e2fcc:
    // 0x1e2fcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2fd0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1e2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2fd4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e2fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2fd8: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x1E2FD8u;
    SET_GPR_U32(ctx, 31, 0x1E2FE0u);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x1E2FD8u, 0x1E2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FE0u;
label_1e2fe0:
    // 0x1e2fe0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e2fe4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e2fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2fe8: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2FE8u;
    SET_GPR_U32(ctx, 31, 0x1E2FF0u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2FE8u, 0x1E2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FF0u;
label_1e2ff0:
    // 0x1e2ff0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1e2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e2ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ff8: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e2ffc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e2ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3000: 0xc078a50  jal         func_1E2940
    ctx->pc = 0x1E3000u;
    SET_GPR_U32(ctx, 31, 0x1E3008u);
    ctx->pc = 0x1E2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2940u, 0x1E3000u, 0x1E3008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3008u;
label_1e3008:
    // 0x1e3008: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e300c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e300cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e3010: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1e3010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e3014: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x1E3014u;
    SET_GPR_U32(ctx, 31, 0x1E301Cu);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x1E3014u, 0x1E301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E301Cu;
label_1e301c:
    // 0x1e301c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3020: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3024: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E3024u;
    SET_GPR_U32(ctx, 31, 0x1E302Cu);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E3024u, 0x1E302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E302Cu;
label_1e302c:
    // 0x1e302c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e302cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3034: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1e3034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e3038: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3040u;
}
