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

// Function: sub_00109BB0
// Address: 0x109bb0 - 0x109bf0
void sub_00109BB0_0x109bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109BB0_0x109bb0");
#endif

    switch (ctx->pc) {
        case 0x109bc8u: goto label_109bc8;
        case 0x109bd8u: goto label_109bd8;
        default: break;
    }

    ctx->pc = 0x109bb0u;

    // 0x109bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109bb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x109bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x109bbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109bc0: 0xc042668  jal         func_1099A0
    ctx->pc = 0x109BC0u;
    SET_GPR_U32(ctx, 31, 0x109BC8u);
    ctx->pc = 0x1099A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1099A0u, 0x109BC0u, 0x109BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BC8u;
label_109bc8:
    // 0x109bc8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x109bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x109bcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bd0: 0xc0426fc  jal         func_109BF0
    ctx->pc = 0x109BD0u;
    SET_GPR_U32(ctx, 31, 0x109BD8u);
    ctx->pc = 0x109BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109BF0u, 0x109BD0u, 0x109BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BD8u;
label_109bd8:
    // 0x109bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109bdc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x109bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x109be0: 0x3e00008  jr          $ra
    ctx->pc = 0x109BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109BE8u;
    // 0x109be8: 0x0  nop
    ctx->pc = 0x109be8u;
    // NOP
    // 0x109bec: 0x0  nop
    ctx->pc = 0x109becu;
    // NOP
    ctx->pc = 0x109bf0u;
}
