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

// Function: sub_0023AD10
// Address: 0x23ad10 - 0x23ad60
void sub_0023AD10_0x23ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AD10_0x23ad10");
#endif

    switch (ctx->pc) {
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad34u: goto label_23ad34;
        default: break;
    }

    ctx->pc = 0x23ad10u;

    // 0x23ad10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23ad14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ad18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ad1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23ad20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23AD20u;
    {
        const bool branch_taken_0x23ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ad20) {
            ctx->pc = 0x23AD40u;
            goto label_23ad40;
        }
    }
    ctx->pc = 0x23AD28u;
label_23ad28:
    // 0x23ad28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ad2c: 0xc08eb58  jal         func_23AD60
    ctx->pc = 0x23AD2Cu;
    SET_GPR_U32(ctx, 31, 0x23AD34u);
    ctx->pc = 0x23AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AD60u, 0x23AD2Cu, 0x23AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD34u;
label_23ad34:
    // 0x23ad34: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ad38: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x23ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x23ad3c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x23ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_23ad40:
    // 0x23ad40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ad44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ad48: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23AD48u;
    {
        const bool branch_taken_0x23ad48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ad48) {
            ctx->pc = 0x23AD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ad28;
        }
    }
    ctx->pc = 0x23AD50u;
    // 0x23ad50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ad50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ad54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23ad54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23ad58: 0x3e00008  jr          $ra
    ctx->pc = 0x23AD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AD60u;
}
