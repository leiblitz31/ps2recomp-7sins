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

// Function: sub_001A3B00
// Address: 0x1a3b00 - 0x1a3b70
void sub_001A3B00_0x1a3b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3B00_0x1a3b00");
#endif

    switch (ctx->pc) {
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b50u: goto label_1a3b50;
        default: break;
    }

    ctx->pc = 0x1a3b00u;

    // 0x1a3b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a3b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a3b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3b0c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a3b10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a3b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a3b14: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1a3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1a3b18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3b1c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1a3b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a3b20: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3b24: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3b28: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1a3b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3b2c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1a3b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a3b30: 0xc068edc  jal         func_1A3B70
    ctx->pc = 0x1A3B30u;
    SET_GPR_U32(ctx, 31, 0x1A3B38u);
    ctx->pc = 0x1A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B70u, 0x1A3B30u, 0x1A3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B38u;
label_1a3b38:
    // 0x1a3b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b44: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3b48: 0xc068758  jal         func_1A1D60
    ctx->pc = 0x1A3B48u;
    SET_GPR_U32(ctx, 31, 0x1A3B50u);
    ctx->pc = 0x1A1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D60u, 0x1A3B48u, 0x1A3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3B50u;
label_1a3b50:
    // 0x1a3b50: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3b54: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1a3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1a3b58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3b64: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a3b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a3b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3B70u;
}
