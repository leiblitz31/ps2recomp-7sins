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

// Function: sub_00472810
// Address: 0x472810 - 0x472870
void sub_00472810_0x472810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472810_0x472810");
#endif

    switch (ctx->pc) {
        case 0x472838u: goto label_472838;
        case 0x472854u: goto label_472854;
        default: break;
    }

    ctx->pc = 0x472810u;

    // 0x472810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x472810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x472814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x472814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x472818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x472818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47281c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47281cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x472820: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x472820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472824: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x472824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472828: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x472828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x47282c: 0x24070505  addiu       $a3, $zero, 0x505
    ctx->pc = 0x47282cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x472830: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x472830u;
    SET_GPR_U32(ctx, 31, 0x472838u);
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x472830u, 0x472838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472838u;
label_472838:
    // 0x472838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x472838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47283c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47283Cu;
    {
        const bool branch_taken_0x47283c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47283c) {
            ctx->pc = 0x472854u;
            goto label_472854;
        }
    }
    ctx->pc = 0x472844u;
    // 0x472844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x472848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47284c: 0xc110d02  jal         func_443408
    ctx->pc = 0x47284Cu;
    SET_GPR_U32(ctx, 31, 0x472854u);
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x47284Cu, 0x472854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472854u;
label_472854:
    // 0x472854: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x472854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x472858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47285c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47285cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472860: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x472860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x472864: 0x3e00008  jr          $ra
    ctx->pc = 0x472864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47286Cu;
    // 0x47286c: 0x0  nop
    ctx->pc = 0x47286cu;
    // NOP
    ctx->pc = 0x472870u;
}
