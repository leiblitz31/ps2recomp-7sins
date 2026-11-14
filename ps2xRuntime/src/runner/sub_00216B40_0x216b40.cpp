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

// Function: sub_00216B40
// Address: 0x216b40 - 0x216ba0
void sub_00216B40_0x216b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216B40_0x216b40");
#endif

    switch (ctx->pc) {
        case 0x216b64u: goto label_216b64;
        case 0x216b90u: goto label_216b90;
        default: break;
    }

    ctx->pc = 0x216b40u;

    // 0x216b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x216b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216b48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x216b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x216b4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x216b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x216b50: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x216b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x216b54: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216b58: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x216B58u;
    {
        const bool branch_taken_0x216b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216b58) {
            ctx->pc = 0x216B80u;
            goto label_216b80;
        }
    }
    ctx->pc = 0x216B60u;
    // 0x216b60: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x216b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_216b64:
    // 0x216b64: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x216b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x216b68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x216b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x216b6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x216b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x216b70: 0x0  nop
    ctx->pc = 0x216b70u;
    // NOP
    // 0x216b74: 0x0  nop
    ctx->pc = 0x216b74u;
    // NOP
    // 0x216b78: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x216B78u;
    {
        const bool branch_taken_0x216b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216b78) {
            ctx->pc = 0x216B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216b64;
        }
    }
    ctx->pc = 0x216B80u;
label_216b80:
    // 0x216b80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x216b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216b84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x216b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216b88: 0xc085ae8  jal         func_216BA0
    ctx->pc = 0x216B88u;
    SET_GPR_U32(ctx, 31, 0x216B90u);
    ctx->pc = 0x216BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216BA0u, 0x216B88u, 0x216B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B90u;
label_216b90:
    // 0x216b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216b94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x216b98: 0x3e00008  jr          $ra
    ctx->pc = 0x216B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216BA0u;
}
