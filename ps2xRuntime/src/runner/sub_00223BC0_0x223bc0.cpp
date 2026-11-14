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

// Function: sub_00223BC0
// Address: 0x223bc0 - 0x223c30
void sub_00223BC0_0x223bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223BC0_0x223bc0");
#endif

    switch (ctx->pc) {
        case 0x223bf8u: goto label_223bf8;
        case 0x223c10u: goto label_223c10;
        default: break;
    }

    ctx->pc = 0x223bc0u;

    // 0x223bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x223bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x223bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223bcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x223bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x223bd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x223bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x223bd4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x223bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x223bd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x223bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223bdc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x223bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x223be0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x223be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223be4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x223be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223be8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x223be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223bec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x223becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x223bf0: 0xc088f0c  jal         func_223C30
    ctx->pc = 0x223BF0u;
    SET_GPR_U32(ctx, 31, 0x223BF8u);
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x223BF0u, 0x223BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BF8u;
label_223bf8:
    // 0x223bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x223bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x223c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x223c08: 0xc088c58  jal         func_223160
    ctx->pc = 0x223C08u;
    SET_GPR_U32(ctx, 31, 0x223C10u);
    ctx->pc = 0x223160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223160u, 0x223C08u, 0x223C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C10u;
label_223c10:
    // 0x223c10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x223c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223c14: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x223c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x223c18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x223c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223c24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x223c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x223c28: 0x3e00008  jr          $ra
    ctx->pc = 0x223C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223C30u;
}
