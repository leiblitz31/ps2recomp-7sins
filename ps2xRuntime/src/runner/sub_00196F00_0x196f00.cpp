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

// Function: sub_00196F00
// Address: 0x196f00 - 0x196f50
void sub_00196F00_0x196f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F00_0x196f00");
#endif

    switch (ctx->pc) {
        case 0x196f1cu: goto label_196f1c;
        case 0x196f30u: goto label_196f30;
        case 0x196f40u: goto label_196f40;
        default: break;
    }

    ctx->pc = 0x196f00u;

    // 0x196f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196f08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x196f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x196f0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x196f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x196f10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x196f14: 0xc067044  jal         func_19C110
    ctx->pc = 0x196F14u;
    SET_GPR_U32(ctx, 31, 0x196F1Cu);
    ctx->pc = 0x19C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C110u, 0x196F14u, 0x196F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F1Cu;
label_196f1c:
    // 0x196f1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x196f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196f20: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x196f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196f24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x196f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x196f28: 0xc065bd4  jal         func_196F50
    ctx->pc = 0x196F28u;
    SET_GPR_U32(ctx, 31, 0x196F30u);
    ctx->pc = 0x196F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196F50u, 0x196F28u, 0x196F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F30u;
label_196f30:
    // 0x196f30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x196f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x196f34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x196f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196f38: 0xc067054  jal         func_19C150
    ctx->pc = 0x196F38u;
    SET_GPR_U32(ctx, 31, 0x196F40u);
    ctx->pc = 0x19C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C150u, 0x196F38u, 0x196F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F40u;
label_196f40:
    // 0x196f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196f44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x196f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x196f48: 0x3e00008  jr          $ra
    ctx->pc = 0x196F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F50u;
}
