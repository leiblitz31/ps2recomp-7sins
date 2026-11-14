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

// Function: sub_0019E280
// Address: 0x19e280 - 0x19e2e0
void sub_0019E280_0x19e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E280_0x19e280");
#endif

    switch (ctx->pc) {
        case 0x19e29cu: goto label_19e29c;
        case 0x19e2acu: goto label_19e2ac;
        default: break;
    }

    ctx->pc = 0x19e280u;

    // 0x19e280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19e288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19e28c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x19e290: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x19e290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x19e294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19E294u;
    {
        const bool branch_taken_0x19e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e294) {
            ctx->pc = 0x19E2B8u;
            goto label_19e2b8;
        }
    }
    ctx->pc = 0x19E29Cu;
label_19e29c:
    // 0x19e29c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e2a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e2a4: 0xc065e00  jal         func_197800
    ctx->pc = 0x19E2A4u;
    SET_GPR_U32(ctx, 31, 0x19E2ACu);
    ctx->pc = 0x197800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197800u, 0x19E2A4u, 0x19E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2ACu;
label_19e2ac:
    // 0x19e2ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e2b0: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x19e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x19e2b4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x19e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_19e2b8:
    // 0x19e2b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e2bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e2c0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19E2C0u;
    {
        const bool branch_taken_0x19e2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19e2c0) {
            ctx->pc = 0x19E29Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e29c;
        }
    }
    ctx->pc = 0x19E2C8u;
    // 0x19e2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e2cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19e2ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19e2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E2D8u;
    // 0x19e2d8: 0x0  nop
    ctx->pc = 0x19e2d8u;
    // NOP
    // 0x19e2dc: 0x0  nop
    ctx->pc = 0x19e2dcu;
    // NOP
    ctx->pc = 0x19e2e0u;
}
