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

// Function: sub_0015B720
// Address: 0x15b720 - 0x15b770
void sub_0015B720_0x15b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B720_0x15b720");
#endif

    switch (ctx->pc) {
        case 0x15b740u: goto label_15b740;
        case 0x15b758u: goto label_15b758;
        default: break;
    }

    ctx->pc = 0x15b720u;

    // 0x15b720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15b724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b728: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15b728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15b72c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15b730: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x15b730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x15b734: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15b738: 0xc056e04  jal         func_15B810
    ctx->pc = 0x15B738u;
    SET_GPR_U32(ctx, 31, 0x15B740u);
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x15B738u, 0x15B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B740u;
label_15b740:
    // 0x15b740: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15b740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b744: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15b744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b748: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b74c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15b750: 0xc056ddc  jal         func_15B770
    ctx->pc = 0x15B750u;
    SET_GPR_U32(ctx, 31, 0x15B758u);
    ctx->pc = 0x15B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B770u, 0x15B750u, 0x15B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B758u;
label_15b758:
    // 0x15b758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b75c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15b760: 0x3e00008  jr          $ra
    ctx->pc = 0x15B760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B768u;
    // 0x15b768: 0x0  nop
    ctx->pc = 0x15b768u;
    // NOP
    // 0x15b76c: 0x0  nop
    ctx->pc = 0x15b76cu;
    // NOP
    ctx->pc = 0x15b770u;
}
