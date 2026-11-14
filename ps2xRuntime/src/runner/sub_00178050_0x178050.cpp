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

// Function: sub_00178050
// Address: 0x178050 - 0x1780a0
void sub_00178050_0x178050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178050_0x178050");
#endif

    switch (ctx->pc) {
        case 0x178088u: goto label_178088;
        default: break;
    }

    ctx->pc = 0x178050u;

    // 0x178050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x178058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17805c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17805cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x178060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178064: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x178064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x178068: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17806c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17806cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x178070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178074: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x178074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x178078: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x178078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17807c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17807cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178080: 0xc05e028  jal         func_1780A0
    ctx->pc = 0x178080u;
    SET_GPR_U32(ctx, 31, 0x178088u);
    ctx->pc = 0x1780A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780A0u, 0x178080u, 0x178088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178088u;
label_178088:
    // 0x178088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x178088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17808c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17808cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178090: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x178090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178094: 0x3e00008  jr          $ra
    ctx->pc = 0x178094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17809Cu;
    // 0x17809c: 0x0  nop
    ctx->pc = 0x17809cu;
    // NOP
    ctx->pc = 0x1780a0u;
}
