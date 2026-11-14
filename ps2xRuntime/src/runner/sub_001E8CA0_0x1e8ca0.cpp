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

// Function: sub_001E8CA0
// Address: 0x1e8ca0 - 0x1e8d00
void sub_001E8CA0_0x1e8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8CA0_0x1e8ca0");
#endif

    switch (ctx->pc) {
        case 0x1e8cbcu: goto label_1e8cbc;
        case 0x1e8cccu: goto label_1e8ccc;
        default: break;
    }

    ctx->pc = 0x1e8ca0u;

    // 0x1e8ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8ca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e8cac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e8cb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e8cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e8cb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8CB4u;
    {
        const bool branch_taken_0x1e8cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cb4) {
            ctx->pc = 0x1E8CD8u;
            goto label_1e8cd8;
        }
    }
    ctx->pc = 0x1E8CBCu;
label_1e8cbc:
    // 0x1e8cbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8cc0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e8cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8cc4: 0xc0787b0  jal         func_1E1EC0
    ctx->pc = 0x1E8CC4u;
    SET_GPR_U32(ctx, 31, 0x1E8CCCu);
    ctx->pc = 0x1E1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1EC0u, 0x1E8CC4u, 0x1E8CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CCCu;
label_1e8ccc:
    // 0x1e8ccc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8cd0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1e8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1e8cd4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e8cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e8cd8:
    // 0x1e8cd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8cdc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8ce0: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E8CE0u;
    {
        const bool branch_taken_0x1e8ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e8ce0) {
            ctx->pc = 0x1E8CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8cbc;
        }
    }
    ctx->pc = 0x1E8CE8u;
    // 0x1e8ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8cec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e8cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8CF8u;
    // 0x1e8cf8: 0x0  nop
    ctx->pc = 0x1e8cf8u;
    // NOP
    // 0x1e8cfc: 0x0  nop
    ctx->pc = 0x1e8cfcu;
    // NOP
    ctx->pc = 0x1e8d00u;
}
