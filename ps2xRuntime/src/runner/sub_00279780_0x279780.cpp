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

// Function: sub_00279780
// Address: 0x279780 - 0x279800
void sub_00279780_0x279780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279780_0x279780");
#endif

    switch (ctx->pc) {
        case 0x2797a0u: goto label_2797a0;
        case 0x2797b0u: goto label_2797b0;
        case 0x2797c8u: goto label_2797c8;
        case 0x2797e0u: goto label_2797e0;
        default: break;
    }

    ctx->pc = 0x279780u;

    // 0x279780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27978c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27978cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x279790: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279794: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x279794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279798: 0xc09e600  jal         func_279800
    ctx->pc = 0x279798u;
    SET_GPR_U32(ctx, 31, 0x2797A0u);
    ctx->pc = 0x279800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279800u, 0x279798u, 0x2797A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797A0u;
label_2797a0:
    // 0x2797a0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2797a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2797a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2797a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2797a8: 0xc09e5b0  jal         func_2796C0
    ctx->pc = 0x2797A8u;
    SET_GPR_U32(ctx, 31, 0x2797B0u);
    ctx->pc = 0x2796C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796C0u, 0x2797A8u, 0x2797B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797B0u;
label_2797b0:
    // 0x2797b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2797b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2797b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2797b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2797b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2797bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2797bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2797c0: 0xc09e5a8  jal         func_2796A0
    ctx->pc = 0x2797C0u;
    SET_GPR_U32(ctx, 31, 0x2797C8u);
    ctx->pc = 0x2796A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2796A0u, 0x2797C0u, 0x2797C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797C8u;
label_2797c8:
    // 0x2797c8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2797c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2797cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2797ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2797d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2797d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2797d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2797d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2797d8: 0xc09e5a0  jal         func_279680
    ctx->pc = 0x2797D8u;
    SET_GPR_U32(ctx, 31, 0x2797E0u);
    ctx->pc = 0x279680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279680u, 0x2797D8u, 0x2797E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797E0u;
label_2797e0:
    // 0x2797e0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2797e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2797e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2797e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2797e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2797e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2797ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2797ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2797f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2797F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2797F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2797F8u;
    // 0x2797f8: 0x0  nop
    ctx->pc = 0x2797f8u;
    // NOP
    // 0x2797fc: 0x0  nop
    ctx->pc = 0x2797fcu;
    // NOP
    ctx->pc = 0x279800u;
}
