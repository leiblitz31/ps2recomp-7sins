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

// Function: sub_00235950
// Address: 0x235950 - 0x2359a0
void sub_00235950_0x235950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235950_0x235950");
#endif

    switch (ctx->pc) {
        case 0x23596cu: goto label_23596c;
        case 0x23597cu: goto label_23597c;
        case 0x23598cu: goto label_23598c;
        default: break;
    }

    ctx->pc = 0x235950u;

    // 0x235950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x235950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x235954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235958: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x235958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x23595c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x23595cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x235960: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x235960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x235964: 0xc08d5f4  jal         func_2357D0
    ctx->pc = 0x235964u;
    SET_GPR_U32(ctx, 31, 0x23596Cu);
    ctx->pc = 0x2357D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D0u, 0x235964u, 0x23596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23596Cu;
label_23596c:
    // 0x23596c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x235970: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235974: 0xc08d60c  jal         func_235830
    ctx->pc = 0x235974u;
    SET_GPR_U32(ctx, 31, 0x23597Cu);
    ctx->pc = 0x235830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235830u, 0x235974u, 0x23597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23597Cu;
label_23597c:
    // 0x23597c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x23597cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235980: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x235980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x235984: 0xc08d630  jal         func_2358C0
    ctx->pc = 0x235984u;
    SET_GPR_U32(ctx, 31, 0x23598Cu);
    ctx->pc = 0x2358C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2358C0u, 0x235984u, 0x23598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23598Cu;
label_23598c:
    // 0x23598c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23598cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235990: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x235990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x235994: 0x3e00008  jr          $ra
    ctx->pc = 0x235994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23599Cu;
    // 0x23599c: 0x0  nop
    ctx->pc = 0x23599cu;
    // NOP
    ctx->pc = 0x2359a0u;
}
