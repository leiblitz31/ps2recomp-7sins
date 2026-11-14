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

// Function: sub_00469730
// Address: 0x469730 - 0x469770
void sub_00469730_0x469730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469730_0x469730");
#endif

    switch (ctx->pc) {
        case 0x46974cu: goto label_46974c;
        default: break;
    }

    ctx->pc = 0x469730u;

    // 0x469730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46973c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469744: 0xc11a5dc  jal         func_469770
    ctx->pc = 0x469744u;
    SET_GPR_U32(ctx, 31, 0x46974Cu);
    ctx->pc = 0x469770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469770u, 0x469744u, 0x46974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46974Cu;
label_46974c:
    // 0x46974c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x469750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x469754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x469754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x469758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46975c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46975cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469760: 0x3e00008  jr          $ra
    ctx->pc = 0x469760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469768u;
    // 0x469768: 0x0  nop
    ctx->pc = 0x469768u;
    // NOP
    // 0x46976c: 0x0  nop
    ctx->pc = 0x46976cu;
    // NOP
    ctx->pc = 0x469770u;
}
