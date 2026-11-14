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

// Function: sub_001C6730
// Address: 0x1c6730 - 0x1c6770
void sub_001C6730_0x1c6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6730_0x1c6730");
#endif

    switch (ctx->pc) {
        case 0x1c674cu: goto label_1c674c;
        default: break;
    }

    ctx->pc = 0x1c6730u;

    // 0x1c6730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c6738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c673c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c673cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c6740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6744: 0xc0719dc  jal         func_1C6770
    ctx->pc = 0x1C6744u;
    SET_GPR_U32(ctx, 31, 0x1C674Cu);
    ctx->pc = 0x1C6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6770u, 0x1C6744u, 0x1C674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C674Cu;
label_1c674c:
    // 0x1c674c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c674cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6750: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c6750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c6754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c6754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c675c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c675cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c6760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6768u;
    // 0x1c6768: 0x0  nop
    ctx->pc = 0x1c6768u;
    // NOP
    // 0x1c676c: 0x0  nop
    ctx->pc = 0x1c676cu;
    // NOP
    ctx->pc = 0x1c6770u;
}
