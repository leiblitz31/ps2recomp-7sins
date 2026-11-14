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

// Function: sub_00222640
// Address: 0x222640 - 0x2226c0
void sub_00222640_0x222640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222640_0x222640");
#endif

    switch (ctx->pc) {
        case 0x222660u: goto label_222660;
        case 0x222670u: goto label_222670;
        case 0x222688u: goto label_222688;
        case 0x2226a0u: goto label_2226a0;
        default: break;
    }

    ctx->pc = 0x222640u;

    // 0x222640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22264c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22264cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x222650: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x222650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222654: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x222654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222658: 0xc0889b0  jal         func_2226C0
    ctx->pc = 0x222658u;
    SET_GPR_U32(ctx, 31, 0x222660u);
    ctx->pc = 0x2226C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226C0u, 0x222658u, 0x222660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222660u;
label_222660:
    // 0x222660: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x222660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x222664: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x222664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222668: 0xc0863ac  jal         func_218EB0
    ctx->pc = 0x222668u;
    SET_GPR_U32(ctx, 31, 0x222670u);
    ctx->pc = 0x218EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EB0u, 0x222668u, 0x222670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222670u;
label_222670:
    // 0x222670: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x222670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x222674: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x222674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222678: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x222678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22267c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222680: 0xc086228  jal         func_2188A0
    ctx->pc = 0x222680u;
    SET_GPR_U32(ctx, 31, 0x222688u);
    ctx->pc = 0x2188A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188A0u, 0x222680u, 0x222688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222688u;
label_222688:
    // 0x222688: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x222688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x22268c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222690: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x222690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222694: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x222694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222698: 0xc0883a8  jal         func_220EA0
    ctx->pc = 0x222698u;
    SET_GPR_U32(ctx, 31, 0x2226A0u);
    ctx->pc = 0x220EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EA0u, 0x222698u, 0x2226A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2226A0u;
label_2226a0:
    // 0x2226a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2226a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2226a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2226a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2226a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2226a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2226ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2226acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2226b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2226B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2226B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2226B8u;
    // 0x2226b8: 0x0  nop
    ctx->pc = 0x2226b8u;
    // NOP
    // 0x2226bc: 0x0  nop
    ctx->pc = 0x2226bcu;
    // NOP
    ctx->pc = 0x2226c0u;
}
