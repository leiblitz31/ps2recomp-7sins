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

// Function: sub_00234860
// Address: 0x234860 - 0x2348c0
void sub_00234860_0x234860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234860_0x234860");
#endif

    switch (ctx->pc) {
        case 0x234860u: goto label_234860;
        case 0x234864u: goto label_234864;
        case 0x234868u: goto label_234868;
        case 0x23486cu: goto label_23486c;
        case 0x234870u: goto label_234870;
        case 0x234874u: goto label_234874;
        case 0x234878u: goto label_234878;
        case 0x23487cu: goto label_23487c;
        case 0x234880u: goto label_234880;
        case 0x234884u: goto label_234884;
        case 0x234888u: goto label_234888;
        case 0x23488cu: goto label_23488c;
        case 0x234890u: goto label_234890;
        case 0x234894u: goto label_234894;
        case 0x234898u: goto label_234898;
        case 0x23489cu: goto label_23489c;
        case 0x2348a0u: goto label_2348a0;
        case 0x2348a4u: goto label_2348a4;
        case 0x2348a8u: goto label_2348a8;
        case 0x2348acu: goto label_2348ac;
        case 0x2348b0u: goto label_2348b0;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348bcu: goto label_2348bc;
        default: break;
    }

    ctx->pc = 0x234860u;

label_234860:
    // 0x234860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x234860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_234864:
    // 0x234864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234868:
    // 0x234868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x234868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23486c:
    // 0x23486c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_234870:
    // 0x234870: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x234870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_234874:
    // 0x234874: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x234874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_234878:
    // 0x234878: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x234878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
label_23487c:
    // 0x23487c: 0x8f83bb98  lw          $v1, -0x4468($gp)
    ctx->pc = 0x23487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949784)));
label_234880:
    // 0x234880: 0x1003000b  beq         $zero, $v1, . + 4 + (0xB << 2)
label_234884:
    if (ctx->pc == 0x234884u) {
        ctx->pc = 0x234888u;
        goto label_234888;
    }
    ctx->pc = 0x234880u;
    {
        const bool branch_taken_0x234880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x234880) {
            ctx->pc = 0x2348B0u;
            goto label_2348b0;
        }
    }
    ctx->pc = 0x234888u;
label_234888:
    // 0x234888: 0x8f84bb98  lw          $a0, -0x4468($gp)
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949784)));
label_23488c:
    // 0x23488c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23488cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_234890:
    // 0x234890: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x234890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_234894:
    // 0x234894: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x234894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_234898:
    // 0x234898: 0x8fa80040  lw          $t0, 0x40($sp)
    ctx->pc = 0x234898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23489c:
    // 0x23489c: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x23489cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2348a0:
    // 0x2348a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2348a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2348a4:
    // 0x2348a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2348a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2348a8:
    // 0x2348a8: 0x320f809  jalr        $t9
label_2348ac:
    if (ctx->pc == 0x2348ACu) {
        ctx->pc = 0x2348B0u;
        goto label_2348b0;
    }
    ctx->pc = 0x2348A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2348B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348A8u, 0x2348B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2348B0u;
label_2348b0:
    // 0x2348b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2348b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2348b4:
    // 0x2348b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2348b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2348b8:
    // 0x2348b8: 0x3e00008  jr          $ra
label_2348bc:
    if (ctx->pc == 0x2348BCu) {
        ctx->pc = 0x2348C0u;
        goto label_fallthrough_0x2348b8;
    }
    ctx->pc = 0x2348B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2348b8:
    ctx->pc = 0x2348C0u;
}
