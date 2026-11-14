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

// Function: sub_001C4890
// Address: 0x1c4890 - 0x1c48f0
void sub_001C4890_0x1c4890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4890_0x1c4890");
#endif

    switch (ctx->pc) {
        case 0x1c48acu: goto label_1c48ac;
        case 0x1c48bcu: goto label_1c48bc;
        default: break;
    }

    ctx->pc = 0x1c4890u;

    // 0x1c4890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c4898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c489c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c489cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c48a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c48a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c48a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C48A4u;
    {
        const bool branch_taken_0x1c48a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c48a4) {
            ctx->pc = 0x1C48C8u;
            goto label_1c48c8;
        }
    }
    ctx->pc = 0x1C48ACu;
label_1c48ac:
    // 0x1c48ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c48acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1c48b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c48b4: 0xc06e8a8  jal         func_1BA2A0
    ctx->pc = 0x1C48B4u;
    SET_GPR_U32(ctx, 31, 0x1C48BCu);
    ctx->pc = 0x1BA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA2A0u, 0x1C48B4u, 0x1C48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48BCu;
label_1c48bc:
    // 0x1c48bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48c0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1c48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1c48c4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1c48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1c48c8:
    // 0x1c48c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c48c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c48d0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C48D0u;
    {
        const bool branch_taken_0x1c48d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c48d0) {
            ctx->pc = 0x1C48ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c48ac;
        }
    }
    ctx->pc = 0x1C48D8u;
    // 0x1c48d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c48d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c48dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c48dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c48e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C48E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C48E8u;
    // 0x1c48e8: 0x0  nop
    ctx->pc = 0x1c48e8u;
    // NOP
    // 0x1c48ec: 0x0  nop
    ctx->pc = 0x1c48ecu;
    // NOP
    ctx->pc = 0x1c48f0u;
}
