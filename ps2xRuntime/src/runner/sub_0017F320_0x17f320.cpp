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

// Function: sub_0017F320
// Address: 0x17f320 - 0x17f360
void sub_0017F320_0x17f320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F320_0x17f320");
#endif

    switch (ctx->pc) {
        case 0x17f350u: goto label_17f350;
        default: break;
    }

    ctx->pc = 0x17f320u;

    // 0x17f320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17f324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f328: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17f328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17f32c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17f330: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x17f330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x17f334: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f338: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17f338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f33c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x17f33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f340: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x17f340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17f344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17f344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f348: 0xc05fcd8  jal         func_17F360
    ctx->pc = 0x17F348u;
    SET_GPR_U32(ctx, 31, 0x17F350u);
    ctx->pc = 0x17F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F360u, 0x17F348u, 0x17F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F350u;
label_17f350:
    // 0x17f350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f354: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17f354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17f358: 0x3e00008  jr          $ra
    ctx->pc = 0x17F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F360u;
}
