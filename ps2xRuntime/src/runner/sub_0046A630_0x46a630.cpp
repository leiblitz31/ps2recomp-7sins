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

// Function: sub_0046A630
// Address: 0x46a630 - 0x46a670
void sub_0046A630_0x46a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A630_0x46a630");
#endif

    switch (ctx->pc) {
        case 0x46a64cu: goto label_46a64c;
        default: break;
    }

    ctx->pc = 0x46a630u;

    // 0x46a630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46a634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a63c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a640: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a644: 0xc11a99c  jal         func_46A670
    ctx->pc = 0x46A644u;
    SET_GPR_U32(ctx, 31, 0x46A64Cu);
    ctx->pc = 0x46A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A670u, 0x46A644u, 0x46A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A64Cu;
label_46a64c:
    // 0x46a64c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46a650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x46a654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46a658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a65c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46a65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46a660: 0x3e00008  jr          $ra
    ctx->pc = 0x46A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A668u;
    // 0x46a668: 0x0  nop
    ctx->pc = 0x46a668u;
    // NOP
    // 0x46a66c: 0x0  nop
    ctx->pc = 0x46a66cu;
    // NOP
    ctx->pc = 0x46a670u;
}
