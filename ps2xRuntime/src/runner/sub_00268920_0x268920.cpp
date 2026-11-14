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

// Function: sub_00268920
// Address: 0x268920 - 0x268960
void sub_00268920_0x268920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268920_0x268920");
#endif

    switch (ctx->pc) {
        case 0x268948u: goto label_268948;
        default: break;
    }

    ctx->pc = 0x268920u;

    // 0x268920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x268920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x268924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268928: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x268928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26892c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x268930: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x268930u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x268934: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x268934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268938: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x268938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26893c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x26893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x268940: 0xc09a258  jal         func_268960
    ctx->pc = 0x268940u;
    SET_GPR_U32(ctx, 31, 0x268948u);
    ctx->pc = 0x268960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268960u, 0x268940u, 0x268948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268948u;
label_268948:
    // 0x268948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26894c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26894cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x268950: 0x3e00008  jr          $ra
    ctx->pc = 0x268950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268958u;
    // 0x268958: 0x0  nop
    ctx->pc = 0x268958u;
    // NOP
    // 0x26895c: 0x0  nop
    ctx->pc = 0x26895cu;
    // NOP
    ctx->pc = 0x268960u;
}
