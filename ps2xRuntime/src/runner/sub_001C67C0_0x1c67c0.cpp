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

// Function: sub_001C67C0
// Address: 0x1c67c0 - 0x1c6800
void sub_001C67C0_0x1c67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C67C0_0x1c67c0");
#endif

    switch (ctx->pc) {
        case 0x1c67dcu: goto label_1c67dc;
        case 0x1c67ecu: goto label_1c67ec;
        default: break;
    }

    ctx->pc = 0x1c67c0u;

    // 0x1c67c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c67c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c67c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c67c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c67c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c67cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c67d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c67d4: 0xc071a0c  jal         func_1C6830
    ctx->pc = 0x1C67D4u;
    SET_GPR_U32(ctx, 31, 0x1C67DCu);
    ctx->pc = 0x1C6830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6830u, 0x1C67D4u, 0x1C67DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67DCu;
label_1c67dc:
    // 0x1c67dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c67e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c67e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67e4: 0xc071a00  jal         func_1C6800
    ctx->pc = 0x1C67E4u;
    SET_GPR_U32(ctx, 31, 0x1C67ECu);
    ctx->pc = 0x1C6800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6800u, 0x1C67E4u, 0x1C67ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67ECu;
label_1c67ec:
    // 0x1c67ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c67ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c67f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c67f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C67F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C67F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C67FCu;
    // 0x1c67fc: 0x0  nop
    ctx->pc = 0x1c67fcu;
    // NOP
    ctx->pc = 0x1c6800u;
}
