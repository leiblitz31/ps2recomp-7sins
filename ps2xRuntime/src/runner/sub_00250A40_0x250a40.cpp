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

// Function: sub_00250A40
// Address: 0x250a40 - 0x250a90
void sub_00250A40_0x250a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250A40_0x250a40");
#endif

    switch (ctx->pc) {
        case 0x250a58u: goto label_250a58;
        case 0x250a64u: goto label_250a64;
        default: break;
    }

    ctx->pc = 0x250a40u;

    // 0x250a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x250a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x250a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x250a4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x250a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x250a50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x250A50u;
    {
        const bool branch_taken_0x250a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250a50) {
            ctx->pc = 0x250A70u;
            goto label_250a70;
        }
    }
    ctx->pc = 0x250A58u;
label_250a58:
    // 0x250a58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250a5c: 0xc0942a4  jal         func_250A90
    ctx->pc = 0x250A5Cu;
    SET_GPR_U32(ctx, 31, 0x250A64u);
    ctx->pc = 0x250A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250A90u, 0x250A5Cu, 0x250A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A64u;
label_250a64:
    // 0x250a64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x250a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250a68: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x250a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x250a6c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x250a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_250a70:
    // 0x250a70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250a74: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x250a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250a78: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x250A78u;
    {
        const bool branch_taken_0x250a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x250a78) {
            ctx->pc = 0x250A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250a58;
        }
    }
    ctx->pc = 0x250A80u;
    // 0x250a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250a84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x250a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x250a88: 0x3e00008  jr          $ra
    ctx->pc = 0x250A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250A90u;
}
