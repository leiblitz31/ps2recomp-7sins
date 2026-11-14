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

// Function: sub_00115730
// Address: 0x115730 - 0x115770
void sub_00115730_0x115730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115730_0x115730");
#endif

    switch (ctx->pc) {
        case 0x115750u: goto label_115750;
        default: break;
    }

    ctx->pc = 0x115730u;

    // 0x115730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11573c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11573cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x115740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115744: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x115744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115748: 0xc0455dc  jal         func_115770
    ctx->pc = 0x115748u;
    SET_GPR_U32(ctx, 31, 0x115750u);
    ctx->pc = 0x115770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115770u, 0x115748u, 0x115750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115750u;
label_115750:
    // 0x115750: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x115750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115758: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x115758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11575c: 0x3e00008  jr          $ra
    ctx->pc = 0x11575Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11575Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115764u;
    // 0x115764: 0x0  nop
    ctx->pc = 0x115764u;
    // NOP
    // 0x115768: 0x0  nop
    ctx->pc = 0x115768u;
    // NOP
    // 0x11576c: 0x0  nop
    ctx->pc = 0x11576cu;
    // NOP
    ctx->pc = 0x115770u;
}
