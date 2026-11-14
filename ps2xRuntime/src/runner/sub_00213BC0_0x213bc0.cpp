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

// Function: sub_00213BC0
// Address: 0x213bc0 - 0x213bf0
void sub_00213BC0_0x213bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213BC0_0x213bc0");
#endif

    switch (ctx->pc) {
        case 0x213bd8u: goto label_213bd8;
        default: break;
    }

    ctx->pc = 0x213bc0u;

    // 0x213bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213bcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213bd0: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x213BD0u;
    SET_GPR_U32(ctx, 31, 0x213BD8u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x213BD0u, 0x213BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BD8u;
label_213bd8:
    // 0x213bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213bdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x213bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x213be0: 0x3e00008  jr          $ra
    ctx->pc = 0x213BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213BE8u;
    // 0x213be8: 0x0  nop
    ctx->pc = 0x213be8u;
    // NOP
    // 0x213bec: 0x0  nop
    ctx->pc = 0x213becu;
    // NOP
    ctx->pc = 0x213bf0u;
}
