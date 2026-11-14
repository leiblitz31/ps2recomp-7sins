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

// Function: sub_00133320
// Address: 0x133320 - 0x133360
void sub_00133320_0x133320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133320_0x133320");
#endif

    switch (ctx->pc) {
        case 0x133350u: goto label_133350;
        default: break;
    }

    ctx->pc = 0x133320u;

    // 0x133320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x133324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133328: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x133328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13332c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x133330: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x133330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x133334: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x133334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133338: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x133338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13333c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13333cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133340: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x133340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x133344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x133344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133348: 0xc04ccd8  jal         func_133360
    ctx->pc = 0x133348u;
    SET_GPR_U32(ctx, 31, 0x133350u);
    ctx->pc = 0x133360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133360u, 0x133348u, 0x133350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133350u;
label_133350:
    // 0x133350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133354: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x133354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x133358: 0x3e00008  jr          $ra
    ctx->pc = 0x133358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133360u;
}
