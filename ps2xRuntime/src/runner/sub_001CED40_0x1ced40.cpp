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

// Function: sub_001CED40
// Address: 0x1ced40 - 0x1ced80
void sub_001CED40_0x1ced40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CED40_0x1ced40");
#endif

    switch (ctx->pc) {
        case 0x1ced64u: goto label_1ced64;
        default: break;
    }

    ctx->pc = 0x1ced40u;

    // 0x1ced40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ced44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ced44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ced48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ced48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ced4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ced4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ced50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ced54: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ced54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ced58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ced58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced5c: 0xc073b60  jal         func_1CED80
    ctx->pc = 0x1CED5Cu;
    SET_GPR_U32(ctx, 31, 0x1CED64u);
    ctx->pc = 0x1CED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED80u, 0x1CED5Cu, 0x1CED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED64u;
label_1ced64:
    // 0x1ced64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ced64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ced68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ced6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED74u;
    // 0x1ced74: 0x0  nop
    ctx->pc = 0x1ced74u;
    // NOP
    // 0x1ced78: 0x0  nop
    ctx->pc = 0x1ced78u;
    // NOP
    // 0x1ced7c: 0x0  nop
    ctx->pc = 0x1ced7cu;
    // NOP
    ctx->pc = 0x1ced80u;
}
