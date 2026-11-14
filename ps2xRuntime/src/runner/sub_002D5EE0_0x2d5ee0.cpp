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

// Function: sub_002D5EE0
// Address: 0x2d5ee0 - 0x2d5f20
void sub_002D5EE0_0x2d5ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5EE0_0x2d5ee0");
#endif

    switch (ctx->pc) {
        case 0x2d5efcu: goto label_2d5efc;
        default: break;
    }

    ctx->pc = 0x2d5ee0u;

    // 0x2d5ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5ee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d5eec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d5eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d5ef0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d5ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5ef4: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D5EF4u;
    SET_GPR_U32(ctx, 31, 0x2D5EFCu);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D5EF4u, 0x2D5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5EFCu;
label_2d5efc:
    // 0x2d5efc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5f00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5f0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d5f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d5f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5F18u;
    // 0x2d5f18: 0x0  nop
    ctx->pc = 0x2d5f18u;
    // NOP
    // 0x2d5f1c: 0x0  nop
    ctx->pc = 0x2d5f1cu;
    // NOP
    ctx->pc = 0x2d5f20u;
}
