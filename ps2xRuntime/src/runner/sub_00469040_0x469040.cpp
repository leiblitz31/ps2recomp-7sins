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

// Function: sub_00469040
// Address: 0x469040 - 0x4690a0
void sub_00469040_0x469040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469040_0x469040");
#endif

    switch (ctx->pc) {
        case 0x469060u: goto label_469060;
        default: break;
    }

    ctx->pc = 0x469040u;

    // 0x469040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46904c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46904cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469050: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469054: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469058: 0xc11b3c4  jal         func_46CF10
    ctx->pc = 0x469058u;
    SET_GPR_U32(ctx, 31, 0x469060u);
    ctx->pc = 0x46CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF10u, 0x469058u, 0x469060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469060u;
label_469060:
    // 0x469060: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x469060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469064: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x469064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x469068: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46906c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x469070: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x469070u;
    {
        const bool branch_taken_0x469070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469070) {
            ctx->pc = 0x469084u;
            goto label_469084;
        }
    }
    ctx->pc = 0x469078u;
    // 0x469078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x469078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46907c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46907Cu;
    {
        const bool branch_taken_0x46907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46907c) {
            ctx->pc = 0x469088u;
            goto label_469088;
        }
    }
    ctx->pc = 0x469084u;
label_469084:
    // 0x469084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x469084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469088:
    // 0x469088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46908c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46908cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469090: 0x3e00008  jr          $ra
    ctx->pc = 0x469090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469098u;
    // 0x469098: 0x0  nop
    ctx->pc = 0x469098u;
    // NOP
    // 0x46909c: 0x0  nop
    ctx->pc = 0x46909cu;
    // NOP
    ctx->pc = 0x4690a0u;
}
