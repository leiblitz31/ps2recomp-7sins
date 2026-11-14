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

// Function: sub_00153B40
// Address: 0x153b40 - 0x153bb0
void sub_00153B40_0x153b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153B40_0x153b40");
#endif

    switch (ctx->pc) {
        case 0x153b60u: goto label_153b60;
        case 0x153b74u: goto label_153b74;
        case 0x153b88u: goto label_153b88;
        default: break;
    }

    ctx->pc = 0x153b40u;

    // 0x153b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153b48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x153b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x153b4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x153b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x153b50: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x153b54: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x153b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153b58: 0xc054f08  jal         func_153C20
    ctx->pc = 0x153B58u;
    SET_GPR_U32(ctx, 31, 0x153B60u);
    ctx->pc = 0x153C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153C20u, 0x153B58u, 0x153B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B60u;
label_153b60:
    // 0x153b60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153b64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b6c: 0xc054eec  jal         func_153BB0
    ctx->pc = 0x153B6Cu;
    SET_GPR_U32(ctx, 31, 0x153B74u);
    ctx->pc = 0x153BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153BB0u, 0x153B6Cu, 0x153B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B74u;
label_153b74:
    // 0x153b74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b80: 0xc05559c  jal         func_155670
    ctx->pc = 0x153B80u;
    SET_GPR_U32(ctx, 31, 0x153B88u);
    ctx->pc = 0x155670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155670u, 0x153B80u, 0x153B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B88u;
label_153b88:
    // 0x153b88: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x153b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153b8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x153b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x153b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x153b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153b98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x153b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x153b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x153B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153BA4u;
    // 0x153ba4: 0x0  nop
    ctx->pc = 0x153ba4u;
    // NOP
    // 0x153ba8: 0x0  nop
    ctx->pc = 0x153ba8u;
    // NOP
    // 0x153bac: 0x0  nop
    ctx->pc = 0x153bacu;
    // NOP
    ctx->pc = 0x153bb0u;
}
