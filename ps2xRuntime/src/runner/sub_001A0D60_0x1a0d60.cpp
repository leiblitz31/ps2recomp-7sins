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

// Function: sub_001A0D60
// Address: 0x1a0d60 - 0x1a0db0
void sub_001A0D60_0x1a0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0D60_0x1a0d60");
#endif

    switch (ctx->pc) {
        case 0x1a0d90u: goto label_1a0d90;
        default: break;
    }

    ctx->pc = 0x1a0d60u;

    // 0x1a0d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0d6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1a0d70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1a0d74: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1a0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1a0d78: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x1a0d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1a0d7c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0d80: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1a0d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a0d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d88: 0xc06836c  jal         func_1A0DB0
    ctx->pc = 0x1A0D88u;
    SET_GPR_U32(ctx, 31, 0x1A0D90u);
    ctx->pc = 0x1A0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0DB0u, 0x1A0D88u, 0x1A0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D90u;
label_1a0d90:
    // 0x1a0d90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a0d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a0d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0DA4u;
    // 0x1a0da4: 0x0  nop
    ctx->pc = 0x1a0da4u;
    // NOP
    // 0x1a0da8: 0x0  nop
    ctx->pc = 0x1a0da8u;
    // NOP
    // 0x1a0dac: 0x0  nop
    ctx->pc = 0x1a0dacu;
    // NOP
    ctx->pc = 0x1a0db0u;
}
