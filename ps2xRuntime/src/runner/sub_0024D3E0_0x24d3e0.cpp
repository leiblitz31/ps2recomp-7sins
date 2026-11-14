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

// Function: sub_0024D3E0
// Address: 0x24d3e0 - 0x24d420
void sub_0024D3E0_0x24d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D3E0_0x24d3e0");
#endif

    switch (ctx->pc) {
        case 0x24d400u: goto label_24d400;
        case 0x24d410u: goto label_24d410;
        default: break;
    }

    ctx->pc = 0x24d3e0u;

    // 0x24d3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24d3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d3e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24d3ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24d3f0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x24d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24d3f4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x24d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d3f8: 0xc093538  jal         func_24D4E0
    ctx->pc = 0x24D3F8u;
    SET_GPR_U32(ctx, 31, 0x24D400u);
    ctx->pc = 0x24D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4E0u, 0x24D3F8u, 0x24D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D400u;
label_24d400:
    // 0x24d400: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24d400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24d404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d408: 0xc093508  jal         func_24D420
    ctx->pc = 0x24D408u;
    SET_GPR_U32(ctx, 31, 0x24D410u);
    ctx->pc = 0x24D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D420u, 0x24D408u, 0x24D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D410u;
label_24d410:
    // 0x24d410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d414: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24d414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d418: 0x3e00008  jr          $ra
    ctx->pc = 0x24D418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D420u;
}
