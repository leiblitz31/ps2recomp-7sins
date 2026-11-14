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

// Function: sub_002167C0
// Address: 0x2167c0 - 0x216810
void sub_002167C0_0x2167c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002167C0_0x2167c0");
#endif

    switch (ctx->pc) {
        case 0x2167d8u: goto label_2167d8;
        case 0x2167e4u: goto label_2167e4;
        default: break;
    }

    ctx->pc = 0x2167c0u;

    // 0x2167c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2167c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2167c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2167c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2167c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2167c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2167cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2167ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2167d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2167D0u;
    {
        const bool branch_taken_0x2167d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2167d0) {
            ctx->pc = 0x2167F0u;
            goto label_2167f0;
        }
    }
    ctx->pc = 0x2167D8u;
label_2167d8:
    // 0x2167d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2167d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2167dc: 0xc085a04  jal         func_216810
    ctx->pc = 0x2167DCu;
    SET_GPR_U32(ctx, 31, 0x2167E4u);
    ctx->pc = 0x216810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216810u, 0x2167DCu, 0x2167E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167E4u;
label_2167e4:
    // 0x2167e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2167e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2167e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2167e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2167ec: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2167ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2167f0:
    // 0x2167f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2167f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2167f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2167f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2167f8: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2167F8u;
    {
        const bool branch_taken_0x2167f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2167f8) {
            ctx->pc = 0x2167D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2167d8;
        }
    }
    ctx->pc = 0x216800u;
    // 0x216800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216804: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x216804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x216808: 0x3e00008  jr          $ra
    ctx->pc = 0x216808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216810u;
}
