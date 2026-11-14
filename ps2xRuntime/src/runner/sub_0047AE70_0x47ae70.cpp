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

// Function: sub_0047AE70
// Address: 0x47ae70 - 0x47aef0
void sub_0047AE70_0x47ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AE70_0x47ae70");
#endif

    switch (ctx->pc) {
        case 0x47ae90u: goto label_47ae90;
        case 0x47aea0u: goto label_47aea0;
        case 0x47aeccu: goto label_47aecc;
        default: break;
    }

    ctx->pc = 0x47ae70u;

    // 0x47ae70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47ae74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47ae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47ae78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47ae7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47ae80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x47ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x47ae84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47ae84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ae88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x47AE88u;
    {
        const bool branch_taken_0x47ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ae88) {
            ctx->pc = 0x47AEC0u;
            goto label_47aec0;
        }
    }
    ctx->pc = 0x47AE90u;
label_47ae90:
    // 0x47ae90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ae94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47ae94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ae98: 0xc11ebbc  jal         func_47AEF0
    ctx->pc = 0x47AE98u;
    SET_GPR_U32(ctx, 31, 0x47AEA0u);
    ctx->pc = 0x47AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AEF0u, 0x47AE98u, 0x47AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AEA0u;
label_47aea0:
    // 0x47aea0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x47aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47aea4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47aea8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47AEA8u;
    {
        const bool branch_taken_0x47aea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x47aea8) {
            ctx->pc = 0x47AEBCu;
            goto label_47aebc;
        }
    }
    ctx->pc = 0x47AEB0u;
    // 0x47aeb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47aeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47aeb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x47AEB4u;
    {
        const bool branch_taken_0x47aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aeb4) {
            ctx->pc = 0x47AEDCu;
            goto label_47aedc;
        }
    }
    ctx->pc = 0x47AEBCu;
label_47aebc:
    // 0x47aebc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47aebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47aec0:
    // 0x47aec0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47aec4: 0xc11eb8c  jal         func_47AE30
    ctx->pc = 0x47AEC4u;
    SET_GPR_U32(ctx, 31, 0x47AECCu);
    ctx->pc = 0x47AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE30u, 0x47AEC4u, 0x47AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AECCu;
label_47aecc:
    // 0x47aecc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x47aeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47aed0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x47AED0u;
    {
        const bool branch_taken_0x47aed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47aed0) {
            ctx->pc = 0x47AE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ae90;
        }
    }
    ctx->pc = 0x47AED8u;
    // 0x47aed8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47aedc:
    // 0x47aedc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47aedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47aee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47aee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47aee4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x47aee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x47AEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47AEF0u;
}
