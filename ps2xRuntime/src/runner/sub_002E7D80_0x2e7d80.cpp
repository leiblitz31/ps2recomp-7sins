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

// Function: sub_002E7D80
// Address: 0x2e7d80 - 0x2e7de0
void sub_002E7D80_0x2e7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7D80_0x2e7d80");
#endif

    switch (ctx->pc) {
        case 0x2e7da8u: goto label_2e7da8;
        default: break;
    }

    ctx->pc = 0x2e7d80u;

    // 0x2e7d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e7d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e7d8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e7d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e7d90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7d94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D94u;
    {
        const bool branch_taken_0x2e7d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d94) {
            ctx->pc = 0x2E7DB0u;
            goto label_2e7db0;
        }
    }
    ctx->pc = 0x2E7D9Cu;
    // 0x2e7d9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e7d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7da0: 0xc050ee0  jal         func_143B80
    ctx->pc = 0x2E7DA0u;
    SET_GPR_U32(ctx, 31, 0x2E7DA8u);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x2E7DA0u, 0x2E7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DA8u;
label_2e7da8:
    // 0x2e7da8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7DA8u;
    {
        const bool branch_taken_0x2e7da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7da8) {
            ctx->pc = 0x2E7DD0u;
            goto label_2e7dd0;
        }
    }
    ctx->pc = 0x2E7DB0u;
label_2e7db0:
    // 0x2e7db0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7db4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7db8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7dbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e7dc0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e7dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7dc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7dc8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7dcc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2e7dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2e7dd0:
    // 0x2e7dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7dd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e7dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e7dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7DE0u;
}
