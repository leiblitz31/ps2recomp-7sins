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

// Function: sub_0016BD70
// Address: 0x16bd70 - 0x16bdb0
void sub_0016BD70_0x16bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BD70_0x16bd70");
#endif

    switch (ctx->pc) {
        case 0x16bd98u: goto label_16bd98;
        default: break;
    }

    ctx->pc = 0x16bd70u;

    // 0x16bd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bd78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16bd7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16bd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16bd84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BD84u;
    {
        const bool branch_taken_0x16bd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bd84) {
            ctx->pc = 0x16BD98u;
            goto label_16bd98;
        }
    }
    ctx->pc = 0x16BD8Cu;
    // 0x16bd8c: 0x8f84babc  lw          $a0, -0x4544($gp)
    ctx->pc = 0x16bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949564)));
    // 0x16bd90: 0xc05afb4  jal         func_16BED0
    ctx->pc = 0x16BD90u;
    SET_GPR_U32(ctx, 31, 0x16BD98u);
    ctx->pc = 0x16BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BED0u, 0x16BD90u, 0x16BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD98u;
label_16bd98:
    // 0x16bd98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16bd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BDA8u;
    // 0x16bda8: 0x0  nop
    ctx->pc = 0x16bda8u;
    // NOP
    // 0x16bdac: 0x0  nop
    ctx->pc = 0x16bdacu;
    // NOP
    ctx->pc = 0x16bdb0u;
}
