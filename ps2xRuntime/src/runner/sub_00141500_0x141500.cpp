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

// Function: sub_00141500
// Address: 0x141500 - 0x141540
void sub_00141500_0x141500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141500_0x141500");
#endif

    switch (ctx->pc) {
        case 0x14152cu: goto label_14152c;
        default: break;
    }

    ctx->pc = 0x141500u;

    // 0x141500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x141504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141508: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x141508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14150c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14150cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x141510: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x141510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x141514: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x141514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141518: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x141518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14151c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x14151cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141520: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x141520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x141524: 0xc050550  jal         func_141540
    ctx->pc = 0x141524u;
    SET_GPR_U32(ctx, 31, 0x14152Cu);
    ctx->pc = 0x141540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141540u, 0x141524u, 0x14152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14152Cu;
label_14152c:
    // 0x14152c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141530: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x141534: 0x3e00008  jr          $ra
    ctx->pc = 0x141534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14153Cu;
    // 0x14153c: 0x0  nop
    ctx->pc = 0x14153cu;
    // NOP
    ctx->pc = 0x141540u;
}
