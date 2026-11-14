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

// Function: sub_002BDE00
// Address: 0x2bde00 - 0x2bde60
void sub_002BDE00_0x2bde00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDE00_0x2bde00");
#endif

    switch (ctx->pc) {
        case 0x2bde20u: goto label_2bde20;
        case 0x2bde48u: goto label_2bde48;
        default: break;
    }

    ctx->pc = 0x2bde00u;

    // 0x2bde00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bde00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bde04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bde04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bde08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bde08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bde0c: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2bde0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2bde10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2bde10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bde14: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BDE14u;
    {
        const bool branch_taken_0x2bde14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bde14) {
            ctx->pc = 0x2BDE3Cu;
            goto label_2bde3c;
        }
    }
    ctx->pc = 0x2BDE1Cu;
    // 0x2bde1c: 0x602821  addu        $a1, $v1, $zero
    ctx->pc = 0x2bde1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_2bde20:
    // 0x2bde20: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2bde20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bde24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bde24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bde28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bde28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bde2c: 0x0  nop
    ctx->pc = 0x2bde2cu;
    // NOP
    // 0x2bde30: 0x0  nop
    ctx->pc = 0x2bde30u;
    // NOP
    // 0x2bde34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BDE34u;
    {
        const bool branch_taken_0x2bde34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bde34) {
            ctx->pc = 0x2BDE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bde20;
        }
    }
    ctx->pc = 0x2BDE3Cu;
label_2bde3c:
    // 0x2bde3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bde3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bde40: 0xc069bf8  jal         func_1A6FE0
    ctx->pc = 0x2BDE40u;
    SET_GPR_U32(ctx, 31, 0x2BDE48u);
    ctx->pc = 0x1A6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FE0u, 0x2BDE40u, 0x2BDE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE48u;
label_2bde48:
    // 0x2bde48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bde48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bde4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bde4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bde50: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDE58u;
    // 0x2bde58: 0x0  nop
    ctx->pc = 0x2bde58u;
    // NOP
    // 0x2bde5c: 0x0  nop
    ctx->pc = 0x2bde5cu;
    // NOP
    ctx->pc = 0x2bde60u;
}
