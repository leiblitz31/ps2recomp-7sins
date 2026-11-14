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

// Function: sub_002700E0
// Address: 0x2700e0 - 0x270150
void sub_002700E0_0x2700e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002700E0_0x2700e0");
#endif

    switch (ctx->pc) {
        case 0x270118u: goto label_270118;
        case 0x270130u: goto label_270130;
        default: break;
    }

    ctx->pc = 0x2700e0u;

    // 0x2700e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2700e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2700e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2700e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2700e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2700e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2700ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2700ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2700f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2700f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2700f4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2700f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2700f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2700f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2700fc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2700fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x270100: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x270100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270104: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x270104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x270108: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x270108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27010c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x27010cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x270110: 0xc09c054  jal         func_270150
    ctx->pc = 0x270110u;
    SET_GPR_U32(ctx, 31, 0x270118u);
    ctx->pc = 0x270150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270150u, 0x270110u, 0x270118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270118u;
label_270118:
    // 0x270118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27011c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270124: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x270124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x270128: 0xc09bf48  jal         func_26FD20
    ctx->pc = 0x270128u;
    SET_GPR_U32(ctx, 31, 0x270130u);
    ctx->pc = 0x26FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD20u, 0x270128u, 0x270130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270130u;
label_270130:
    // 0x270130: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x270130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270134: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x270134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x270138: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x270138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27013c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27013cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270144: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x270144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x270148: 0x3e00008  jr          $ra
    ctx->pc = 0x270148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270150u;
}
