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

// Function: sub_00197730
// Address: 0x197730 - 0x197770
void sub_00197730_0x197730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197730_0x197730");
#endif

    switch (ctx->pc) {
        case 0x197760u: goto label_197760;
        default: break;
    }

    ctx->pc = 0x197730u;

    // 0x197730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197738: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x197738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19773c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19773cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x197740: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x197740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x197744: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x197744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197748: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19774c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x19774cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197750: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x197750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x197754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197758: 0xc065ddc  jal         func_197770
    ctx->pc = 0x197758u;
    SET_GPR_U32(ctx, 31, 0x197760u);
    ctx->pc = 0x197770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197770u, 0x197758u, 0x197760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197760u;
label_197760:
    // 0x197760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197764: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x197764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x197768: 0x3e00008  jr          $ra
    ctx->pc = 0x197768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197770u;
}
