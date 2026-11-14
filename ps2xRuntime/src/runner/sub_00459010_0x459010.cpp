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

// Function: sub_00459010
// Address: 0x459010 - 0x459080
void sub_00459010_0x459010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459010_0x459010");
#endif

    switch (ctx->pc) {
        case 0x459030u: goto label_459030;
        case 0x459048u: goto label_459048;
        case 0x459050u: goto label_459050;
        case 0x45905cu: goto label_45905c;
        default: break;
    }

    ctx->pc = 0x459010u;

    // 0x459010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x459010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x459014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x459014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x459018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45901c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45901cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x459020: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x459020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x459024: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x459024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459028: 0xc116320  jal         func_458C80
    ctx->pc = 0x459028u;
    SET_GPR_U32(ctx, 31, 0x459030u);
    ctx->pc = 0x458C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458C80u, 0x459028u, 0x459030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459030u;
label_459030:
    // 0x459030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x459030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x459034: 0xaf82bf3c  sw          $v0, -0x40C4($gp)
    ctx->pc = 0x459034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950716), GPR_U32(ctx, 2));
    // 0x459038: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45903c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45903cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459040: 0xc1163e0  jal         func_458F80
    ctx->pc = 0x459040u;
    SET_GPR_U32(ctx, 31, 0x459048u);
    ctx->pc = 0x458F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458F80u, 0x459040u, 0x459048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459048u;
label_459048:
    // 0x459048: 0xc040424  jal         func_101090
    ctx->pc = 0x459048u;
    SET_GPR_U32(ctx, 31, 0x459050u);
    ctx->pc = 0x101090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101090u, 0x459048u, 0x459050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459050u;
label_459050:
    // 0x459050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x459050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459054: 0xc116360  jal         func_458D80
    ctx->pc = 0x459054u;
    SET_GPR_U32(ctx, 31, 0x45905Cu);
    ctx->pc = 0x458D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458D80u, 0x459054u, 0x45905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45905Cu;
label_45905c:
    // 0x45905c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45905cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x459060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459068: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x459068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45906c: 0x3e00008  jr          $ra
    ctx->pc = 0x45906Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45906Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459074u;
    // 0x459074: 0x0  nop
    ctx->pc = 0x459074u;
    // NOP
    // 0x459078: 0x0  nop
    ctx->pc = 0x459078u;
    // NOP
    // 0x45907c: 0x0  nop
    ctx->pc = 0x45907cu;
    // NOP
    ctx->pc = 0x459080u;
}
