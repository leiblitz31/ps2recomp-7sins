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

// Function: sub_001B7680
// Address: 0x1b7680 - 0x1b76e0
void sub_001B7680_0x1b7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7680_0x1b7680");
#endif

    switch (ctx->pc) {
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76d0u: goto label_1b76d0;
        default: break;
    }

    ctx->pc = 0x1b7680u;

    // 0x1b7680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7688: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b7688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b768c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b768cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b7690: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1b7694: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b7698: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7698u;
    {
        const bool branch_taken_0x1b7698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7698) {
            ctx->pc = 0x1B76C0u;
            goto label_1b76c0;
        }
    }
    ctx->pc = 0x1B76A0u;
    // 0x1b76a0: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x1b76a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1b76a4:
    // 0x1b76a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b76a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b76a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b76ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b76acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b76b0: 0x0  nop
    ctx->pc = 0x1b76b0u;
    // NOP
    // 0x1b76b4: 0x0  nop
    ctx->pc = 0x1b76b4u;
    // NOP
    // 0x1b76b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B76B8u;
    {
        const bool branch_taken_0x1b76b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b76b8) {
            ctx->pc = 0x1B76A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b76a4;
        }
    }
    ctx->pc = 0x1B76C0u;
label_1b76c0:
    // 0x1b76c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b76c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b76c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b76c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b76c8: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1B76C8u;
    SET_GPR_U32(ctx, 31, 0x1B76D0u);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1B76C8u, 0x1B76D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76D0u;
label_1b76d0:
    // 0x1b76d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b76d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b76d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b76d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b76d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B76D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B76D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B76E0u;
}
