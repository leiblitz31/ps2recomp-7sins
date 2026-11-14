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

// Function: sub_002B7800
// Address: 0x2b7800 - 0x2b7840
void sub_002B7800_0x2b7800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7800_0x2b7800");
#endif

    switch (ctx->pc) {
        case 0x2b7830u: goto label_2b7830;
        default: break;
    }

    ctx->pc = 0x2b7800u;

    // 0x2b7800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b7800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b7804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7808: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b7808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b780c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b780cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b7810: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b7810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b7814: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b7814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7818: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b7818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b781c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b781cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7820: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2b7820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b7824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b7824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7828: 0xc0ade10  jal         func_2B7840
    ctx->pc = 0x2B7828u;
    SET_GPR_U32(ctx, 31, 0x2B7830u);
    ctx->pc = 0x2B7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7840u, 0x2B7828u, 0x2B7830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7830u;
label_2b7830:
    // 0x2b7830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7834: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b7834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b7838: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7840u;
}
