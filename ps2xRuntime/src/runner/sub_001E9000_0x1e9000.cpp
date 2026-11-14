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

// Function: sub_001E9000
// Address: 0x1e9000 - 0x1e90a0
void sub_001E9000_0x1e9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9000_0x1e9000");
#endif

    switch (ctx->pc) {
        case 0x1e903cu: goto label_1e903c;
        case 0x1e9054u: goto label_1e9054;
        default: break;
    }

    ctx->pc = 0x1e9000u;

    // 0x1e9000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e9004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e9008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e900c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e900cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e9010: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e9010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e9014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9018: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e9018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e901c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9020: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e9020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e9024: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9028: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e902c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e902cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9034: 0xc0787fc  jal         func_1E1FF0
    ctx->pc = 0x1E9034u;
    SET_GPR_U32(ctx, 31, 0x1E903Cu);
    ctx->pc = 0x1E1FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1FF0u, 0x1E9034u, 0x1E903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E903Cu;
label_1e903c:
    // 0x1e903c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9040: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e9040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e9044: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e9044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e904c: 0xc07a6bc  jal         func_1E9AF0
    ctx->pc = 0x1E904Cu;
    SET_GPR_U32(ctx, 31, 0x1E9054u);
    ctx->pc = 0x1E9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AF0u, 0x1E904Cu, 0x1E9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9054u;
label_1e9054:
    // 0x1e9054: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e9054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9058: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e9058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e905c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9060: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e9060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9068: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1e9068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1e906c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9070: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e9070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9074: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9078: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e907c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e9080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9084: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e9084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1e9088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e908c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9090: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9094: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E909Cu;
    // 0x1e909c: 0x0  nop
    ctx->pc = 0x1e909cu;
    // NOP
    ctx->pc = 0x1e90a0u;
}
