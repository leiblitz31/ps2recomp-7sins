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

// Function: sub_00183B30
// Address: 0x183b30 - 0x183b80
void sub_00183B30_0x183b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183B30_0x183b30");
#endif

    switch (ctx->pc) {
        case 0x183b48u: goto label_183b48;
        case 0x183b54u: goto label_183b54;
        default: break;
    }

    ctx->pc = 0x183b30u;

    // 0x183b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183b3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x183b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x183b40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x183B40u;
    {
        const bool branch_taken_0x183b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b40) {
            ctx->pc = 0x183B60u;
            goto label_183b60;
        }
    }
    ctx->pc = 0x183B48u;
label_183b48:
    // 0x183b48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b4c: 0xc060ee0  jal         func_183B80
    ctx->pc = 0x183B4Cu;
    SET_GPR_U32(ctx, 31, 0x183B54u);
    ctx->pc = 0x183B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183B80u, 0x183B4Cu, 0x183B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183B54u;
label_183b54:
    // 0x183b54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x183b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b58: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x183b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x183b5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x183b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_183b60:
    // 0x183b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183b64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x183b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183b68: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x183B68u;
    {
        const bool branch_taken_0x183b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x183b68) {
            ctx->pc = 0x183B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183b48;
        }
    }
    ctx->pc = 0x183B70u;
    // 0x183b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183b74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x183b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183b78: 0x3e00008  jr          $ra
    ctx->pc = 0x183B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183B80u;
}
