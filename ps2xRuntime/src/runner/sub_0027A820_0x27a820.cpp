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

// Function: sub_0027A820
// Address: 0x27a820 - 0x27a890
void sub_0027A820_0x27a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A820_0x27a820");
#endif

    switch (ctx->pc) {
        case 0x27a83cu: goto label_27a83c;
        default: break;
    }

    ctx->pc = 0x27a820u;

    // 0x27a820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27a82c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27a830: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x27a830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x27a834: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A834u;
    {
        const bool branch_taken_0x27a834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a834) {
            ctx->pc = 0x27A864u;
            goto label_27a864;
        }
    }
    ctx->pc = 0x27A83Cu;
label_27a83c:
    // 0x27a83c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27a848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27a84c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a850: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27a854: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x27a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x27a858: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a85c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x27a85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x27a860: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x27a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_27a864:
    // 0x27a864: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a868: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27A868u;
    {
        const bool branch_taken_0x27a868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a868) {
            ctx->pc = 0x27A83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a83c;
        }
    }
    ctx->pc = 0x27A870u;
    // 0x27a870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a878: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a87c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A884u;
    // 0x27a884: 0x0  nop
    ctx->pc = 0x27a884u;
    // NOP
    // 0x27a888: 0x0  nop
    ctx->pc = 0x27a888u;
    // NOP
    // 0x27a88c: 0x0  nop
    ctx->pc = 0x27a88cu;
    // NOP
    ctx->pc = 0x27a890u;
}
