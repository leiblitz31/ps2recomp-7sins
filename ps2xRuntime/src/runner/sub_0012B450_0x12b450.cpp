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

// Function: sub_0012B450
// Address: 0x12b450 - 0x12b4a0
void sub_0012B450_0x12b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B450_0x12b450");
#endif

    switch (ctx->pc) {
        case 0x12b488u: goto label_12b488;
        default: break;
    }

    ctx->pc = 0x12b450u;

    // 0x12b450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b458: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b45c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12b460: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b464: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12b464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12b468: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b46c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12b470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b474: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x12b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x12b478: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12b478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b47c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12b47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b480: 0xc04ad28  jal         func_12B4A0
    ctx->pc = 0x12B480u;
    SET_GPR_U32(ctx, 31, 0x12B488u);
    ctx->pc = 0x12B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B4A0u, 0x12B480u, 0x12B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B488u;
label_12b488:
    // 0x12b488: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b490: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b494: 0x3e00008  jr          $ra
    ctx->pc = 0x12B494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B49Cu;
    // 0x12b49c: 0x0  nop
    ctx->pc = 0x12b49cu;
    // NOP
    ctx->pc = 0x12b4a0u;
}
