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

// Function: sub_002238C0
// Address: 0x2238c0 - 0x223940
void sub_002238C0_0x2238c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002238C0_0x2238c0");
#endif

    switch (ctx->pc) {
        case 0x2238e4u: goto label_2238e4;
        case 0x223928u: goto label_223928;
        default: break;
    }

    ctx->pc = 0x2238c0u;

    // 0x2238c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2238c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2238c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2238c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2238c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2238c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2238cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2238ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2238d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2238d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2238d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2238d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2238d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2238d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2238dc: 0xc088c58  jal         func_223160
    ctx->pc = 0x2238DCu;
    SET_GPR_U32(ctx, 31, 0x2238E4u);
    ctx->pc = 0x223160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223160u, 0x2238DCu, 0x2238E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238E4u;
label_2238e4:
    // 0x2238e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2238e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2238e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2238e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2238ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2238ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2238f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2238f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2238f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2238f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2238f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2238f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2238fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2238fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223900: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x223900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223904: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x223904u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x223908: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223908u;
    {
        const bool branch_taken_0x223908 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x223908) {
            ctx->pc = 0x223918u;
            goto label_223918;
        }
    }
    ctx->pc = 0x223910u;
    // 0x223910: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x223910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x223914: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x223914u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_223918:
    // 0x223918: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x223918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22391c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22391cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223920: 0xc0894e8  jal         func_2253A0
    ctx->pc = 0x223920u;
    SET_GPR_U32(ctx, 31, 0x223928u);
    ctx->pc = 0x2253A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253A0u, 0x223920u, 0x223928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223928u;
label_223928:
    // 0x223928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22392c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22392cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x223930: 0x3e00008  jr          $ra
    ctx->pc = 0x223930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223938u;
    // 0x223938: 0x0  nop
    ctx->pc = 0x223938u;
    // NOP
    // 0x22393c: 0x0  nop
    ctx->pc = 0x22393cu;
    // NOP
    ctx->pc = 0x223940u;
}
