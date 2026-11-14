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

// Function: sub_00131BF0
// Address: 0x131bf0 - 0x131c40
void sub_00131BF0_0x131bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131BF0_0x131bf0");
#endif

    switch (ctx->pc) {
        case 0x131c10u: goto label_131c10;
        case 0x131c28u: goto label_131c28;
        default: break;
    }

    ctx->pc = 0x131bf0u;

    // 0x131bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x131bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x131bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131bf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x131bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x131bfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x131bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x131c00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x131c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x131c04: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x131c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x131c08: 0xc04c748  jal         func_131D20
    ctx->pc = 0x131C08u;
    SET_GPR_U32(ctx, 31, 0x131C10u);
    ctx->pc = 0x131D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D20u, 0x131C08u, 0x131C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C10u;
label_131c10:
    // 0x131c10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x131c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c14: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c18: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131c1c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x131c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x131c20: 0xc04c710  jal         func_131C40
    ctx->pc = 0x131C20u;
    SET_GPR_U32(ctx, 31, 0x131C28u);
    ctx->pc = 0x131C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C40u, 0x131C20u, 0x131C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C28u;
label_131c28:
    // 0x131c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131c2c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x131c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x131c30: 0x3e00008  jr          $ra
    ctx->pc = 0x131C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C38u;
    // 0x131c38: 0x0  nop
    ctx->pc = 0x131c38u;
    // NOP
    // 0x131c3c: 0x0  nop
    ctx->pc = 0x131c3cu;
    // NOP
    ctx->pc = 0x131c40u;
}
