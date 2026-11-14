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

// Function: sub_001A31B0
// Address: 0x1a31b0 - 0x1a31f0
void sub_001A31B0_0x1a31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A31B0_0x1a31b0");
#endif

    switch (ctx->pc) {
        case 0x1a31ccu: goto label_1a31cc;
        default: break;
    }

    ctx->pc = 0x1a31b0u;

    // 0x1a31b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a31b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a31b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a31b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a31bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a31c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a31c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a31c4: 0xc068c7c  jal         func_1A31F0
    ctx->pc = 0x1A31C4u;
    SET_GPR_U32(ctx, 31, 0x1A31CCu);
    ctx->pc = 0x1A31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31F0u, 0x1A31C4u, 0x1A31CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31CCu;
label_1a31cc:
    // 0x1a31cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a31d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a31d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a31d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a31d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a31dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a31dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a31e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A31E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A31E8u;
    // 0x1a31e8: 0x0  nop
    ctx->pc = 0x1a31e8u;
    // NOP
    // 0x1a31ec: 0x0  nop
    ctx->pc = 0x1a31ecu;
    // NOP
    ctx->pc = 0x1a31f0u;
}
