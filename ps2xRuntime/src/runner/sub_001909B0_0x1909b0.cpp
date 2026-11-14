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

// Function: sub_001909B0
// Address: 0x1909b0 - 0x190a30
void sub_001909B0_0x1909b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001909B0_0x1909b0");
#endif

    switch (ctx->pc) {
        case 0x1909d0u: goto label_1909d0;
        case 0x1909e0u: goto label_1909e0;
        case 0x1909f8u: goto label_1909f8;
        case 0x190a10u: goto label_190a10;
        default: break;
    }

    ctx->pc = 0x1909b0u;

    // 0x1909b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1909b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1909b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1909b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1909b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1909b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1909bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1909bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1909c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1909c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1909c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1909c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1909c8: 0xc06428c  jal         func_190A30
    ctx->pc = 0x1909C8u;
    SET_GPR_U32(ctx, 31, 0x1909D0u);
    ctx->pc = 0x190A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190A30u, 0x1909C8u, 0x1909D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1909D0u;
label_1909d0:
    // 0x1909d0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1909d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1909d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1909d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1909d8: 0xc06412c  jal         func_1904B0
    ctx->pc = 0x1909D8u;
    SET_GPR_U32(ctx, 31, 0x1909E0u);
    ctx->pc = 0x1904B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904B0u, 0x1909D8u, 0x1909E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1909E0u;
label_1909e0:
    // 0x1909e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1909e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1909e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1909e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1909e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1909e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1909ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1909f0: 0xc064124  jal         func_190490
    ctx->pc = 0x1909F0u;
    SET_GPR_U32(ctx, 31, 0x1909F8u);
    ctx->pc = 0x190490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190490u, 0x1909F0u, 0x1909F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1909F8u;
label_1909f8:
    // 0x1909f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1909f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1909fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1909fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190a00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x190a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190a04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190a08: 0xc06411c  jal         func_190470
    ctx->pc = 0x190A08u;
    SET_GPR_U32(ctx, 31, 0x190A10u);
    ctx->pc = 0x190470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190470u, 0x190A08u, 0x190A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A10u;
label_190a10:
    // 0x190a10: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x190a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x190a14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190a1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190a20: 0x3e00008  jr          $ra
    ctx->pc = 0x190A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190A28u;
    // 0x190a28: 0x0  nop
    ctx->pc = 0x190a28u;
    // NOP
    // 0x190a2c: 0x0  nop
    ctx->pc = 0x190a2cu;
    // NOP
    ctx->pc = 0x190a30u;
}
