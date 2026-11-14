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

// Function: sub_00126E00
// Address: 0x126e00 - 0x126e90
void sub_00126E00_0x126e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126E00_0x126e00");
#endif

    switch (ctx->pc) {
        case 0x126e40u: goto label_126e40;
        default: break;
    }

    ctx->pc = 0x126e00u;

    // 0x126e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126e04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x126e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x126e08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x126e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x126e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x126e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126e10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126e14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x126e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126e18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x126e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x126e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x126e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126e20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x126e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x126e24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x126e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126e28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x126e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x126e2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x126e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126e30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x126e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126e34: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x126e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x126e38: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x126e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x126e3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x126e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_126e40:
    // 0x126e40: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x126e40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126e44: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x126e44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x126e48: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x126e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x126e4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x126e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x126e50: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x126e50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x126e54: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x126e54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x126e58: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x126e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x126e5c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x126E5Cu;
    {
        const bool branch_taken_0x126e5c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x126e5c) {
            ctx->pc = 0x126E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126e40;
        }
    }
    ctx->pc = 0x126E64u;
    // 0x126e64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x126e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126e68: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x126e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x126e6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x126e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126e70: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x126e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x126e74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x126e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126e78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x126e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x126e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x126E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126E84u;
    // 0x126e84: 0x0  nop
    ctx->pc = 0x126e84u;
    // NOP
    // 0x126e88: 0x0  nop
    ctx->pc = 0x126e88u;
    // NOP
    // 0x126e8c: 0x0  nop
    ctx->pc = 0x126e8cu;
    // NOP
    ctx->pc = 0x126e90u;
}
