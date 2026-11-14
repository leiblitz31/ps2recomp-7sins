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

// Function: sub_00149F80
// Address: 0x149f80 - 0x14a000
void sub_00149F80_0x149f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149F80_0x149f80");
#endif

    switch (ctx->pc) {
        case 0x149fa0u: goto label_149fa0;
        case 0x149fb0u: goto label_149fb0;
        case 0x149fc8u: goto label_149fc8;
        case 0x149fe0u: goto label_149fe0;
        default: break;
    }

    ctx->pc = 0x149f80u;

    // 0x149f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149f8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x149f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x149f90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149f94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x149f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149f98: 0xc052800  jal         func_14A000
    ctx->pc = 0x149F98u;
    SET_GPR_U32(ctx, 31, 0x149FA0u);
    ctx->pc = 0x14A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A000u, 0x149F98u, 0x149FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FA0u;
label_149fa0:
    // 0x149fa0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x149fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x149fa4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149fa8: 0xc0527a4  jal         func_149E90
    ctx->pc = 0x149FA8u;
    SET_GPR_U32(ctx, 31, 0x149FB0u);
    ctx->pc = 0x149E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E90u, 0x149FA8u, 0x149FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FB0u;
label_149fb0:
    // 0x149fb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x149fb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149fb8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x149fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149fbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149fc0: 0xc05279c  jal         func_149E70
    ctx->pc = 0x149FC0u;
    SET_GPR_U32(ctx, 31, 0x149FC8u);
    ctx->pc = 0x149E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E70u, 0x149FC0u, 0x149FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FC8u;
label_149fc8:
    // 0x149fc8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x149fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x149fcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149fd0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x149fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149fd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x149fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149fd8: 0xc052794  jal         func_149E50
    ctx->pc = 0x149FD8u;
    SET_GPR_U32(ctx, 31, 0x149FE0u);
    ctx->pc = 0x149E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E50u, 0x149FD8u, 0x149FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FE0u;
label_149fe0:
    // 0x149fe0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x149fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x149fe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x149fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149fec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x149FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149FF8u;
    // 0x149ff8: 0x0  nop
    ctx->pc = 0x149ff8u;
    // NOP
    // 0x149ffc: 0x0  nop
    ctx->pc = 0x149ffcu;
    // NOP
    ctx->pc = 0x14a000u;
}
