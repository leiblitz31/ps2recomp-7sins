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

// Function: sub_0020AE60
// Address: 0x20ae60 - 0x20aef0
void sub_0020AE60_0x20ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AE60_0x20ae60");
#endif

    switch (ctx->pc) {
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aedcu: goto label_20aedc;
        default: break;
    }

    ctx->pc = 0x20ae60u;

    // 0x20ae60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20ae64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ae68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20ae6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x20ae70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ae74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20ae78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ae7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20ae80: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20AE80u;
    {
        const bool branch_taken_0x20ae80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20ae80) {
            ctx->pc = 0x20AEB4u;
            goto label_20aeb4;
        }
    }
    ctx->pc = 0x20AE88u;
    // 0x20ae88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ae8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x20ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20ae90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ae94: 0xc082c60  jal         func_20B180
    ctx->pc = 0x20AE94u;
    SET_GPR_U32(ctx, 31, 0x20AE9Cu);
    ctx->pc = 0x20B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B180u, 0x20AE94u, 0x20AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE9Cu;
label_20ae9c:
    // 0x20ae9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aea0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20aea4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x20aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20aea8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x20aeac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20AEACu;
    {
        const bool branch_taken_0x20aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aeac) {
            ctx->pc = 0x20AEDCu;
            goto label_20aedc;
        }
    }
    ctx->pc = 0x20AEB4u;
label_20aeb4:
    // 0x20aeb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aeb8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x20aeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x20aebc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aec0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20aec4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20aec8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x20aec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x20aecc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20aeccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aed0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20aed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aed4: 0xc082bbc  jal         func_20AEF0
    ctx->pc = 0x20AED4u;
    SET_GPR_U32(ctx, 31, 0x20AEDCu);
    ctx->pc = 0x20AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AEF0u, 0x20AED4u, 0x20AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEDCu;
label_20aedc:
    // 0x20aedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20aedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aee0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20aee4: 0x3e00008  jr          $ra
    ctx->pc = 0x20AEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AEECu;
    // 0x20aeec: 0x0  nop
    ctx->pc = 0x20aeecu;
    // NOP
    ctx->pc = 0x20aef0u;
}
