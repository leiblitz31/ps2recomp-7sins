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

// Function: sub_00274FA0
// Address: 0x274fa0 - 0x275010
void sub_00274FA0_0x274fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274FA0_0x274fa0");
#endif

    switch (ctx->pc) {
        case 0x274fd8u: goto label_274fd8;
        case 0x274ff0u: goto label_274ff0;
        default: break;
    }

    ctx->pc = 0x274fa0u;

    // 0x274fa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x274fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x274fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274fac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x274facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x274fb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x274fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x274fb4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x274fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x274fb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274fbc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x274fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x274fc0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x274fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274fc4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x274fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274fc8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x274fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274fcc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x274fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x274fd0: 0xc09d404  jal         func_275010
    ctx->pc = 0x274FD0u;
    SET_GPR_U32(ctx, 31, 0x274FD8u);
    ctx->pc = 0x275010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275010u, 0x274FD0u, 0x274FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FD8u;
label_274fd8:
    // 0x274fd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274fdc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274fe4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x274fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274fe8: 0xc096278  jal         func_2589E0
    ctx->pc = 0x274FE8u;
    SET_GPR_U32(ctx, 31, 0x274FF0u);
    ctx->pc = 0x2589E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589E0u, 0x274FE8u, 0x274FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274FF0u;
label_274ff0:
    // 0x274ff0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x274ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274ff4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x274ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x274ff8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x274ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275004: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x275004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x275008: 0x3e00008  jr          $ra
    ctx->pc = 0x275008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275010u;
}
