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

// Function: sub_00210740
// Address: 0x210740 - 0x210780
void sub_00210740_0x210740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210740_0x210740");
#endif

    switch (ctx->pc) {
        case 0x210770u: goto label_210770;
        default: break;
    }

    ctx->pc = 0x210740u;

    // 0x210740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x210744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210748: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x210748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21074c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x21074cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x210750: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x210750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x210754: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210758: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x210758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21075c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x21075cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210760: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x210760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x210764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x210764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210768: 0xc0841e0  jal         func_210780
    ctx->pc = 0x210768u;
    SET_GPR_U32(ctx, 31, 0x210770u);
    ctx->pc = 0x210780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210780u, 0x210768u, 0x210770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210770u;
label_210770:
    // 0x210770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210774: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x210774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x210778: 0x3e00008  jr          $ra
    ctx->pc = 0x210778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210780u;
}
