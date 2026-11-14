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

// Function: sub_0011A820
// Address: 0x11a820 - 0x11a870
void sub_0011A820_0x11a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A820_0x11a820");
#endif

    switch (ctx->pc) {
        case 0x11a840u: goto label_11a840;
        case 0x11a858u: goto label_11a858;
        default: break;
    }

    ctx->pc = 0x11a820u;

    // 0x11a820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11a824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a828: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11a82c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x11a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x11a830: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x11a830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x11a834: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x11a834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x11a838: 0xc046a54  jal         func_11A950
    ctx->pc = 0x11A838u;
    SET_GPR_U32(ctx, 31, 0x11A840u);
    ctx->pc = 0x11A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A950u, 0x11A838u, 0x11A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A840u;
label_11a840:
    // 0x11a840: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11a840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a844: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x11a844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a848: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x11a848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a84c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x11a84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x11a850: 0xc046a1c  jal         func_11A870
    ctx->pc = 0x11A850u;
    SET_GPR_U32(ctx, 31, 0x11A858u);
    ctx->pc = 0x11A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A870u, 0x11A850u, 0x11A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A858u;
label_11a858:
    // 0x11a858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a85c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11a860: 0x3e00008  jr          $ra
    ctx->pc = 0x11A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A868u;
    // 0x11a868: 0x0  nop
    ctx->pc = 0x11a868u;
    // NOP
    // 0x11a86c: 0x0  nop
    ctx->pc = 0x11a86cu;
    // NOP
    ctx->pc = 0x11a870u;
}
