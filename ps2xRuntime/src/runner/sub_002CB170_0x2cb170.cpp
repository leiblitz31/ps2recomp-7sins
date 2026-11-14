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

// Function: sub_002CB170
// Address: 0x2cb170 - 0x2cb1b0
void sub_002CB170_0x2cb170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB170_0x2cb170");
#endif

    switch (ctx->pc) {
        case 0x2cb194u: goto label_2cb194;
        default: break;
    }

    ctx->pc = 0x2cb170u;

    // 0x2cb170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb17c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cb17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cb180: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb184: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cb184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb18c: 0xc0b2c6c  jal         func_2CB1B0
    ctx->pc = 0x2CB18Cu;
    SET_GPR_U32(ctx, 31, 0x2CB194u);
    ctx->pc = 0x2CB1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB1B0u, 0x2CB18Cu, 0x2CB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB194u;
label_2cb194:
    // 0x2cb194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb198: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb19c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB1A4u;
    // 0x2cb1a4: 0x0  nop
    ctx->pc = 0x2cb1a4u;
    // NOP
    // 0x2cb1a8: 0x0  nop
    ctx->pc = 0x2cb1a8u;
    // NOP
    // 0x2cb1ac: 0x0  nop
    ctx->pc = 0x2cb1acu;
    // NOP
    ctx->pc = 0x2cb1b0u;
}
