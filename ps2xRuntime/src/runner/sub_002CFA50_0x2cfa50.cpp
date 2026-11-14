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

// Function: sub_002CFA50
// Address: 0x2cfa50 - 0x2cfaa0
void sub_002CFA50_0x2cfa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFA50_0x2cfa50");
#endif

    switch (ctx->pc) {
        case 0x2cfa88u: goto label_2cfa88;
        default: break;
    }

    ctx->pc = 0x2cfa50u;

    // 0x2cfa50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cfa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cfa54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfa58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cfa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cfa5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cfa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cfa60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfa64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cfa64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cfa68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfa6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cfa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cfa70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfa74: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2cfa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2cfa78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cfa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfa7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa80: 0xc0b3ea8  jal         func_2CFAA0
    ctx->pc = 0x2CFA80u;
    SET_GPR_U32(ctx, 31, 0x2CFA88u);
    ctx->pc = 0x2CFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFAA0u, 0x2CFA80u, 0x2CFA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA88u;
label_2cfa88:
    // 0x2cfa88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfa8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfa90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cfa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cfa94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFA9Cu;
    // 0x2cfa9c: 0x0  nop
    ctx->pc = 0x2cfa9cu;
    // NOP
    ctx->pc = 0x2cfaa0u;
}
