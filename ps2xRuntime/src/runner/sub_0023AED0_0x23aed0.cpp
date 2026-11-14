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

// Function: sub_0023AED0
// Address: 0x23aed0 - 0x23af20
void sub_0023AED0_0x23aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AED0_0x23aed0");
#endif

    switch (ctx->pc) {
        case 0x23aef4u: goto label_23aef4;
        default: break;
    }

    ctx->pc = 0x23aed0u;

    // 0x23aed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23aed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23aed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23aedc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23aee0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23aee4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aee8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aeec: 0xc08ebc8  jal         func_23AF20
    ctx->pc = 0x23AEECu;
    SET_GPR_U32(ctx, 31, 0x23AEF4u);
    ctx->pc = 0x23AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF20u, 0x23AEECu, 0x23AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEF4u;
label_23aef4:
    // 0x23aef4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23aef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aefc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23af00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23af04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23af08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23af0c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AF14u;
    // 0x23af14: 0x0  nop
    ctx->pc = 0x23af14u;
    // NOP
    // 0x23af18: 0x0  nop
    ctx->pc = 0x23af18u;
    // NOP
    // 0x23af1c: 0x0  nop
    ctx->pc = 0x23af1cu;
    // NOP
    ctx->pc = 0x23af20u;
}
