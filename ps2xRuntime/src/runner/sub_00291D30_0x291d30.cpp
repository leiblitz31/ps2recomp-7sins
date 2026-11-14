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

// Function: sub_00291D30
// Address: 0x291d30 - 0x291d80
void sub_00291D30_0x291d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291D30_0x291d30");
#endif

    switch (ctx->pc) {
        case 0x291d48u: goto label_291d48;
        case 0x291d54u: goto label_291d54;
        default: break;
    }

    ctx->pc = 0x291d30u;

    // 0x291d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291d3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x291d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x291d40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x291D40u;
    {
        const bool branch_taken_0x291d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d40) {
            ctx->pc = 0x291D60u;
            goto label_291d60;
        }
    }
    ctx->pc = 0x291D48u;
label_291d48:
    // 0x291d48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291d4c: 0xc0a4760  jal         func_291D80
    ctx->pc = 0x291D4Cu;
    SET_GPR_U32(ctx, 31, 0x291D54u);
    ctx->pc = 0x291D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D80u, 0x291D4Cu, 0x291D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D54u;
label_291d54:
    // 0x291d54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x291d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291d58: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x291d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x291d5c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x291d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_291d60:
    // 0x291d60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291d64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x291d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291d68: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x291D68u;
    {
        const bool branch_taken_0x291d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x291d68) {
            ctx->pc = 0x291D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291d48;
        }
    }
    ctx->pc = 0x291D70u;
    // 0x291d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291d74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x291d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x291d78: 0x3e00008  jr          $ra
    ctx->pc = 0x291D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291D80u;
}
