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

// Function: sub_001C6BF0
// Address: 0x1c6bf0 - 0x1c6c40
void sub_001C6BF0_0x1c6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6BF0_0x1c6bf0");
#endif

    switch (ctx->pc) {
        case 0x1c6c08u: goto label_1c6c08;
        case 0x1c6c14u: goto label_1c6c14;
        default: break;
    }

    ctx->pc = 0x1c6bf0u;

    // 0x1c6bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c6bfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c6bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c6c00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6C00u;
    {
        const bool branch_taken_0x1c6c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c00) {
            ctx->pc = 0x1C6C20u;
            goto label_1c6c20;
        }
    }
    ctx->pc = 0x1C6C08u;
label_1c6c08:
    // 0x1c6c08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c0c: 0xc071b10  jal         func_1C6C40
    ctx->pc = 0x1C6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C14u);
    ctx->pc = 0x1C6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6C40u, 0x1C6C0Cu, 0x1C6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C14u;
label_1c6c14:
    // 0x1c6c14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c18: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c6c1c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1c6c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1c6c20:
    // 0x1c6c20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c24: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6c28: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C6C28u;
    {
        const bool branch_taken_0x1c6c28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6c28) {
            ctx->pc = 0x1C6C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c08;
        }
    }
    ctx->pc = 0x1C6C30u;
    // 0x1c6c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c34: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c6c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c6c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C40u;
}
