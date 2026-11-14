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

// Function: sub_00285110
// Address: 0x285110 - 0x2851b0
void sub_00285110_0x285110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285110_0x285110");
#endif

    switch (ctx->pc) {
        case 0x28513cu: goto label_28513c;
        case 0x28514cu: goto label_28514c;
        case 0x285160u: goto label_285160;
        case 0x285170u: goto label_285170;
        case 0x285188u: goto label_285188;
        default: break;
    }

    ctx->pc = 0x285110u;

    // 0x285110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28511c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28511cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x285120: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x285120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285124: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x285124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x285128: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x285128u;
    {
        const bool branch_taken_0x285128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285128) {
            ctx->pc = 0x285194u;
            goto label_285194;
        }
    }
    ctx->pc = 0x285130u;
    // 0x285130: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285134: 0xc0a1474  jal         func_2851D0
    ctx->pc = 0x285134u;
    SET_GPR_U32(ctx, 31, 0x28513Cu);
    ctx->pc = 0x2851D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851D0u, 0x285134u, 0x28513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28513Cu;
label_28513c:
    // 0x28513c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285140: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x285140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285144: 0xc0a3b48  jal         func_28ED20
    ctx->pc = 0x285144u;
    SET_GPR_U32(ctx, 31, 0x28514Cu);
    ctx->pc = 0x28ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED20u, 0x285144u, 0x28514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28514Cu;
label_28514c:
    // 0x28514c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285150: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x285150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285158: 0xc0542f8  jal         func_150BE0
    ctx->pc = 0x285158u;
    SET_GPR_U32(ctx, 31, 0x285160u);
    ctx->pc = 0x150BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BE0u, 0x285158u, 0x285160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285160u;
label_285160:
    // 0x285160: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x285160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x285164: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285168: 0xc0a1474  jal         func_2851D0
    ctx->pc = 0x285168u;
    SET_GPR_U32(ctx, 31, 0x285170u);
    ctx->pc = 0x2851D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851D0u, 0x285168u, 0x285170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285170u;
label_285170:
    // 0x285170: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x285170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x285174: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285178: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x285178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28517c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285180: 0xc0a146c  jal         func_2851B0
    ctx->pc = 0x285180u;
    SET_GPR_U32(ctx, 31, 0x285188u);
    ctx->pc = 0x2851B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851B0u, 0x285180u, 0x285188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285188u;
label_285188:
    // 0x285188: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x285188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28518c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285190: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x285190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_285194:
    // 0x285194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28519c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28519cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2851a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2851A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2851A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2851A8u;
    // 0x2851a8: 0x0  nop
    ctx->pc = 0x2851a8u;
    // NOP
    // 0x2851ac: 0x0  nop
    ctx->pc = 0x2851acu;
    // NOP
    ctx->pc = 0x2851b0u;
}
