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

// Function: sub_002D2800
// Address: 0x2d2800 - 0x2d2880
void sub_002D2800_0x2d2800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2800_0x2d2800");
#endif

    switch (ctx->pc) {
        case 0x2d2824u: goto label_2d2824;
        case 0x2d2868u: goto label_2d2868;
        default: break;
    }

    ctx->pc = 0x2d2800u;

    // 0x2d2800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d2808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d280c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d2810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2814: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d2814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2818: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d2818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d281c: 0xc0b40a0  jal         func_2D0280
    ctx->pc = 0x2D281Cu;
    SET_GPR_U32(ctx, 31, 0x2D2824u);
    ctx->pc = 0x2D0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0280u, 0x2D281Cu, 0x2D2824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2824u;
label_2d2824:
    // 0x2d2824: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d2824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2828: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2d2828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d282c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2830: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d2830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d2834: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d2834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2838: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d2838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d283c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d283cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d2840: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d2840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d2844: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2d2844u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d2848: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2848u;
    {
        const bool branch_taken_0x2d2848 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d2848) {
            ctx->pc = 0x2D2858u;
            goto label_2d2858;
        }
    }
    ctx->pc = 0x2D2850u;
    // 0x2d2850: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2d2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d2854: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2d2854u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2d2858:
    // 0x2d2858: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d285c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d285cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d2860: 0xc0b6314  jal         func_2D8C50
    ctx->pc = 0x2D2860u;
    SET_GPR_U32(ctx, 31, 0x2D2868u);
    ctx->pc = 0x2D8C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8C50u, 0x2D2860u, 0x2D2868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2868u;
label_2d2868:
    // 0x2d2868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d286c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d286cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2870: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2878u;
    // 0x2d2878: 0x0  nop
    ctx->pc = 0x2d2878u;
    // NOP
    // 0x2d287c: 0x0  nop
    ctx->pc = 0x2d287cu;
    // NOP
    ctx->pc = 0x2d2880u;
}
