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

// Function: sub_00106BE0
// Address: 0x106be0 - 0x106c30
void sub_00106BE0_0x106be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106BE0_0x106be0");
#endif

    switch (ctx->pc) {
        case 0x106c04u: goto label_106c04;
        default: break;
    }

    ctx->pc = 0x106be0u;

    // 0x106be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x106bec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x106becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x106bf0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x106bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x106bf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106bf8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x106bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106bfc: 0xc041b0c  jal         func_106C30
    ctx->pc = 0x106BFCu;
    SET_GPR_U32(ctx, 31, 0x106C04u);
    ctx->pc = 0x106C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C30u, 0x106BFCu, 0x106C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C04u;
label_106c04:
    // 0x106c04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x106c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106c08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106c0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x106c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x106c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106c18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x106c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x106C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C24u;
    // 0x106c24: 0x0  nop
    ctx->pc = 0x106c24u;
    // NOP
    // 0x106c28: 0x0  nop
    ctx->pc = 0x106c28u;
    // NOP
    // 0x106c2c: 0x0  nop
    ctx->pc = 0x106c2cu;
    // NOP
    ctx->pc = 0x106c30u;
}
