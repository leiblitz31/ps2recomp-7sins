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

// Function: sub_00490F30
// Address: 0x490f30 - 0x490f80
void sub_00490F30_0x490f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490F30_0x490f30");
#endif

    switch (ctx->pc) {
        case 0x490f48u: goto label_490f48;
        case 0x490f54u: goto label_490f54;
        default: break;
    }

    ctx->pc = 0x490f30u;

    // 0x490f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x490f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x490f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490f38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490f3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x490f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x490f40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x490F40u;
    {
        const bool branch_taken_0x490f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490f40) {
            ctx->pc = 0x490F60u;
            goto label_490f60;
        }
    }
    ctx->pc = 0x490F48u;
label_490f48:
    // 0x490f48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490f4c: 0xc1243e0  jal         func_490F80
    ctx->pc = 0x490F4Cu;
    SET_GPR_U32(ctx, 31, 0x490F54u);
    ctx->pc = 0x490F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490F80u, 0x490F4Cu, 0x490F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490F54u;
label_490f54:
    // 0x490f54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x490f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490f58: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x490f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x490f5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x490f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_490f60:
    // 0x490f60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490f64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x490f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490f68: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x490F68u;
    {
        const bool branch_taken_0x490f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x490f68) {
            ctx->pc = 0x490F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490f48;
        }
    }
    ctx->pc = 0x490F70u;
    // 0x490f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490f74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x490f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x490f78: 0x3e00008  jr          $ra
    ctx->pc = 0x490F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490F80u;
}
