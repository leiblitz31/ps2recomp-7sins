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

// Function: sub_0026B1C0
// Address: 0x26b1c0 - 0x26b200
void sub_0026B1C0_0x26b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B1C0_0x26b1c0");
#endif

    switch (ctx->pc) {
        case 0x26b1dcu: goto label_26b1dc;
        default: break;
    }

    ctx->pc = 0x26b1c0u;

    // 0x26b1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b1c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26b1cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26b1d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b1d4: 0xc0525e4  jal         func_149790
    ctx->pc = 0x26B1D4u;
    SET_GPR_U32(ctx, 31, 0x26B1DCu);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x26B1D4u, 0x26B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1DCu;
label_26b1dc:
    // 0x26b1dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b1e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x26b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26b1e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b1e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26b1ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b1f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26b1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26b1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x26B1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B200u;
}
