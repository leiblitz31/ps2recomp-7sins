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

// Function: sub_00452580
// Address: 0x452580 - 0x4525c0
void sub_00452580_0x452580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452580_0x452580");
#endif

    switch (ctx->pc) {
        case 0x4525a8u: goto label_4525a8;
        default: break;
    }

    ctx->pc = 0x452580u;

    // 0x452580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x452580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x452584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452588: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x452588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45258c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x45258cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x452590: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x452590u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x452594: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452598: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x452598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45259c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x45259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4525a0: 0xc114970  jal         func_4525C0
    ctx->pc = 0x4525A0u;
    SET_GPR_U32(ctx, 31, 0x4525A8u);
    ctx->pc = 0x4525C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4525C0u, 0x4525A0u, 0x4525A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4525A8u;
label_4525a8:
    // 0x4525a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4525a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4525ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4525acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4525b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4525B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4525B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4525B8u;
    // 0x4525b8: 0x0  nop
    ctx->pc = 0x4525b8u;
    // NOP
    // 0x4525bc: 0x0  nop
    ctx->pc = 0x4525bcu;
    // NOP
    ctx->pc = 0x4525c0u;
}
