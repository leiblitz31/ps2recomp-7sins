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

// Function: sub_00217440
// Address: 0x217440 - 0x2174a0
void sub_00217440_0x217440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217440_0x217440");
#endif

    switch (ctx->pc) {
        case 0x21745cu: goto label_21745c;
        case 0x21746cu: goto label_21746c;
        default: break;
    }

    ctx->pc = 0x217440u;

    // 0x217440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21744c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21744cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x217450: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x217450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x217454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217454u;
    {
        const bool branch_taken_0x217454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217454) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x21745Cu;
label_21745c:
    // 0x21745c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217460: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x217460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217464: 0xc085b78  jal         func_216DE0
    ctx->pc = 0x217464u;
    SET_GPR_U32(ctx, 31, 0x21746Cu);
    ctx->pc = 0x216DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216DE0u, 0x217464u, 0x21746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21746Cu;
label_21746c:
    // 0x21746c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217470: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x217470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x217474: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x217474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_217478:
    // 0x217478: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21747c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x21747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217480: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x217480u;
    {
        const bool branch_taken_0x217480 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x217480) {
            ctx->pc = 0x21745Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21745c;
        }
    }
    ctx->pc = 0x217488u;
    // 0x217488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21748c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21748cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x217490: 0x3e00008  jr          $ra
    ctx->pc = 0x217490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217498u;
    // 0x217498: 0x0  nop
    ctx->pc = 0x217498u;
    // NOP
    // 0x21749c: 0x0  nop
    ctx->pc = 0x21749cu;
    // NOP
    ctx->pc = 0x2174a0u;
}
