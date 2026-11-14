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

// Function: sub_00477430
// Address: 0x477430 - 0x4774a0
void sub_00477430_0x477430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477430_0x477430");
#endif

    switch (ctx->pc) {
        case 0x477468u: goto label_477468;
        case 0x477480u: goto label_477480;
        default: break;
    }

    ctx->pc = 0x477430u;

    // 0x477430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x477430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x477434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x477434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x477438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47743c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x47743cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x477440: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x477440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x477444: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x477444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x477448: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x477448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47744c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x47744cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x477450: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x477450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x477454: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x477454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477458: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x477458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47745c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x47745cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x477460: 0xc11dd28  jal         func_4774A0
    ctx->pc = 0x477460u;
    SET_GPR_U32(ctx, 31, 0x477468u);
    ctx->pc = 0x4774A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4774A0u, 0x477460u, 0x477468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477468u;
label_477468:
    // 0x477468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x477468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47746c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x477470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477474: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x477474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x477478: 0xc11dca4  jal         func_477290
    ctx->pc = 0x477478u;
    SET_GPR_U32(ctx, 31, 0x477480u);
    ctx->pc = 0x477290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477290u, 0x477478u, 0x477480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477480u;
label_477480:
    // 0x477480: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x477480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477484: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x477484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x477488: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x477488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47748c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47748cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477494: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x477494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x477498: 0x3e00008  jr          $ra
    ctx->pc = 0x477498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4774A0u;
}
