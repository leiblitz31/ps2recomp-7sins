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

// Function: sub_0014A490
// Address: 0x14a490 - 0x14a510
void sub_0014A490_0x14a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A490_0x14a490");
#endif

    switch (ctx->pc) {
        case 0x14a4b0u: goto label_14a4b0;
        case 0x14a4c0u: goto label_14a4c0;
        case 0x14a4d8u: goto label_14a4d8;
        case 0x14a4f0u: goto label_14a4f0;
        default: break;
    }

    ctx->pc = 0x14a490u;

    // 0x14a490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a49c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14a4a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a4a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14a4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a4a8: 0xc052944  jal         func_14A510
    ctx->pc = 0x14A4A8u;
    SET_GPR_U32(ctx, 31, 0x14A4B0u);
    ctx->pc = 0x14A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A510u, 0x14A4A8u, 0x14A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4B0u;
label_14a4b0:
    // 0x14a4b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x14a4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a4b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a4b8: 0xc0528e8  jal         func_14A3A0
    ctx->pc = 0x14A4B8u;
    SET_GPR_U32(ctx, 31, 0x14A4C0u);
    ctx->pc = 0x14A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3A0u, 0x14A4B8u, 0x14A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4C0u;
label_14a4c0:
    // 0x14a4c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14a4c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a4c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14a4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a4cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a4d0: 0xc047058  jal         func_11C160
    ctx->pc = 0x14A4D0u;
    SET_GPR_U32(ctx, 31, 0x14A4D8u);
    ctx->pc = 0x11C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C160u, 0x14A4D0u, 0x14A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4D8u;
label_14a4d8:
    // 0x14a4d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x14a4dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a4e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14a4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a4e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a4e8: 0xc0528e0  jal         func_14A380
    ctx->pc = 0x14A4E8u;
    SET_GPR_U32(ctx, 31, 0x14A4F0u);
    ctx->pc = 0x14A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A380u, 0x14A4E8u, 0x14A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4F0u;
label_14a4f0:
    // 0x14a4f0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x14a4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a4fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a500: 0x3e00008  jr          $ra
    ctx->pc = 0x14A500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A508u;
    // 0x14a508: 0x0  nop
    ctx->pc = 0x14a508u;
    // NOP
    // 0x14a50c: 0x0  nop
    ctx->pc = 0x14a50cu;
    // NOP
    ctx->pc = 0x14a510u;
}
