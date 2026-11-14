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

// Function: sub_00258A60
// Address: 0x258a60 - 0x258ab0
void sub_00258A60_0x258a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258A60_0x258a60");
#endif

    switch (ctx->pc) {
        case 0x258a78u: goto label_258a78;
        case 0x258a84u: goto label_258a84;
        default: break;
    }

    ctx->pc = 0x258a60u;

    // 0x258a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258a68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x258a6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x258a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258a70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258A70u;
    {
        const bool branch_taken_0x258a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258a70) {
            ctx->pc = 0x258A90u;
            goto label_258a90;
        }
    }
    ctx->pc = 0x258A78u;
label_258a78:
    // 0x258a78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258a7c: 0xc0962ac  jal         func_258AB0
    ctx->pc = 0x258A7Cu;
    SET_GPR_U32(ctx, 31, 0x258A84u);
    ctx->pc = 0x258AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AB0u, 0x258A7Cu, 0x258A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258A84u;
label_258a84:
    // 0x258a84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x258a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258a88: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x258a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x258a8c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x258a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_258a90:
    // 0x258a90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258a94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x258a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258a98: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258A98u;
    {
        const bool branch_taken_0x258a98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x258a98) {
            ctx->pc = 0x258A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258a78;
        }
    }
    ctx->pc = 0x258AA0u;
    // 0x258aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258aa4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x258AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258AB0u;
}
