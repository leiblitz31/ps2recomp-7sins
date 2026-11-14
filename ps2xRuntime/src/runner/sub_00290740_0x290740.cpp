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

// Function: sub_00290740
// Address: 0x290740 - 0x290780
void sub_00290740_0x290740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290740_0x290740");
#endif

    switch (ctx->pc) {
        case 0x290758u: goto label_290758;
        case 0x290768u: goto label_290768;
        default: break;
    }

    ctx->pc = 0x290740u;

    // 0x290740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290748: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x290748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29074c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x29074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x290750: 0xc0a426c  jal         func_2909B0
    ctx->pc = 0x290750u;
    SET_GPR_U32(ctx, 31, 0x290758u);
    ctx->pc = 0x2909B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2909B0u, 0x290750u, 0x290758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290758u;
label_290758:
    // 0x290758: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x290758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29075c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29075cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290760: 0xc0a422c  jal         func_2908B0
    ctx->pc = 0x290760u;
    SET_GPR_U32(ctx, 31, 0x290768u);
    ctx->pc = 0x2908B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908B0u, 0x290760u, 0x290768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290768u;
label_290768:
    // 0x290768: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29076c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29076cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290770: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x290770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x290774: 0x3e00008  jr          $ra
    ctx->pc = 0x290774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29077Cu;
    // 0x29077c: 0x0  nop
    ctx->pc = 0x29077cu;
    // NOP
    ctx->pc = 0x290780u;
}
