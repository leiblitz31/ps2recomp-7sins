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

// Function: sub_001E2CF0
// Address: 0x1e2cf0 - 0x1e2d70
void sub_001E2CF0_0x1e2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2CF0_0x1e2cf0");
#endif

    switch (ctx->pc) {
        case 0x1e2d0cu: goto label_1e2d0c;
        case 0x1e2d1cu: goto label_1e2d1c;
        case 0x1e2d30u: goto label_1e2d30;
        case 0x1e2d3cu: goto label_1e2d3c;
        case 0x1e2d4cu: goto label_1e2d4c;
        default: break;
    }

    ctx->pc = 0x1e2cf0u;

    // 0x1e2cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e2cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2cf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e2cfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e2d00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e2d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e2d04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E2D04u;
    {
        const bool branch_taken_0x1e2d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2d04) {
            ctx->pc = 0x1E2D3Cu;
            goto label_1e2d3c;
        }
    }
    ctx->pc = 0x1E2D0Cu;
label_1e2d0c:
    // 0x1e2d0c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e2d10: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2d14: 0xc078858  jal         func_1E2160
    ctx->pc = 0x1E2D14u;
    SET_GPR_U32(ctx, 31, 0x1E2D1Cu);
    ctx->pc = 0x1E2160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2160u, 0x1E2D14u, 0x1E2D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D1Cu;
label_1e2d1c:
    // 0x1e2d1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2d20: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e2d24: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1e2d24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2d28: 0xc078820  jal         func_1E2080
    ctx->pc = 0x1E2D28u;
    SET_GPR_U32(ctx, 31, 0x1E2D30u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x1E2D28u, 0x1E2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D30u;
label_1e2d30:
    // 0x1e2d30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2d34: 0xc078a30  jal         func_1E28C0
    ctx->pc = 0x1E2D34u;
    SET_GPR_U32(ctx, 31, 0x1E2D3Cu);
    ctx->pc = 0x1E28C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28C0u, 0x1E2D34u, 0x1E2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D3Cu;
label_1e2d3c:
    // 0x1e2d3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2d40: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2d44: 0xc078b5c  jal         func_1E2D70
    ctx->pc = 0x1E2D44u;
    SET_GPR_U32(ctx, 31, 0x1E2D4Cu);
    ctx->pc = 0x1E2D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2D70u, 0x1E2D44u, 0x1E2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D4Cu;
label_1e2d4c:
    // 0x1e2d4c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E2D4Cu;
    {
        const bool branch_taken_0x1e2d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2d4c) {
            ctx->pc = 0x1E2D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2d0c;
        }
    }
    ctx->pc = 0x1E2D54u;
    // 0x1e2d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2d58: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e2d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e2d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2D64u;
    // 0x1e2d64: 0x0  nop
    ctx->pc = 0x1e2d64u;
    // NOP
    // 0x1e2d68: 0x0  nop
    ctx->pc = 0x1e2d68u;
    // NOP
    // 0x1e2d6c: 0x0  nop
    ctx->pc = 0x1e2d6cu;
    // NOP
    ctx->pc = 0x1e2d70u;
}
