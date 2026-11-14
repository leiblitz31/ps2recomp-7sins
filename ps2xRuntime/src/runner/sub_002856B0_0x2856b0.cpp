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

// Function: sub_002856B0
// Address: 0x2856b0 - 0x285730
void sub_002856B0_0x2856b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002856B0_0x2856b0");
#endif

    switch (ctx->pc) {
        case 0x2856d0u: goto label_2856d0;
        case 0x2856e0u: goto label_2856e0;
        case 0x2856f8u: goto label_2856f8;
        case 0x285710u: goto label_285710;
        default: break;
    }

    ctx->pc = 0x2856b0u;

    // 0x2856b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2856b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2856b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2856b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2856b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2856b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2856bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2856bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2856c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2856c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2856c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2856c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2856c8: 0xc0a15cc  jal         func_285730
    ctx->pc = 0x2856C8u;
    SET_GPR_U32(ctx, 31, 0x2856D0u);
    ctx->pc = 0x285730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285730u, 0x2856C8u, 0x2856D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856D0u;
label_2856d0:
    // 0x2856d0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2856d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2856d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2856d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2856d8: 0xc0a1474  jal         func_2851D0
    ctx->pc = 0x2856D8u;
    SET_GPR_U32(ctx, 31, 0x2856E0u);
    ctx->pc = 0x2851D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851D0u, 0x2856D8u, 0x2856E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856E0u;
label_2856e0:
    // 0x2856e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2856e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2856e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2856e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2856e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2856e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2856ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2856ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2856f0: 0xc0542f8  jal         func_150BE0
    ctx->pc = 0x2856F0u;
    SET_GPR_U32(ctx, 31, 0x2856F8u);
    ctx->pc = 0x150BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BE0u, 0x2856F0u, 0x2856F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856F8u;
label_2856f8:
    // 0x2856f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2856f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2856fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285700: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x285700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285704: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285708: 0xc0a146c  jal         func_2851B0
    ctx->pc = 0x285708u;
    SET_GPR_U32(ctx, 31, 0x285710u);
    ctx->pc = 0x2851B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851B0u, 0x285708u, 0x285710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285710u;
label_285710:
    // 0x285710: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x285710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x285714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28571c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28571cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285720: 0x3e00008  jr          $ra
    ctx->pc = 0x285720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285728u;
    // 0x285728: 0x0  nop
    ctx->pc = 0x285728u;
    // NOP
    // 0x28572c: 0x0  nop
    ctx->pc = 0x28572cu;
    // NOP
    ctx->pc = 0x285730u;
}
