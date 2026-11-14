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

// Function: sub_0048D810
// Address: 0x48d810 - 0x48d8a0
void sub_0048D810_0x48d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D810_0x48d810");
#endif

    switch (ctx->pc) {
        case 0x48d84cu: goto label_48d84c;
        case 0x48d88cu: goto label_48d88c;
        default: break;
    }

    ctx->pc = 0x48d810u;

    // 0x48d810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48d814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48d814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48d818: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48d818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48d81c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48d820: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d824: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x48d824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d828: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d82c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x48d830: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48D830u;
    {
        const bool branch_taken_0x48d830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48d830) {
            ctx->pc = 0x48D864u;
            goto label_48d864;
        }
    }
    ctx->pc = 0x48D838u;
    // 0x48d838: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d83c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d840: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48d840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d844: 0xc1236f0  jal         func_48DBC0
    ctx->pc = 0x48D844u;
    SET_GPR_U32(ctx, 31, 0x48D84Cu);
    ctx->pc = 0x48DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DBC0u, 0x48D844u, 0x48D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D84Cu;
label_48d84c:
    // 0x48d84c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d850: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48d854: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x48d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x48d858: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x48d858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x48d85c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48D85Cu;
    {
        const bool branch_taken_0x48d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d85c) {
            ctx->pc = 0x48D88Cu;
            goto label_48d88c;
        }
    }
    ctx->pc = 0x48D864u;
label_48d864:
    // 0x48d864: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d868: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x48d868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x48d86c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d870: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x48d870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d874: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x48d874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d878: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x48d878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x48d87c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x48d87cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d880: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x48d880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d884: 0xc123628  jal         func_48D8A0
    ctx->pc = 0x48D884u;
    SET_GPR_U32(ctx, 31, 0x48D88Cu);
    ctx->pc = 0x48D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D8A0u, 0x48D884u, 0x48D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D88Cu;
label_48d88c:
    // 0x48d88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d890: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48d894: 0x3e00008  jr          $ra
    ctx->pc = 0x48D894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D89Cu;
    // 0x48d89c: 0x0  nop
    ctx->pc = 0x48d89cu;
    // NOP
    ctx->pc = 0x48d8a0u;
}
