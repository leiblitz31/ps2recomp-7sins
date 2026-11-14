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

// Function: sub_00179D90
// Address: 0x179d90 - 0x179e10
void sub_00179D90_0x179d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179D90_0x179d90");
#endif

    switch (ctx->pc) {
        case 0x179dc4u: goto label_179dc4;
        case 0x179df4u: goto label_179df4;
        default: break;
    }

    ctx->pc = 0x179d90u;

    // 0x179d90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179d98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x179d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x179d9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x179d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x179da0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x179da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x179da4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x179da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179da8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x179da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179dac: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x179dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x179db0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179db4: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x179db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x179db8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x179db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179dbc: 0xc05e998  jal         func_17A660
    ctx->pc = 0x179DBCu;
    SET_GPR_U32(ctx, 31, 0x179DC4u);
    ctx->pc = 0x17A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A660u, 0x179DBCu, 0x179DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DC4u;
label_179dc4:
    // 0x179dc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179DC4u;
    {
        const bool branch_taken_0x179dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179dc4) {
            ctx->pc = 0x179DD8u;
            goto label_179dd8;
        }
    }
    ctx->pc = 0x179DCCu;
    // 0x179dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179dd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x179DD0u;
    {
        const bool branch_taken_0x179dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179dd0) {
            ctx->pc = 0x179DF8u;
            goto label_179df8;
        }
    }
    ctx->pc = 0x179DD8u;
label_179dd8:
    // 0x179dd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x179dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179ddc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x179ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179de0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x179de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179de4: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x179de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x179de8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x179de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179dec: 0xc056334  jal         func_158CD0
    ctx->pc = 0x179DECu;
    SET_GPR_U32(ctx, 31, 0x179DF4u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x179DECu, 0x179DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DF4u;
label_179df4:
    // 0x179df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179df8:
    // 0x179df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179dfc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x179dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179e00: 0x3e00008  jr          $ra
    ctx->pc = 0x179E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179E08u;
    // 0x179e08: 0x0  nop
    ctx->pc = 0x179e08u;
    // NOP
    // 0x179e0c: 0x0  nop
    ctx->pc = 0x179e0cu;
    // NOP
    ctx->pc = 0x179e10u;
}
