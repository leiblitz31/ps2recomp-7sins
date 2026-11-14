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

// Function: sub_00457440
// Address: 0x457440 - 0x457490
void sub_00457440_0x457440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457440_0x457440");
#endif

    switch (ctx->pc) {
        case 0x457464u: goto label_457464;
        default: break;
    }

    ctx->pc = 0x457440u;

    // 0x457440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x457440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x457444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45744c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45744cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x457450: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x457450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x457454: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x457454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457458: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x457458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45745c: 0xc115d24  jal         func_457490
    ctx->pc = 0x45745Cu;
    SET_GPR_U32(ctx, 31, 0x457464u);
    ctx->pc = 0x457490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457490u, 0x45745Cu, 0x457464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457464u;
label_457464:
    // 0x457464: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x457464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457468: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45746c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45746cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x457470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457478: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x457478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45747c: 0x3e00008  jr          $ra
    ctx->pc = 0x45747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45747Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457484u;
    // 0x457484: 0x0  nop
    ctx->pc = 0x457484u;
    // NOP
    // 0x457488: 0x0  nop
    ctx->pc = 0x457488u;
    // NOP
    // 0x45748c: 0x0  nop
    ctx->pc = 0x45748cu;
    // NOP
    ctx->pc = 0x457490u;
}
