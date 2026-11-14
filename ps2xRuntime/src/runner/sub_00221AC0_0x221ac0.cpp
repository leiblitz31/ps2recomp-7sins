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

// Function: sub_00221AC0
// Address: 0x221ac0 - 0x221b30
void sub_00221AC0_0x221ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221AC0_0x221ac0");
#endif

    switch (ctx->pc) {
        case 0x221af8u: goto label_221af8;
        case 0x221b10u: goto label_221b10;
        default: break;
    }

    ctx->pc = 0x221ac0u;

    // 0x221ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x221ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x221ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x221ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221acc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x221accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x221ad0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x221ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x221ad4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x221ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x221ad8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x221ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221adc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x221adcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x221ae0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x221ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221ae4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x221ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x221ae8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x221ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221aec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x221aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x221af0: 0xc0886f0  jal         func_221BC0
    ctx->pc = 0x221AF0u;
    SET_GPR_U32(ctx, 31, 0x221AF8u);
    ctx->pc = 0x221BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BC0u, 0x221AF0u, 0x221AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AF8u;
label_221af8:
    // 0x221af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x221af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221afc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x221afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x221b08: 0xc0886cc  jal         func_221B30
    ctx->pc = 0x221B08u;
    SET_GPR_U32(ctx, 31, 0x221B10u);
    ctx->pc = 0x221B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221B30u, 0x221B08u, 0x221B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B10u;
label_221b10:
    // 0x221b10: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x221b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221b14: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x221b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x221b18: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x221b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221b24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x221b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221b28: 0x3e00008  jr          $ra
    ctx->pc = 0x221B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221B30u;
}
