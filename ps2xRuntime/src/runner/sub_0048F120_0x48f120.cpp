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

// Function: sub_0048F120
// Address: 0x48f120 - 0x48f190
void sub_0048F120_0x48f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F120_0x48f120");
#endif

    switch (ctx->pc) {
        case 0x48f160u: goto label_48f160;
        default: break;
    }

    ctx->pc = 0x48f120u;

    // 0x48f120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48f124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48f128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48f12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48f130: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48f130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x48f134: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48f138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48f138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f13c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x48f13cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48f140: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F140u;
    {
        const bool branch_taken_0x48f140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f140) {
            ctx->pc = 0x48F154u;
            goto label_48f154;
        }
    }
    ctx->pc = 0x48F148u;
    // 0x48f148: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x48f148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48f14c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48F14Cu;
    {
        const bool branch_taken_0x48f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f14c) {
            ctx->pc = 0x48F164u;
            goto label_48f164;
        }
    }
    ctx->pc = 0x48F154u;
label_48f154:
    // 0x48f154: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x48f154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48f158: 0xc124040  jal         func_490100
    ctx->pc = 0x48F158u;
    SET_GPR_U32(ctx, 31, 0x48F160u);
    ctx->pc = 0x490100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490100u, 0x48F158u, 0x48F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F160u;
label_48f160:
    // 0x48f160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48f160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48f164:
    // 0x48f164: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48f168: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x48f168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x48f16c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48f170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48f174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48f174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48f178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f17c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48f17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48f180: 0x3e00008  jr          $ra
    ctx->pc = 0x48F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F188u;
    // 0x48f188: 0x0  nop
    ctx->pc = 0x48f188u;
    // NOP
    // 0x48f18c: 0x0  nop
    ctx->pc = 0x48f18cu;
    // NOP
    ctx->pc = 0x48f190u;
}
