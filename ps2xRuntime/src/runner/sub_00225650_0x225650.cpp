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

// Function: sub_00225650
// Address: 0x225650 - 0x225690
void sub_00225650_0x225650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225650_0x225650");
#endif

    switch (ctx->pc) {
        case 0x22567cu: goto label_22567c;
        default: break;
    }

    ctx->pc = 0x225650u;

    // 0x225650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225658: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x225658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22565c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x225660: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x225660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x225664: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x225664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225668: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x225668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22566c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22566cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225670: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x225670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x225674: 0xc0895a4  jal         func_225690
    ctx->pc = 0x225674u;
    SET_GPR_U32(ctx, 31, 0x22567Cu);
    ctx->pc = 0x225690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225690u, 0x225674u, 0x22567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22567Cu;
label_22567c:
    // 0x22567c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22567cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225680: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x225680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x225684: 0x3e00008  jr          $ra
    ctx->pc = 0x225684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22568Cu;
    // 0x22568c: 0x0  nop
    ctx->pc = 0x22568cu;
    // NOP
    ctx->pc = 0x225690u;
}
