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

// Function: sub_0012A810
// Address: 0x12a810 - 0x12a850
void sub_0012A810_0x12a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A810_0x12a810");
#endif

    switch (ctx->pc) {
        case 0x12a840u: goto label_12a840;
        default: break;
    }

    ctx->pc = 0x12a810u;

    // 0x12a810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12a814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a818: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12a818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12a81c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x12a820: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x12a820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x12a824: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12a824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a828: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a82c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x12a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a830: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x12a830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x12a834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12a834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a838: 0xc04aa14  jal         func_12A850
    ctx->pc = 0x12A838u;
    SET_GPR_U32(ctx, 31, 0x12A840u);
    ctx->pc = 0x12A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A850u, 0x12A838u, 0x12A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A840u;
label_12a840:
    // 0x12a840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a844: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x12a844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a848: 0x3e00008  jr          $ra
    ctx->pc = 0x12A848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A850u;
}
