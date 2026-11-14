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

// Function: sub_002D18A0
// Address: 0x2d18a0 - 0x2d18e0
void sub_002D18A0_0x2d18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D18A0_0x2d18a0");
#endif

    switch (ctx->pc) {
        case 0x2d18bcu: goto label_2d18bc;
        default: break;
    }

    ctx->pc = 0x2d18a0u;

    // 0x2d18a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d18a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d18a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d18a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d18ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d18acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d18b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d18b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d18b4: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D18B4u;
    SET_GPR_U32(ctx, 31, 0x2D18BCu);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D18B4u, 0x2D18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18BCu;
label_2d18bc:
    // 0x2d18bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d18c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d18c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d18c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d18c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d18cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d18ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d18d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D18D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D18D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D18D8u;
    // 0x2d18d8: 0x0  nop
    ctx->pc = 0x2d18d8u;
    // NOP
    // 0x2d18dc: 0x0  nop
    ctx->pc = 0x2d18dcu;
    // NOP
    ctx->pc = 0x2d18e0u;
}
