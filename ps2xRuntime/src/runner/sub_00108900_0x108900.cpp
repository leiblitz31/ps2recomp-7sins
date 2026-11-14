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

// Function: sub_00108900
// Address: 0x108900 - 0x108940
void sub_00108900_0x108900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108900_0x108900");
#endif

    switch (ctx->pc) {
        case 0x108920u: goto label_108920;
        default: break;
    }

    ctx->pc = 0x108900u;

    // 0x108900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108908: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10890c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10890cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x108910: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x108910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108914: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108918: 0xc042250  jal         func_108940
    ctx->pc = 0x108918u;
    SET_GPR_U32(ctx, 31, 0x108920u);
    ctx->pc = 0x108940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108940u, 0x108918u, 0x108920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108920u;
label_108920:
    // 0x108920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x108928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10892c: 0x3e00008  jr          $ra
    ctx->pc = 0x10892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108934u;
    // 0x108934: 0x0  nop
    ctx->pc = 0x108934u;
    // NOP
    // 0x108938: 0x0  nop
    ctx->pc = 0x108938u;
    // NOP
    // 0x10893c: 0x0  nop
    ctx->pc = 0x10893cu;
    // NOP
    ctx->pc = 0x108940u;
}
