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

// Function: sub_002673A0
// Address: 0x2673a0 - 0x267410
void sub_002673A0_0x2673a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002673A0_0x2673a0");
#endif

    switch (ctx->pc) {
        case 0x2673bcu: goto label_2673bc;
        default: break;
    }

    ctx->pc = 0x2673a0u;

    // 0x2673a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2673a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2673a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2673a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2673a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2673a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2673ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2673acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2673b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2673b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2673b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2673B4u;
    {
        const bool branch_taken_0x2673b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2673b4) {
            ctx->pc = 0x2673E4u;
            goto label_2673e4;
        }
    }
    ctx->pc = 0x2673BCu;
label_2673bc:
    // 0x2673bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2673bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2673c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2673c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2673c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2673c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2673c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2673c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2673cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2673ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2673d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2673d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2673d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2673d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2673d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2673d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2673dc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2673dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2673e0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2673e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2673e4:
    // 0x2673e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2673e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2673e8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2673E8u;
    {
        const bool branch_taken_0x2673e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2673e8) {
            ctx->pc = 0x2673BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2673bc;
        }
    }
    ctx->pc = 0x2673F0u;
    // 0x2673f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2673f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2673f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2673f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2673f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2673f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2673fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2673FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2673FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267404u;
    // 0x267404: 0x0  nop
    ctx->pc = 0x267404u;
    // NOP
    // 0x267408: 0x0  nop
    ctx->pc = 0x267408u;
    // NOP
    // 0x26740c: 0x0  nop
    ctx->pc = 0x26740cu;
    // NOP
    ctx->pc = 0x267410u;
}
