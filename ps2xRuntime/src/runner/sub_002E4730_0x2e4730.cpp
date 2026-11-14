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

// Function: sub_002E4730
// Address: 0x2e4730 - 0x2e4770
void sub_002E4730_0x2e4730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4730_0x2e4730");
#endif

    switch (ctx->pc) {
        case 0x2e474cu: goto label_2e474c;
        default: break;
    }

    ctx->pc = 0x2e4730u;

    // 0x2e4730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e4738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e473c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e4740: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e4740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4744: 0xc0b6700  jal         func_2D9C00
    ctx->pc = 0x2E4744u;
    SET_GPR_U32(ctx, 31, 0x2E474Cu);
    ctx->pc = 0x2D9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C00u, 0x2E4744u, 0x2E474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E474Cu;
label_2e474c:
    // 0x2e474c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e4750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e4754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e475c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e475cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e4760: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4768u;
    // 0x2e4768: 0x0  nop
    ctx->pc = 0x2e4768u;
    // NOP
    // 0x2e476c: 0x0  nop
    ctx->pc = 0x2e476cu;
    // NOP
    ctx->pc = 0x2e4770u;
}
